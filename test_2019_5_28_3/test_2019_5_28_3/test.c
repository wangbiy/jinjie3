#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//memcmpÄ£ÄâÊµÏÖ
void* my_memcmp(const void* buf1, const void* buf2, size_t count)
{
	assert(buf1 != NULL);
	assert(buf2 != NULL);
	while (count--)
	{
		while (*(char*)buf1 == *(char*)buf2)
		{
			((char*)buf1)++;
			((char*)buf2)++;
		}
	}
	return (*(char*)buf1) - (*(char*)buf2);
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 3, 3, 3, 3 };
	int ret = my_memcmp(arr1, arr2, 24);
	printf("ret=%d\n", ret);
	system("pause");
	return 0;
}