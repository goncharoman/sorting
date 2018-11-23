void	swap(int *n1, int *n2)
{
	*n1 = *n1 + *n2;
	*n2 = *n1 - *n2;
	*n1 = *n1 - *n2;
}

int	*bubble_sort(int size, int *array)
{
	int count = 1;
	int i;

	while (count > 0)
	{
		count = 0;
		i = -1;
		while (++i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				count++;
			}
		}
	}
	return (array);
}