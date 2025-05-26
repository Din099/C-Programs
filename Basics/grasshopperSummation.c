//Grasshopper-summation
#include <stdio.h>
int main(){
    int num = 8;
    int sum = 0;
    while(num){
        sum += num;
        num--;
    }
    printf("The Grasshopper - Summation is %d\n",sum);
}
