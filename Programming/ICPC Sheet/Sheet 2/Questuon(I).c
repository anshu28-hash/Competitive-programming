#include <stdio.h>
int main()
{
    int num, org ,rem ;
    scanf("%d",&num);
    org = num;
    int  rev=0;
    while(num>0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    printf("%d\n",rev);
    if(org == rev){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    } 
    
}