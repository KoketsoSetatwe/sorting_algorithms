#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: array size
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
i = 0;
j = 0;
if (array == NULL || size < 2)
{
return;
}

for (; i < size - 1; i++)
{
for (; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}
