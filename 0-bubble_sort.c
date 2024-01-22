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
int temp, flagged = 0;
if (array == NULL || size == 0)
{
return;
}

for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
flagged = 1;
}
}
if (flagged == 0)
{
break;
}
}
}
