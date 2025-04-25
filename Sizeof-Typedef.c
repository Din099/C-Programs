// Online C compiler to run C program online
//sizeof new datatype defined by typedef
#include <stdio.h>

int main() {
    // Write C code here
    typedef char str[20];
    // printf("%lu", sizeof(*str));//error, as str is not an array of 20 bytes, but it is a new datatype. And datatype dereference is invalid
    str s1, s2;
    str s[5];
    printf("%lu %lu %lu %lu",sizeof(s1), sizeof(*s2),sizeof(s),sizeof(*s));//sizeof an array of 20 char, sizeof a character pointer, sizeof an array of type str-which is an array of 20 char, sizeof derefence of s- which is sizeof each s element
    return 0;
}
