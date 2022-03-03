//
//  main.c
//  Buffer
//
//  Created by 임태호 on 2022/03/03.
//

#include <stdio.h>
//#include <conio.h>// only Window, _getch(), _getche()
// ㄴ> i/o without buffer

int main() {

    char c;
    
    while((c = getchar()) != '.')
        putchar(c);
    
    return 0;
}
