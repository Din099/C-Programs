//Dynamic runtime linking example
//ensure to run this code by using 'gcc <program.c> -ldl
//as it has to run with the dynamic link library ldl, else you'll encounter undefined reference to dlopen and other dl functions used in program
#include <stdio.h>
#include<dlfcn.h>//library having dynamic linking functions

int sum(int,int);
int mul(int, int);
int main() {
    // Write C code here
    int (*p)(int,int);
    int n1, n2;
    int result, choice;
    void * handle;
    printf("Enter int foe n1:");
    scanf("%d",&n1);
    printf("enter int for n2:");
    scanf("%d",&n2);
    printf("Enter 1:sum 2:mul");
    scanf("%d",&choice);
    if(choice == 1)
    {
        handle = dlopen("libVector.so", RTLD_LAZY);//loading
        if (handle == NULL)
        {
            printf("%s",dlerror());
            return 0;
        }
        p = dlsym(handle,"sum");//linking
        if(p == NULL)
        {
            printf("%s",dlerror());
            return 0;
        }
        result = (*p)(n1,n2);//calling
        dlclose(handle);
    }
    else if(choice == 2)
    {
        handle = dlopen("libVector.so", RTLD_LAZY);//loading
        if (handle == NULL)
        {
            printf("%s",dlerror());
            return 0;
        }
        p = dlsym(handle,"mul");//linking
        if(p == NULL)
        {
            printf("%s",dlerror());
            return 0;
        }
        result = (*p)(n1,n2);//calling
        dlclose(handle);
    }
    else
        return 0;
    
    printf("result = %d",result);
    return 0;
}
