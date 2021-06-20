#include<stdio.h>

main()
{
	int a,b;
	printf("Enter two variables to swap:\n");
	scanf("%d%d",&a,&b);
	printf("Before Swapping a=%d and b=%d\n", a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swapping a=%d and b=%d\n", a,b);
	return 0;
	
}
