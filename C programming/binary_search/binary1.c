int nonrecursive_binary_search(int* arr, int len, int x)
{
	int left = 0;
	int right = len - 1;
	int search = -1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x == arr[mid]) {
			search = mid;
			break;
		}
		if (x < arr[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return search;
}

int recursive_binary_search(int x, int* arr, int left, int right)
{
	int mid = (left + right) / 2;
	if (left > right)
		return -1;
	if (x == arr[mid])
		return mid;
	if (x < arr[mid])
		return recursive_binary_search(x, arr, left, mid - 1);
	else
		return recursive_binary_search(x, arr, mid + 1, right);
}
