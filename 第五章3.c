#include<stdio.h>
int main()
{
	int p,q,n,m,temp;
	printf("������������n:");
	scanf("%d,",&n);
	printf("������������m:");
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
	printf("���ǵ����Լ��Ϊ:%d\n",n);
    printf("���ǵ���С������Ϊ:%d\n",p/n);
}