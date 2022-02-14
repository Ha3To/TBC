//
//  main.c
//  Standard_Input_Output
//
//  Created by 임태호 on 2022/02/15.
//

#include <stdio.h>  //getchar(), putchar()

int main() {
    
    /*
        1. Introduce getchar(), putchar()
        2. Use while loop to process character sequence
        3. Filter a specific character
        4. Convert numbers to asterisks
        5. Lower characters to Upper characters
    */
    
    char ch;
    
    while((ch = getchar()) != '\n')// Use '\n' to find the end of a sentence
    {
        
        if(ch >= 'a' && ch <= 'z')
            ch -= 'a' - 'A';
        else if(ch >= 'A' && ch <= 'Z')
            ch += 'a' - 'A';
        
        for(int i = 0; i <= '9'; ++i)
        if (ch >= '0' && ch <= '9')
            ch = '*';
        
        if(ch == 'f' || ch == 'F')
            ch = 'X';
        else if (ch == 'F')
            ch = 'X';
        
        putchar(ch);
    }
    
    putchar(ch);

    return 0;
}
