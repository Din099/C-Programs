//Program to print environment variables
#include <stdio.h>

int main(int argc, char **argv, char **envp) {
    // Write C code here
    int i;
    for(i=0; envp[i]; i++)
        printf("%s\n", envp[i]);
    return 0;
}
