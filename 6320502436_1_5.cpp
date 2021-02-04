#include<stdio.h>
int main()
{
	int a,b=0,c=0,i,d=0;
	scanf("%d",&a);
	int N[a];
	
	for(i=0;i<a;i++)
	{
	scanf("%d",&N[i]);
	if(N[i]>b)
	{
		b=N[i];
		c=i;
	}

}
	printf("%d %d",c+1,b);

	return 0;
	
	
}
