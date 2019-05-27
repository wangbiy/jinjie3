#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//memcpy的模拟实现
void* my_memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (count)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
		count--;
	}
	return ret;
}
int main()
{
	char arr1[]="abcdef";
	int arr2[6] = { 0 };
	///*char arr1[10] = { 0 };
	//char arr2[] = "abc";*/
	//strcpy(arr2, arr1);
	my_memcpy(arr2, arr1, 6);
	printf("%s\n", arr2);
	system("pause");
	return 0;
}
