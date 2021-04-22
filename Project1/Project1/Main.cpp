#include "Main.h"

#define ARRAY_NUM 10

void main() {
	char arr[10];
	char ch;
	int i, j;

	for (i = 0; i < ARRAY_NUM; i++) {
		arr[i] = '\0';
	}

	for (j = 0; j < ARRAY_NUM; j++) {
		printf("a~c �� �Է��غ����� �׿ܸ� �Է��ϸ� ���α׷��� ����˴ϴ�.");

		fseek(stdin, 0, SEEK_END);
		scanf_s("%c", &ch, sizeof(ch));

		if ('a' > ch || 'c' < ch)
		{
			printf("���α׷��� ����!!!\n");
			break;
		}
		AddData(ch, arr);
	}
	printf("���α׷� �Է� ������ ������ �����ϴ�.\n\n");
	printArray( arr);
	fgetc(stdin);
}

void AddData(char ch,char arr[])
{
	static int k=0;

	arr[k++] = ch;
}

void printArray(char arr[])
{
	int i;

	for (i = 0; i < ARRAY_NUM; i++) {
		if (arr[i] == '\0')
			break;
		printf("%c\n", arr[i]);
	}
}
