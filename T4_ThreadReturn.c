//Threads concept
//passing data to threads and returns
//thread allocates a memory and give it back to main

#include <stdio.h>
#include<unistd.h>
#include<pthread.h>
void* myturn(void * arg)//void ptr is generic and can point to anything
{
    int *iptr = (int*) malloc(sizeof(int));
    *iptr = 5;
    for(int i=0; i<8; i++)
    {
        sleep(1);
        printf("My turn %d %d\n", i, *iptr);
        (*iptr)++;
    }
    return iptr;
}
void yourturn()
{
    for(int i=0; i<3; i++)
    {
        sleep(2);
        printf("your turn %d\n",i);
    }
    return NULL;
}
int main()
{
    pthread_t newthread;
    int * result;
    pthread_create(&newthread, NULL, myturn, NULL);
    //myturn();
    yourturn();
    pthread_join(newthread, &result);
    printf("thread's done: *result=%d\n",*result);
    return 0;
}
