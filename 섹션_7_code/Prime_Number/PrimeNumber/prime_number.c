//
//  prime_number.c
//  Prime_Number
//
//  Created by 임태호 on 2022/02/18.
//

#include <stdio.h>
#include <stdbool.h>

int main() {
    
    unsigned num;
    bool isPrime = true;    // flag, try bool type
    
    scanf("%u", &num);
    
    /*
        TODO: Check if num is a prime number
        ex) num is 4, try num % 2, num % 3
        ex) num is 5, try num % 2, num % 3, num % 4
    */
    
    for(unsigned div = 2; (div * div) <= num; ++div)
    {
        if(num % div == 0)
        {
            isPrime = false;
            
            if(num == div * div)
                printf("%u is divisible by %u.\n", num, div);
            else
                printf("%u is divisible by %u and %u.\n", num, div, num/div);
        }
    }
    
    if (isPrime)
        printf("%u is a prime number.\n", num);
    else
        printf("%u is a not prime number.\n", num);

    return 0;
}
