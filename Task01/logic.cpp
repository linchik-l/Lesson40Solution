#include "logic.h"

void bubble_sort(int* array, int size, bool type) {
	for (int j = 0; j < size - 1; j++)
	{
		bool flag = true;

		for (int i = 0; i < size - 1 - j; i++)
		{
			if ( type ? array[i] > array[i + 1] :array[i] < array[i + 1]) {
				flag = false;
				int a = array[i];
				array[i] = array[i + 1];
				array[i + 1] = a;
			}
		}
		if (flag) {
			break;
		}
	}
}