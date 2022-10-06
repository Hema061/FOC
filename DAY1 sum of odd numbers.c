#include<stdio.h>
int main()
{
 int num,sum=0;
printf("enter the maximum value: ");
scanf("%d",&num);
printf("odd numbers between 0 to %d are: \n",num);
for (int i=1;i<=num;i++)
{
if(i%2!=0)
{
printf("%d\n",i);
sum=sum+i;
}
}
printf("The sum of odd numbers from 0 to %d is %d: ",num,sum);
return 0;
}
