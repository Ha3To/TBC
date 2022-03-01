//
//  main.c
//  avoid_goto
//
//  Created by 임태호 on 2022/03/02.
//

#include <stdio.h>

int main() {
    
    /* if else */
    int size = 15, cost;
    
    if (size < 10)
        goto a;
    goto b;
    
a: cost = 50 * size;
b: cost = 100 * size;
    
    if (size < 10)
        cost = 50 * size;
    else
        cost = 100 * size;
    
    /* loop */
    char c;
    
read: c = getchar();
    putchar(c);
    if(c == '.') goto quit;
    goto read;
quit:
    
    while(1)
    {
        c = getchar();
        putchar(c);
        if(c == '.') break;
    }

    return 0;
}
