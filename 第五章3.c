#include<stdio.h>
int main()
{
	int p,q,n,m,temp;
	printf("请输入正整数n:");
	scanf("%d,",&n);
	printf("请输入正整数m:");
	scanf("%d,",&m);
	if(n<m)
	{
		temp=n;
		n=m;
		m=temp;
	}
	p=n*m;
	while(m!=0)
	{
		q=n%m;
		n=m;
		m=q;
	}
	printf("它们的最大公约数为:%d\n",n);
    printf("它们的最小公倍数为:%d\n",p/n);
}