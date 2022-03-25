//
//  main.c
//  Recursion_Stack
//
//  Created by 임태호 on 2022/03/25.
//

#include <stdio.h>

void my_func(int);

int main()
{
    
    my_func(1);

    return 0;
}

void my_func(int n)
{
    printf("Level %d, address of variable n = %p\n", n, &n);
    
    if(n <= 4)
        my_func(n + 1);
    
    printf("Level %d, address of variable n = %p\n", n, &n);
}
