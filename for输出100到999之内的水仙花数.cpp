#include<stdio.h>
int main()
{
	int x,g,sh,b;
	printf("ˮ�ɻ����ǣ�\n");
	for(x=100;x<999;x++)   /*�м���ʽ����дx>=100*/
	{
		g=x%10;
		sh=x/10%10;
		b=x/100;
		if(x==g*g*g+sh*sh*sh+b*b*b)
			printf("%d\n",x);
	}
}
