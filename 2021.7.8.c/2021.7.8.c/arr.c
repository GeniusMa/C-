#include "arr.h"

void bubble_sort(int arr[],int sz) 
{
	int i = 0;
	for (i = 0; i < sz - 1; i++) 
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j <sz-i-1 ; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				int temp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				flag = 0;
			}
			if (flag == 1) 
			{
				break;
			}
		}
	}
}