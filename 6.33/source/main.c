#include<stdio.h>
#include<stdlib.h>
#define SIZE 15
int binarySearch(int low,int high,int key);
int record[SIZE] = { 0,2,4,6,8,10,12,14,16,18,20,22,24,26,28 };

int main(void)
{
	
	int number,i,max=0,min=100;
	printf("Enter the number between 0 and 28¡G ");
	scanf_s("%d",&number);
	if (number > 28 || number < 0 || number % 2 == 1)
	{
		printf("%3d is not found", number);
		system("pause");
		return 0;
	}
	for (i = 0; i <=14; i++)
	{
		if (max < record[i])
		{
			max = record[i];
		}
		if (min > record[i])
		{
			min = record[i];
		}
		printf("%3d",record[i]);
	}
	printf("\n");
	printf("%5d\n", binarySearch(min, max, number));
	system("pause");
	return 0;
}
int binarySearch(int low, int high, int key)
{
	int middle,i;
	middle = (low + high) / 2;
	if (middle % 2==1)
	{
		middle = middle + 1;
	}
	if (key == middle)
	{
		return middle;
	}
	else if (key < middle)
	{
		for (i = low; i <= middle; i++)
		{
			if (i % 2 == 0)
				printf("%3d",i);
		}
		printf("\n");
		high = middle;
		binarySearch(low, high, key);
	}
	else if(key>middle)
	{
		for (i = middle; i <= high; i++)
		{
			if (i % 2 == 0)
				printf("%3d", i);
		}
		printf("\n");
		low = middle;
		binarySearch(low, high, key);
	}
	
}