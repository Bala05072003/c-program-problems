#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
scanf("%c",&ch);
printf("%c\n",ch);
char name[30];
scanf("%s",name);
printf("%s\n",name);
scanf("\n");
char sen[50];
scanf("%[^\n]%*c",sen);
printf("%s\n",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
