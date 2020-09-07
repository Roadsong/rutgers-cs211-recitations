#include <stdio.h>

int i = 1;

int test(int i)
{
	return i * i;
}

int main(int argc, char const *argv[])
{
    int i = 2;

	{
		int i = 3;
	}

	for (int i = 4; i < 10; ++i)
	{
		;
	}

	printf("%d\n", test(i));

	return 0;
}