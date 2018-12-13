#include <stdio.h>
#include <stdlib.h>

int maximum(int array2[],int start,int max);
int array[10] = { 0,8,41,53,78,52,96,62,9,2 };
int main(void)
{
	int i = 0,temp=0,a;
	a = maximum(array[10], i, temp);
	printf("%d\n", a);
	system("pause");
	return 0;
}
int maximum(int array2[], int start,int max)
{
	if (start >= 10)
		return max;
	if (array[start] >max)
	{
		max = array[start];
		maximum(array, start+1, max);
	}
	else
	{
		maximum(array, start + 1, max);
	}
	
}