#include<stdio.h>
int prime_or_not(int,int);
int main()

{
	int num,prime;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num==0||num==1)
	printf("%d number is not a prime number\n",num);
	else
	{
		prime=prime_or_not(num,num/2);
		if (prime==1)
		printf("%d is a prime number:\n",num);
		else 
		printf("%d is not a prime number\n",num);
	}
return 0;
	
}
int prime_or_not(int num,int i)
{
    if (i==1)
    {return 1;
	}
	else{
	   	if (num%i==0)
	    return 0;
	    else
       	prime_or_not(num,i-1);
	}
	
	
}
