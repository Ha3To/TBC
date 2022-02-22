//
//  main.c
//  Conditional_Operator
//
//  Created by 임태호 on 2022/02/23.
//

#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int temp;
    temp = true ? 1024 : 7;
    printf("%d\n", temp);

    temp = false ? 1024 : 7;
    printf("%d\n", temp);
    
    int number;
    scanf("%d", &number);

    const bool is_even = (number % 2 == 0) ? true : false;

    if (is_even)
        printf("Even\n");
    else
        printf("Odd\n");
    
    int a = 1, b = 2;
    int max = (a > b) ? a : b;

    return 0;
}
