int new_binary_search(int* arr, int len, int x)
{
	int left = 0;
	int right = len - 1;
	int search = -1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x == arr[mid]) {
			search = mid;
			right = mid - 1;
			continue;
		}
		if (x < arr[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return search;
}
