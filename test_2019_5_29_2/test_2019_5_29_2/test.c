//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int Compare(char* arr1,char* arr2 )
{
	int i = 0; 
	int j = 0;
	int len = strlen(arr1);
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	for (i = 0; i < len;i++)
	{
		char tmp = arr1[0];//����һ��Ԫ�ش�����
		for (j = 0; j < len-1; j++)
		{
			arr1[j] = arr1[j + 1];
		}
		arr1[len - 1] = tmp;
		if (0 == strcmp(arr1, arr2))
			return 1;
	}
	return 0;
}
int main()
{
	char str1[] = "DAABC";
	char str2[] = "AABCD";
	if (Compare(str1, str2) == 1)
		printf("str1Ϊstr2��ת����ַ�\n");
	else
		printf("str1��Ϊstr2��ת����ַ�\n");
	system("pause");
	return 0;
}