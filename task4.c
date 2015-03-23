// search first greater than x
// return index on success or -1 on fail
int bsearch(int data[], int count, int x)
{
	int begin = -1;
	int end = count - 1;

	if (count == 0 || data[count - 1] <= x) return -1;

	while (begin + 1 != end)
	{
		int center = (begin + end) / 2;

		if (data[center] <= x)
		{
			begin = center;
		}
		else
		{
			end = center;
		}
	}

	return end;
}

int main()
{
	{
		int data[] = { 0 };
		int res1 = bsearch(data, sizeof(data) / sizeof(int), 0); // -1
		int res2 = bsearch(data, sizeof(data) / sizeof(int), -1); // 0
	}
	
	{
		int data[] = { 0, 1, 2, 6, 7, 8};
		int res1 = bsearch(data, sizeof(data) / sizeof(int), 4); // 3
		int res2 = bsearch(data, sizeof(data) / sizeof(int), 9); // -1
		int res3 = bsearch(data, sizeof(data) / sizeof(int), 0); // 1
	}

	return 0;
}
