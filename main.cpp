#include "mbed.h"

int nth_term = 9;       // give the limit to the amount of numbers printed
int fib(int n);        //  the variables being used


 
int main() {

    printf("\n nth term is %d \r\n", nth_term);
        
    for(int i = 0; i<nth_term; i++)
    {
        printf("%d,",fib(i));
    }
    printf("...!\r\n");
} 
        int fib(int n)
        {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        else
        {
            return (fib(n-1)+fib(n-2));
        }                 
         
}

