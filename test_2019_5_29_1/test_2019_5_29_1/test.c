//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
void Remove(char* arr, int k,int len)
{
	assert(arr != NULL);
	while (k--)
	{
		int j = 0;
		char tmp = arr[0];//����һ��Ԫ�ش�����
		for (j = 0; j < len; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}

int main()
{
	char arr[]= "abcdefg";
	int k = 0;
	int len = strlen(arr);
	printf("��ת��λ:\n");
	scanf("%d", &k);
	while (k < 1 || k > len - 1)
	{
		if (k == len)
		{
			printf("%s ", arr);
			return 0;
		}
		else
		{
			printf("�������\n");
			scanf("%d", &k);
		}
	}
	Remove(arr, k,len);
	printf("��ת��Ϊ:%s\n", arr);
	system("pause");
	return 0;
}