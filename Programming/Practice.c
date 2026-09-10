#include <stdio.h>
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // Code part below this ::


    int x;
    scanf("%d", &x);
    // float y = ((x % 7 == 0) ? (x * 4.0) : (x / 3.0));
    // printf((x%7 == 0)? "%.0f" : "%.4f" ,y);

    (x%7 == 0) ? printf("%d",x*4):printf("%.4f",x/3.0);
    
}
