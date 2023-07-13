#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum ran
 * @max: maximum rang
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
        int *ptr;
        int i, k = 0;

        if (min > max)
                return (NULL);
ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
return (NULL);
for (i = min; i <= max; i++)
{
        *(ptr + k) = i;
        k++;
}
return (ptr);
}
