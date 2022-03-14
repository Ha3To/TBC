//
//  main.c
//  Prototype_Function
//
//  Created by 임태호 on 2022/03/15.
//

#include <stdio.h>
#include <string.h> //strlen()
#include <stdbool.h>

#define WIDTH   40
#define NAME    "Lim Tae-Ho"
#define ADDRESS "PyeongTaek, Korea"

void print_multiple_chars(char c, int n_stars, bool endl);
void print_centered_str(char str[]);

int main()
{
    print_multiple_chars('*', WIDTH, 1);
    
    print_centered_str(NAME);
    print_centered_str(ADDRESS);
    print_centered_str("I love you");
    
    print_multiple_chars('*', WIDTH, 0);

    return 0;
}

void print_multiple_chars(char c, int n_stars, bool endl)
{
    for(int i = 0; i < n_stars; ++i)
        printf("%c", c);
    
    if(endl)
        printf("\n");
}

void print_centered_str(char str[])
{
    int n_blanks = 0;
    n_blanks = (WIDTH - strlen(str)) / 2;
    print_multiple_chars(' ', n_blanks, 0);
    printf("%s\n", str);
}
