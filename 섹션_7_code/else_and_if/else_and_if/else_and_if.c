//
//  main.c
//  else_and_if
//
//  Created by 임태호 on 2022/02/17.
//

#include <stdio.h>

int main() {
    
    int number;
    scanf("%d", &number);
    
//    if(number == 1)
//        printf("One");
//    else if(number == 2)
//        printf("Two");
//    else if(number == 3)
//        printf("Three");
    
//    if(number == 1)
//        printf("One");
//    else
//        if(number == 2)
//            printf("Two");
//        else
//            if(number == 3)
//                printf("Three");
    
//    minimum 127 levels of nestings
    
    if(number > 5)
    {
        if(number < 10)
            printf("Larger than 5 smaller than 10\n");
        else
            printf("Larger than 10\n");
    }
    else
        printf("Less than or equal to 5");
    
    // Compilers ignore indenting

    return 0;
}
