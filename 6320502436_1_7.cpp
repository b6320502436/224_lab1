#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    int c,d;
	scanf("%f",&a);
	if(a>12.00)
	{
		printf("%.0f:%d a.m.",a,(int)(a*100)%100);
	}else printf("%.0f:%d p.m.",a,(int)(a*100)%100);

	
	
	return 0;
	
	
}
