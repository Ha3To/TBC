//
//  main.c
//  Assginment_Operator
//
//  Created by 임태호 on 2022/02/09.
//

#include <stdio.h>

int main()
{
    
    /*
        +=, -=, *=, /=, %=
    */
    
    int i = 1024;
    
    i = i + 10;
    i += 10;
    
    i %= 4;
    
    i = i * (1 + 2);
    i *= 1 + 2;
    i *= (1 + 2);    // Check precendence
    
    for (int i = 0; i < 10; i++)
        ;

    return 0;
}
