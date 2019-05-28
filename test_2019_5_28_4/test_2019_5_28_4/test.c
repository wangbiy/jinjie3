#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//memsetÄ£ÄâÊµÏÖ
void* my_memset(void* src, int val, size_t count)
{
	assert(src != NULL);
	void* ret = src;
	while (count--)
	{
		*(char*)src = (char)val;
		src=(char*)src+1;
	}
	return ret;
}
int main()
{
	char arr[] = "abcdefg";
	char*ret=my_memset(arr, '*', 4);
	printf("%s\n", ret);
	system("pause");
	return 0;
}