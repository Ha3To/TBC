//
//  main.c
//  Binary_Conversion
//
//  Created by 임태호 on 2022/04/03.
//

#include <stdio.h>

/*
    10
    10 / 2 = 5 --- 0
    5 / 2 = 2 --- 1
    2 / 2 = 1 --- 0
    1 / 2 = 0 --- 1
    10 in binary is 1010
 */

void print_binary_loop(unsigned long n);
void print_binary(unsigned long n);

int main()
{
    unsigned long num = 10;
    
    print_binary_loop(num);
    print_binary(num);
    
    printf("\n");
    
    return 0;
}

//NOTE: printing order is reversed
void print_binary_loop(unsigned long n)
{
    while(1)
    {
        int quo = n / 2;
        int remain = n % 2;
        
        printf("%d", remain);
        
        n = quo;
        
        if (n == 0)
            break;
    }
    printf("\n");
}

void print_binary(unsigned long n)
{
    if(n != 0)
    {
        print_binary(n / 2);
        printf("%d", n % 2);
    }
}
