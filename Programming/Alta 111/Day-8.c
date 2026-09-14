#include <stdio.h>
int main()
{
    int C;
    scanf("%d",&C);
    if (C%3 ==0 && C%5 ==0){
        printf("Yes");
    }
    
    else{
        printf("No");
    }
}