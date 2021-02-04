#include<stdio.h>
int main()
{
	int n,m,d;
	unsigned long long int t;
	char a;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%llu",&t);
	scanf(" %c",&a);
	if(t>n&&t>m){

	if(a=='L')
	{
		if((t/n)%2)
		{
			printf("R");
		}
		else printf("L");
	}
	if(a=='R')
	{
		if((t/m)%2)
		{
			printf("L");
		}
		else printf("R");
	}	}
	return 0;
	
	
}
