// Program to swap values of 2 variable without using any extra variable
#include <stdio.h>

int main() {
    // int x = 10;
    // int y = 20;
    int x,y;
    printf("Enter values for x and y\n");
    scanf("%d %d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    
    printf("The values of x and y are %d %d\n",x,y);
    
    return 0;
}
