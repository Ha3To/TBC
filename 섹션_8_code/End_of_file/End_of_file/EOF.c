//
//  main.c
//  End_of_file
//
//  Created by 임태호 on 2022/03/03.
//

#include <stdio.h>

int main() {

    int c;
    
    while((c = getchar()) != EOF)   // End Of File
        putchar(c);
    
//    check stream
    while(1)
    {
        c = getchar();
        printf("%d\n", c);
        if (c == EOF)
            break;
    }
    
    
    
    return 0;
}

