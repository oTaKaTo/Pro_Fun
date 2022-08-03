#include <stdio.h>
#include <math.h>

int powerrr(x,y)
{
    int value ;
    for(int n=1 ; n == y ; n++)
    {
        x = x*y ;
    }
    return x ;
}


int main ()
{
    int a ,b , c , number;
    int x ,y;
    x = a ;
    y = b;
    
    printf("Enter 2 number : ");
    scanf("%d %d",&a,&b) ;
    
    printf("1. c =  2*a + b\n2. c = a^5 + a^4 + 2a^3 + 3a^2 + 4a + 3\n3. c = 2 + 3a\nChoose 1 of 3 equations : ") ;
    scanf("%d",&number);
    
    switch (number)
    {
    case 1:
        c =  2*a + b ;
        break;
    case 2:
        c = powerrr(a,5) + powerrr(a,4) + 2*powerrr(a,3) + 3*powerrr(a,2) + 4*a + 3 ; 
        break;
        //c = round(pow(a,5)) + round(pow(a,4)) + 2*round(pow(a,3)) + 3*round(pow(a,2)) + 4*a + 3 ;
    case 3:
        c = 2 + (3*a) ;
    default:
        break;
    }


    printf("%d",c) ;

}