#include <stdio.h>

int main(void)
{
	int i;
	int array[5] = {23,45,67,78,76};
	for (i = 0; i < 5; i++)
	{
		printf("Array before insertion\n");
		printf("array[%d] = %d\n", i,array[i]);
	}
	printf("insert elements");
	scanf("%d\n", array);
	for (i = 0; i < 5; i++)
	{
		array[i] = i + 2;
		printf("array[%d] = %d\n", i,array[i]);
	}
	return 0;
}
