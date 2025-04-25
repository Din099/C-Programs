//Threads concept
//passing data to threads
#include <stdio.h>
#include<unistd.h>
#include<pthread.h>
void* myturn(void * arg)//void ptr is generic and can point to anything
{
    int *iptr = (int*) arg;
    for(int i=0; i<8; i++)
    {
        sleep(1);
        printf("My turn %d %d\n", i, *iptr);
        (*iptr)++;
    }
    return NULL;
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
    int v = 5;
    pthread_create(&newthread, NULL, myturn, &v);
    //myturn();
    yourturn();
    pthread_join(&newthread, NULL);
    printf("thread's done: v=%d\n",v);
    return 0;
}
