#include<stdio.h>
int main()
{
	int n,i;
	printf("ENTER:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%2==0){
			printf("%d ", i*i*i);
	}
}
	int k=n*(n+1);
	int g=k*(2*n+1);
	int z= g/6;
	printf("\n%d",z);
	return 0;
}
