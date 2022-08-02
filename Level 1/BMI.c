#include <stdio.h>

int main()
{
    float h , w ;
    
    printf("Enter your height (m) : ") ;
    scanf("%f",&h) ;
    
    
    printf("Enter your weight (kg) :") ;
    scanf("%f",&w) ;
    
    float bmi = w / (h*h) ;

    if(bmi<18.5)
    {
        printf("Your BMI is %f (Underweight)",bmi );
    }
    else if(18.5<=bmi<=24.9)
    {
        printf("Your BMI is %f (Normal)",bmi );
    }
    else if(25.0<=bmi<=29.9)
    {
        printf("Your BMI is %f (Overweight)",bmi );
    }
    else
    {
        printf("Your BMI is %f (Obese)",bmi ) ;
    }

    return 0;
}