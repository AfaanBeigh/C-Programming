#include<stdio.h>
int main()
{
	int n, i, j, a;
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("Prime numbers are : \n");
	for(i=1; i<=n; i++)
	{
		a=0;
		for(j=1; j<=n; j++)
		{
			if(i%j==0)
			a++;
		}
		if(a==2)
		printf("%d ", i);
	}
	return 0;
}
