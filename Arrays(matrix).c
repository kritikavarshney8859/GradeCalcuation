#include<stdio.h>
main()
{

int i=0;
int j=0;
int a[3][3];
printf("Input elements in the matrix: \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("The matrix is:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d ",a[i][j] );
	}
    printf("\n");
}
return;
}
