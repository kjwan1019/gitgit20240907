#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int num, i, j;

	printf("���ڿ� ���� �Է�: ");
	scanf("%d", &num);

	char* arr = (char*)malloc(sizeof(char) * (num + 1));
	
	getchar();
	
	printf("���ڿ� �Է�: ");
	
	fgets(arr, sizeof(arr), stdin);

	printf("%c", arr[2]);

	for (i = 0; i < num; i++)
	{
		if (arr[i] == ' ')
		{
			for (j = i - 1; arr[j] != ' '; j--)
			{
				printf("%c", arr[j]);
			}
			printf(" ");
		}
	}

	printf()
}