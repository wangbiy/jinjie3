//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
		char tmp = arr[0];//将第一个元素存起来
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
	printf("旋转几位:\n");
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
			printf("输入错误\n");
			scanf("%d", &k);
		}
	}
	Remove(arr, k,len);
	printf("旋转后为:%s\n", arr);
	system("pause");
	return 0;
}