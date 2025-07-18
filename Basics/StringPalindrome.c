//String palindrome - basic logic
#include <stdio.h>
#include<string.h>
int main()
{
    char *str = "12121";
    int cnt=0;
    int len = strlen(str);
    printf("Hello World\n");
    for(int i=0; i<len/2; i++){
        // if(*(str+i) != *(str-(len-1-i))){
        if(str[i] != str[len-i-1]){   
            printf("Not palindrome");
            break;
        }
        else{
            cnt++;
            if(cnt==len/2)
                printf("palindrome");
            continue;
        }
    }
    
    return 0;
}
