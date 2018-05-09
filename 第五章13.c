#include<stdio.h>
#include<math.h>
int main()
{
	float a,x0,x1;
	printf("请输入一个正数:");
	scanf("%f",&a);
	x0=a/2;
	x1=(x0+a/x0)/2;
	do
	{
	 x0=x1;
	 x1=(x0+a/x0)/2;
	}
	while(fabs(x0-x1)>=1e-5);
	printf("输入正数 %5.2f的平方根是 %8.4f\n",a,x1);
}