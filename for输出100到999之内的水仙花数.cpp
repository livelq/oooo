#include<stdio.h>
int main()
{
	int x,g,sh,b;
	printf("水仙花数是：\n");
	for(x=100;x<999;x++)   /*中间表达式不用写x>=100*/
	{
		g=x%10;
		sh=x/10%10;
		b=x/100;
		if(x==g*g*g+sh*sh*sh+b*b*b)
			printf("%d\n",x);
	}
}
