#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n ,n1,n2,n3,n4,n5,total;
    scanf("%d", &n);
    n1=n/10000;
    n2=(n/1000)%10;
    n3=(n/100)%10;
    n4=(n/10)%10;
    n5=n%10;
    total=n1+n2+n3+n4+n5;
    printf("%d",total);
    return 0;
}
