#include<stdio.h>
int main()
{
	int num, i = 2, n;
	printf("Enter number : ");
	scanf_s("%d", &num);
	printf("Factoring result : ");
	while (num != 1) {
		while (num % i == 0)
		{
			if (num / i == 1)
			{
				printf("%d ", i);
				return 0;
			}
			printf("%d x ", i);
			num = num / i;
		}
		i++;
	}
	return 0;
}