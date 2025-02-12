//Threads concept
//waiting for other thread to complete and exit
//using pthread_join(&thread, NULL);
#include <stdio.h>
#include<unistd.h>
#include<pthread.h>
void* myturn(void *)
{
    for(int i=0; i<8; i++)
    {
    sleep(1);
    printf("My turn %d\n", i);
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
    pthread_create(&newthread, NULL, myturn, NULL);
    //myturn();
    yourturn();
    pthread_join(&newthread, NULL);
    return 0;
}
