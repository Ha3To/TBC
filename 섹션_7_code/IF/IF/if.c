//
//  main.c
//  IF
//
//  Created by 임태호 on 2022/02/15.
//

#include <stdio.h>

int main() {
    
    int number;
    
    printf("Input a positive integer : ");
    scanf("%d", &number);
    
    //TODO: print even or odd
    
    if(number % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
