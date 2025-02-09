//Basic example of threads
//1. How to create a thread
#include <stdio.h>
#include<unistd.h>
#include<pthread.h>
void* myturn(void *)
{
    while(1)
      {
        sleep(1);
        printf("My turn\n");
    }
    return NULL;
}
void yourturn()
{
    while(1)
    {
        sleep(2);
        printf("yourturn\n");
    }
}
int main()
{
    printf("Hello World");
    pthread_t newthread;
    pthread_create(&newthread, NULL, myturn, NULL);
    //myturn();
    yourturn();

    return 0;
}
