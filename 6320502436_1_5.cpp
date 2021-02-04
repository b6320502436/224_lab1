#include<stdio.h>
int main()
{
	int a,b=0,c,i;
	scanf("%d",&a);
	printf("%d",a);
	int N[a]={};
	for(i=0;i<a;i++)
	{scanf("%d",&N[i]);
	if(N[i]>a)
	{
		a=N[i];
		c=i;
	}

}
	printf("%d %d",c,a);

	return 0;
	
	
}
