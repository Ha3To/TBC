//
//  main.c
//  Do_While
//
//  Created by 임태호 on 2022/02/11.
//

#include <stdio.h>

int main() {
    
    const int password = 337;
    int input = 0;
    
//    while(input != password){
//        printf("Enter password : ");
//        scanf("%d", &input);
//    }
    
    do
    {
        printf("Enter password : ");
        scanf("%d", &input);
    }
    while (input != password);
    
    printf("Good!\n");

    return 0;
}
