//
//  main.c
//  For_With_Array
//
//  Created by 임태호 on 2022/02/13.
//

#include <stdio.h>

#define SIZE 5

int main() {
    
    /* Motivation */
//    int i1 = 0;
//    int i2 = 1;
//    int i3 = 2;
//    // ...
//
//    printf("%d\n", i1);
//    printf("%d\n", i2);
//    printf("%d\n", i3);
//    // ...
    
    int my_arr[SIZE];
    
//    // prepare for array data
//    for (int i = 0; i < SIZE; i++)
//        my_arr[i] = i * i;
//
//    // print array data
//    for (int i = 0; i < SIZE; ++i)
//        printf("%d ", my_arr[i]);
//
//    printf("\n");
//
//    //TODO: try debugger
    
//    //TODO: Enter 5 numbers and print sum, average
    
    int sum = 0;
    int average = 0;
    
    printf("Enter 5 numbers : ");
    
    for (int i = 0; i < SIZE; ++i){
        scanf("%d", &my_arr[i]);
    }
    
    for (int i = 0; i < SIZE; ++i){
        sum += my_arr[i];
    }
    
    average = sum / SIZE;
    
    printf("sum = %d", sum);
    printf("\n");
    printf("average = %d", average);
    printf("\n");
    
    return 0;
}
