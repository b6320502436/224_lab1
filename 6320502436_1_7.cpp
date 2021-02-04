#include<stdio.h>
int main()
{
    float a,b;
    int c;
	scanf("%f",&a);
	if(a>12.00)
	{
		printf("%d.%d a.m.",floor(a),(a*100)%100);
		}
		else printf("%d.%d p.m.",floor(a),(a*100)%100);
	
	
	return 0;
	
	
}
