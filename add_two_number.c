#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z;
    printf("Enter Two numbers - ");
    scanf("%d %d",&x,&y);
    z=x+y;
    printf("Sum of %d and %d is %d",x,y,z);
    getch();
    return 0;
}
