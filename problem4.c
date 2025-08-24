#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    
    
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
   int  sum=a+b,diff=a-b;
   float add=c+d,sub=c-d;
   printf("%d %d\n",sum,diff);
   printf("%.1f %.1f\n",add,sub);
    return 0;
}
