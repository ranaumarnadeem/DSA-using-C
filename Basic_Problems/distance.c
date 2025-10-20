#include <math.h>
#include <stdio.h>


float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}


int main()
{
    float x1,x2,y1,y2;
    printf("Enter (x1,y1) ");
    scanf("%f %f",&x1,&y1);
    printf("Enter (x2,y2) ");
    scanf("%f %f",&x2,&y2);
    printf("(x1,y1)=(%f,%f)\n(x2,y2)=(%f,%f)",x1,y1,x2,y2);
    printf("\n%f", distance(x1,y1,x2,y2));
    return 0;
}