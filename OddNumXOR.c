//Odd occuring element in an array using xor operator
#include <stdio.h>

int findOdd(int arr[],  int n)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        res ^= arr[i];
    }
    return res;
}

int main()
{
    int arr[]={12, 12, 14, 56, 14, 12, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The odd number is: %d\n",findOdd(arr, n));
    
    return 0;
}
