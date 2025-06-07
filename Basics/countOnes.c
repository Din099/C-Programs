//Code to count number of 1's in binary
#include<stdio.h>
int countOnes(int n){
    int count=0;
    while(n){
        count = count + (n&1);
        n = n>>1;
    }
    return count;
}
int main(){
    int num = 16;
    printf("The no. of ones are: %d\n", countOnes(num));
    printf("the no. of zeros are: %ld\n", sizeof(int) - countOnes(num));
    return 0;
}
