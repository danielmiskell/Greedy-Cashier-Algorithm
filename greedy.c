#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int count;
    int cent;
    
    count = 0;
            do 
        {
            printf("How much change?\n");
            float change = GetFloat();
            cent = roundf(change * 100) ;
            
            
        }
    
        while ( cent < 0 );
        
    while ( cent >= 25 )
    {
        count = count + 1;
        cent = cent - 25;
        
    }
    while ( cent >= 10 )
    {
        count = count + 1;
        cent = cent - 10;
        
    }
    while ( cent >= 5 )
    {
        count = count + 1;
        cent = cent - 5;
        
    }
    while ( cent >= 1 )
    {
        count = count + 1;
        cent = cent - 1;
        
    }
    
    printf("%i \n", count);
        
}