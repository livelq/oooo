#include<stdio.h>
int main()
{
	int x,i,flag;
	printf("������һ������");	
	scanf("%d",&x);
	for(i=2;i<x;i++)
	if(x%i==0) 
	{	flag=0;
		break;
	}
	if(flag==1)      /*!!!!==����=!!!*/ 
		printf("%d������",x);
	else
		printf("%d��������",x);
}
