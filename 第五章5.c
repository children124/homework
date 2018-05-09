#include<stdio.h>
int main()
{
	int a,n,i=1,sn=0,tn=0;
	printf("请输入a的值:");
	scanf("%d",&a);
	printf("请输入n的值:");
	scanf("%d",&n);
    while(i<=n)
	{
		tn=tn+a;
		sn=sn+tn;
		a=a*10;
		i++;
	}
	printf("a+aa+aaa+…=%d\n",sn);
}