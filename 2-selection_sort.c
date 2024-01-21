#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array to be used
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min_index, temp;
i = 0;
j = 0;
if (array == NULL || size < 2)
{
return;
}
/* Loop through array*/
for (i = 0; i < size - 1; i++)
{
min_index = i;

/*Find the smallest number */
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_index])
{
min_index = j;
}
}
if (min_index != i)
{
/*Swap element until smallest is before larger numbers*/
temp = array[min_index];
array[min_index] = array[i];
array[i] = temp;
print_array(array, size);
}
}
}
