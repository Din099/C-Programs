//Size of different type of pointer variables
#include <stdio.h>
//defining a structure rectangle, memory is not assigned until the structure is declared
struct rectangle{
    int length;
    int breadth;
};

int main()
{
    struct rectangle *p1;
    int* p2;
    char *p3;
    float* p4;
    double *p5;
    //sizeof a pointer variable
    printf("%lu\n",sizeof(p1));//8
    printf("%lu\n",sizeof(p2));//8
    printf("%lu\n",sizeof(p3));//8
    printf("%lu\n",sizeof(p4));//8
    printf("%lu\n",sizeof(p5));//8
    
    return 0;
}
