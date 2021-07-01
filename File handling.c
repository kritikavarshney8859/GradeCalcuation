#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp,*fp1;
	int ft,i=0;
	fp=fopen("My captain.txt","r");
	fp1=fopen("copy.txt","w");
	
	if(fp==NULL)
	{
		printf("ERROR");
		return 0;
	}
	fseek(fp,0,SEEK_END);
	ft=ftell(fp);
	while(i<ft)
	{
		i++;
		fseek(fp,-i,SEEK_END);
		printf("%c",fgetc(fp));
	}
	i=fgetc(fp);
	while(i!=EOF)
	{
	    fputc(i,fp1);
		  i=getc(fp);	
	}
	fclose(fp);
	fclose(fp1);
	printf(" File is successfully copied");
	return 0;
}
