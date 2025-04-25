// Online C compiler to run C program online
//GFG-Find the largest of 3 numbers with ternary operator/conditional operator
#include <stdio.h>

int main() {
    // Write C code here
    //int a = 1, b=2, c=3;
    int a, b,c;
    printf("Enter the 3 integers\n");
    scanf("%d%d%d", &a,&b,&c);
    int result = ((a>b) ? ((a>c)?a:c) : ((b>c)?b:c));  
    printf("The largest number is %d\n", result);
    return 0;
}
