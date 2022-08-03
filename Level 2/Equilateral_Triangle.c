#include <stdio.h>


int main()
{
    int size ,floor = 1 ;

    scanf("%d",&size);

    for(int i = 0 ; i < size ; i++)
    {
        for (int j = 0 ; j < floor ; j++)
        {
            printf("*");
        }
        floor ++ ;
        printf("\n");
    }


    return 0;
}