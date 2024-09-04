void func(int* arr1, int* arr2, int* res, int len1, int len2)
{
	int flag1 = 0, flag2 = 0;
	for(int i = 0; i < len1 + len2; i++)
	{
		if(flag1 == len1)
		{
			res[i] = arr2[flag2++];
			continue;
		}
		if(flag2 == len2)
		{
			res[i] = arr1[flag1++];
			continue;
		}
		if(arr1[flag1] < arr2[flag2])
		{
			res[i] = arr1[flag1++];
		}
		else
		{
			res[i] = arr2[flag2++];	
		}
	}
}
