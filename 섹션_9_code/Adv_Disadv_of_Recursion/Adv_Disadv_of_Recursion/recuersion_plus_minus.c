//
//  main.c
//  Adv_Disadv_of_Recursion
//
//  Created by 임태호 on 2022/04/03.
//

#include <stdio.h>

/*
    Fibonacci sequence
    1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
 
    ex) fibonacci(5) = 3 + 2 = fibonacci(4) + fibonacci(3)
 */

int fibonacci(int number);

int main()
{
    for(int count = 1; count < 13; ++count)
        printf("%d ", fibonacci(count));
    
    printf("\n");
    
    return 0;
}

int fibonacci(int number)
{
    if(number > 2)
        return (fibonacci(number - 1) + fibonacci(number - 2)); // double recursion
    else
        return 1;
}
