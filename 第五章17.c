#include<stdio.h>
int main()
{
 char i,j,k;
  for(i='x';i<='z';i++)
	for(j='x';j<='z';j++)
	  if(i!=j)
		for(k='x';k<='z';k++)
		 if(i!=k&&j!=k)
		  if(i!='x'&&k!='x'&&k!='z')
          printf("A的对手是%c\nB的对手是%c\nC的对手是%c\n",i,j,k);
}