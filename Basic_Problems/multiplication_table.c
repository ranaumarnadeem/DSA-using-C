#include <stdio.h>

#define MULTIPLIER 10
int main(){
    int a,result;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i=1;i<=MULTIPLIER;i++)
    {
    result=i*a;
    printf(" %d * %d = %d\n", a,i,result);
    }

return 0;
}