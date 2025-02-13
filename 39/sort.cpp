#include "util.h"

void bubble_sort(int* array, int size) {


	for (int g = 0; g < size - 1; g++)
	{
		bool flag = true;
		for (int i = 0; i < size - 1 - g; i++)
		{
			if (array[i] > array[i + 1])
			{
				int t = array[i + 1];
				array[i + 1] = array[i];
				array[i ] = t;
				flag = false;
			}
		}
		if(flag){
			break;
		}
	}
	cout << "count= " <<count<< endl;
}