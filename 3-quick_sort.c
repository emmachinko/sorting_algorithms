include "sort.h"

/**
 * partition - scans a partition of an array of integers
 * and swaps them with first value in partition, then swaps pivot value
 * @array: array of integers
 * @low: index in array that starts the partition 
 * @high: index in array that ends the partition
 * @size: amount of elements in array
 * Return: return the position of the last element
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, j, pivot, temp;

	pivot = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (array[i] != array[j])
				print_array(array, size);
			i++;
		}
	}
	temp = array[i];
	array[i] = array[high];
	array[high] = temp;
	if (array[i] != array[high])
		print_array(array, size);
	return (i);
}

/**
 * quicksort - recursively sorts array of integers by separating into two
 * partitions, using Lomuto quick sort
 * @array: array of integers
 * @low: index in array that starts the partition
 * @high: index in array that ends the partition
 * @size: amount of elements in array
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using a quick
 * sort algorithm, with Lomuto partition scheme
 * @array: array of integers
 * @size: amount of elements in array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quicksort(array, 0, (int)size - 1, size);
}
