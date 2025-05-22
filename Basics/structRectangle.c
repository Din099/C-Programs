#include <stdio.h>
#include<iostream>
using namespace std;

//defining a structure rectangle, memory is not assigned until the structure is declared
struct rectangle{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r1 = {10,5};
    
    printf("size = %zu\n",sizeof(r1));
    printf("len = %d & breadth = %d\n",r1.length, r1.breadth);
    r1.length = 15;
    r1.breadth = 20;
    
    //cpp-style code
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
   

    return 0;
}
