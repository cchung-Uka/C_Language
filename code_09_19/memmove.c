#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

void* _memmove(void* dest, const void* src, size_t sz)
{
	assert(dest && src);
	
	void* ret = dest;

	if (dest < src)
	{
		//从前往后
		while (sz--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//从后往前
		while (sz--)
		{
			*((char*)dest + sz) = *((char*)src + sz);
		}
	}

	return ret;
}

void print_int(int* arr, size_t sz)
{
	for (int i = 0; i < sz; i++)
		printf("%d ", *(arr + i));

	printf("\n");
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	size_t sz = sizeof(arr) / sizeof(int);

	//dest < src
	//_memmove(arr + 1, arr + 3, 12);

	//dest > src
	_memmove(arr + 3, arr + 1, 16);

	print_int(arr, sz);

	return 0;
}