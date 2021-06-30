#include<stdio.h>
void main()
{
	int a[3][3],i,j,sum=0;
	int *p[3][3];
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Input elements in the matrix: element- [%d][%d]: ",i,j);
		    scanf("%d",&a[i][j]);
		    p[i][j]=&a[i][j];
		}
		
	}
	printf("The matrix is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",*p[i][j]);
			
			}	
		printf("\n");

	}
	for(i=0;i<3;i++)
	{
		sum=sum+*p[i][i];
	}
	printf("Sum of all diagonal element is: %d",sum);
	
}
