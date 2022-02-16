//
//  main.c
//  ctype_h
//
//  Created by 임태호 on 2022/02/15.
//

#include <stdio.h>
#include <ctype.h>  // isalpha() and more

int main() {

    char ch;
    
    while((ch = getchar()) != '\n')
    {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        
//        for (int i = '0'; i <= '9'; ++i)
        if (isdigit(ch) != 0)
            ch = '*';
            
        putchar(ch);
    }
    
    printf("\n");
    
    return 0;
}
