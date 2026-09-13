#include <stdio.h>

int main()
{
    int N;
    scanf("%d\n", &N);
    int even = 0;
    int odd = 0;
    int ptv = 0;
    int neg = 0;
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d",&x);

        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (x > 0)
        {
            ptv++;
        }
        else if (x < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", ptv);
    printf("Negative: %d\n", neg);
}