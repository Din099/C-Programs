// C Program for
// Replacing 1 to 0
#include<stdio.h>
#include<math.h>

int main()
{
    int N = 2111;
    int ans = 0;
    int i = 0;
    while(N!=0)
    {
        int num = N%10;
        if (num == 1)
        {
            num = 0;
        }
    
        ans = ans + (num) * pow(10,i);
        N = N/10;
        i++;
    }
    printf("The number is %d\n", ans);
}
