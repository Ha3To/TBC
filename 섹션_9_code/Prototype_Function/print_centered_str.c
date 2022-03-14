//
//  print_centered_str.c
//  Prototype_Function
//
//  Created by 임태호 on 2022/03/15.
//

#include <stdio.h>

void print_centered_str(char str[])
{
    int n_blanks = 0;
    n_blanks = (WIDTH - strlen(str)) / 2;
    print_multiple_chars(' ', n_blanks, 0);
    printf("%s\n", str);
}
