#include "sort.h"

/**
 * swap_items - Swaps two items in an array.
 * @array: The array to modify.
 * @l: The index of the left item.
 * @r: The index of the right item.
 */
void swap_items(int *array, size_t l, size_t r)
{
int tmp;

if (array != NULL)
{
tmp = array[l];
array[l] = array[r];
array[r] = tmp;
}
}

/**
 * quick_sort_range_lomuto - Sorts a sub array using the
 * quick sort algorithm and Lomuto's partition scheme.
 * @array: The array containing the sub-array.
 * @low: The starting position of the sub-array.
 * @high: The ending position of the sub-array.
 * @size: The length of the array.
 */

void quick_sort_range_lomuto(int *array, size_t low, size_t high, size_t size)
{
size_t i, j;
int pivot;

if ((low >= high) || (array == NULL))
return;
pivot = array[high];
i = low;
for (j = low; j < high; j++)
{
if (array[j] <= pivot)
{
if (i != j)
{
swap_items(array, i, j);
print_array(array, size);
}
i++;
}
}
if (i != high)
{
swap_items(array, i, high);
print_array(array, size);
}
if (i - low > 1)
quick_sort_range_lomuto(array, low, i - 1, size);
if (high - i > 1)
quick_sort_range_lomuto(array, i + 1, high, size);
}

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array to be used
 * @size: size of the array
 * Return: nothing
*/
void quick_sort(int *array, size_t size)
{
if (array != NULL)
{
quick_sort_range_lomuto(array, 0, size - 1, size);
}
}
