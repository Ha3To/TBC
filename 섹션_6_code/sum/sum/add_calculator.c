//
//  main.c
//  sum
//
//  Created by 임태호 on 2022/02/03.
//

#include <stdio.h>

int main()
{
    
    int num = 0, sum = 0;
    
    printf("Enter an integer (q to quit) : ");
    
    while (scanf("%d", &num) == 1)
    {
        sum = sum + num;
        
        printf("Enter next integer (q to quit) : ");
        
    }
    

    printf("Sum = %d\n", sum);
    
    return 0;
}
