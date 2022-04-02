//
//  main.c
//  Factorial
//
//  Created by 임태호 on 2022/03/30.
//

#include <stdio.h>

/*
    loop vs recursion
    factorial : 3! = 3 * 2 * 1, 0! = 1
    5! = 5 * 4!
       = 5 * 4 * 3!
       = 5 * 4 * 3 * 2!
       = 5 * 4 * 3 * 2 * 1!
       = 5 * 4 * 3 * 2 * 1 * 0!
 */

long loop_factorial(int n);
long recursion_factorial(int n);

int main()
{
    int num = 5;
    
    printf("%ld\n", loop_factorial(num));
    printf("%ld\n", recursion_factorial(num));

    return 0;
}

/* HaeTo version*/
long loop_factorial(int n)
{
    long result = 1;

    for(int i = n; i > 1; i -= 2)
    {
        result = result * i * (i - 1);
    }

    return result;
}

/* TBC version*/
//long loop_factorial(int n)
//{
//    long ans;
//
//    for (ans = 1; n > 1; n--)
//        ans *= n;
//
//    return ans;
//}

long recursion_factorial(int n)
{
    if (n > 0)
    {
       return n * recursion_factorial(n - 1);   // tail(end) recursion
    }
    else
        return 1;
}
