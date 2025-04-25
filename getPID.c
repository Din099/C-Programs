//The code snippet prints the process id of itself and it's parent
#include <stdio.h>
#include<unistd.h>
int main() {
    // Write C code here
    printf("The process id %d\n", getpid());//prints the self process id
    printf("The process id %d\n", getppid());//prints the parent process id

    return 0;
}
