//If else block - tricky question
//The if block won't execute as the condition becomes assignment.
#include <stdio.h>

int main() {
    int x=0;
    if(x=0)
        printf("Zero");
    else
        printf("Not zero");
    return 0;
}
