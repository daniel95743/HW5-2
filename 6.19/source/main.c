#include<stdio.h>
#include<stdlib.h>
#define SIZE 1001
int main(void)
{
	int record[SIZE];
	int i,roll,roll2,n=0;

	srand(time(NULL));

	for (i = 1; i <SIZE; i++)
	{
		roll = 1 + rand() % 6;
		roll2 = 1 + rand() % 6;
		record[i] = roll+roll2;
		n++;
	}
	for (i = 1; i <SIZE; i++)
	{
		
		printf("%3d", record[i]);
		if (i % 10 == 0)
			printf("\n");
	}
	printf("\n%d\n",n);
	system("pause");
	return 0;
}