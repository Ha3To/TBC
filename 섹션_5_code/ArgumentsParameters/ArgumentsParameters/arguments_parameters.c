//
//  main.c
//  ArgumentsParameters
//
//  Created by 임태호 on 2022/02/02.
//

#include <stdio.h>

void draw(int n);   //ANSI function prototype declaration

int main()
{
    int i = 5;
    char c = '#';   // 35
    float f = 7.1f;
    
    draw(i);
    draw((int)c);
    draw((int)f);
    
    return 0;
}

void draw(int n)
{
    //TODO: printf stars (asterisks)
    //int i = n;
    //int j = 0;
    //while (++j <= i){
        //printf("*");
    //}
    while (n-- > 0)
        printf("*");
    printf("\n");
}
