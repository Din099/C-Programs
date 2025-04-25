//Program for suppression character in scanf()
#include <stdio.h>
int main(void)
{
    int d,m,y;
    printf("Enter the date in format - dd/mm/yyyy:\n");
    scanf("%d%*c%d%*c%d",&d,&m,&y);
    printf("The entered date is %d/%d/%d",d,m,y);
    
    return 0;
}
