#include <stdio.h>
int main()
{
int i, N,sum=0;
printf("enter the value of N: ");
scanf("%d",&N);
sum=(N*(N+1))/2;
for(i=1;i<=N;i++)
if(i!=N)
printf("%d +",i);else
printf("%d = %d",i,sum);
printf("sum of the series is:",sum);
return 0;
}
