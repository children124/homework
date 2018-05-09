#include<stdio.h>
int main()
{
	int day,a1,a2;
	day=9;
	a2=1;
	while(day>0)
	{
	 a1=(a2+1)*2;
	 a2=a1;
	 day--;
	}
	printf("桃子总数=%d个\n",a1);
}