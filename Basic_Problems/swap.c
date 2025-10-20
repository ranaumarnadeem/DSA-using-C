#include <stdio.h>

void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter Swap\na=%d b=%d",a,b);

}

int main(){
    int a,b;
    printf("Enter 2 numbers a & b");
    scanf("%d %d", &a,&b);
    printf("Orignal Value\na=%d b=%d", a,b);
    swap(a,b);
    
}