#include <stdio.h>

int main () 
{
    int x , y ,z ;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&x,&y,&z);

    if(x>y && x>z)
    {
        printf("The highest number : %d",x) ;
    }
    else if(y>x && y>z)
    {
        printf("The highest number : %d",y) ;
    }
    else if(z>x && z>y)
    {
        printf("The highest number : %d",z) ;
    }
    else
    {
        printf("There's not have the highest number");
    }
    return 0;
}