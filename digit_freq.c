#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
    int n=0;
    scanf("%s",str);
    n=strlen(str);
    int freq[10]={0};
        for(int i=0;i<n;i++){
            if(isdigit(str[i])){
                freq[str[i]-'0']++;
                
            }
        
    }
    for(int i=0;i<10;i++){
        printf("%d ",freq[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
