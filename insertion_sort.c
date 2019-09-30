#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int n, array[1000], i, j, k;

	printf("Enter number of elements\n");
	scanf_s("%d", &n);

	printf("Enter %d integers\n", n);

	for (i = 0; i < n; i++)
		scanf_s("%d", &array[i]);

	for (i = 1; i <= n - 1; i++) {
		j = i;

		while (j > 0 && array[j - 1] > array[j]) {
			k = array[j];
			array[j] = array[j - 1];
			array[j - 1] = k;

			j--;
		}
	}

	printf("Sorted list in ascending order:\n");

	for (i = 0; i <= n - 1; i++) {
		printf("%d\n", array[1]);
	}

	return 0;
}