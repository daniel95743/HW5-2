#include<stdio.h>
#include<stdlib.h>

char * ReversesString(char * pString)
{
	if (NULL == pString)
		return;

	char * pStart = pString;
	char * pEnd = pStart + strlen(pString) - 1;

	while (pEnd > pStart)
	{
		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		pStart++;
		pEnd--;
	}
	return pString;
}

int main(void)
{
	char word[100];
	printf("Enter the string¡G");
	gets(word);
	printf("%s", ReversesString(word));
	printf("\n");
	system("pause");
	return 0;
}


