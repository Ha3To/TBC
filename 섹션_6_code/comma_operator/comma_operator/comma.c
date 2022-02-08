//
//  main.c
//  comma_operator
//
//  Created by 임태호 on 2022/02/09.
//

#include <stdio.h>

int main()
{
    
    for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
        printf("%d %d\n", n, nsqr);
    
    //Mote that commas in printf() are not comma operators
    //but separators
    
    int i, j;
    i = 1;
    i++, j = i;// comma is sequence point
    printf("%d %d\n", i, j);
    
    int x, y, z;
    z = x = 1, y = 2;
    printf("x=%d, y=%d, z=%d \n", x, y, z);
    z = (x = 1), (y = 2);
    printf("x=%d, y=%d, z=%d \n", x, y, z);
    z = ((x = 1), (y = 2));                   //콤마 연산자 기준 가장 오른쪽에 있는 값이 전체expression의 값이므로 z에 2가 들어간다.
    printf("x=%d, y=%d, z=%d \n", x, y, z);
    
//    int my_money = 123,456; //error
    int my_money = (123, 456);
    printf("%d\n", my_money);

    return 0;
}
