#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//memmove��ģ��ʵ��
void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest < src)//ǰ����
	{
		while (count)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
			count--;
		}
	}
	else//��ǰ
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	my_memmove(arr, arr + 2, 16);
	system("pause");
	return 0;
}