//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
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
		char tmp = arr1[0];//将第一个元素存起来
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
		printf("str1为str2旋转后的字符\n");
	else
		printf("str1不为str2旋转后的字符\n");
	system("pause");
	return 0;
}