#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

void* _memcpy(void* dest,const void* src, size_t sz)
{
	assert(dest && src);

	void* ret = dest;

	while (sz--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}

	return ret;
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };

	_memcpy(arr + 3, arr, 12);

	size_t sz = sizeof(arr) / sizeof(int);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;

}