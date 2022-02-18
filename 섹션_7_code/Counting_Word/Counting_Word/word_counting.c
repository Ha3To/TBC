//
//  main.c
//  Counting_Word
//
//  Created by 임태호 on 2022/02/19.
//

#include <stdio.h>
#include <ctype.h>      //TBC's version
#include <stdbool.h>    //TBC's version

#define STOP '.'        //TBC's version

int main() {
    
    /* HaeTo's version */
    /*
    int characters = 0, words = 0, lines = 0;
    char ch;
    
    printf("Enter text : ");
    while((ch = getchar()) != '\n')
    {
        if(ch != ' ' && ch != '.' && ch != '\n')
            characters += 1;
        else if(ch == ' ' || ch == '\n')
            words += 1;
        else if(ch == '.')
            lines += 1;
    }
    
    printf("Characters = %d, Words = %d, Lines = %d\n", characters, words, lines);
    */
    
    /* TBC version */
    char c;
    int n_chars = 0;    // number of non-space characters
    int n_lines = 0;
    int n_words = 0;
    bool word_flag = false;
    bool line_flag = false;
    
    printf("Enter text :\n");
    
    while((c = getchar()) != STOP)
    {
        if(!isspace(c))
            n_chars++;  // count non-space characters
        
        if(!isspace(c) && !line_flag)
        {
            n_lines++;
            line_flag = true;
        }
        
        if(c == '\n')
            line_flag = false;
        
        if(!isspace(c) && !word_flag)
        {
            n_words++;
            word_flag = true;
        }
        
        if(isspace(c))
            word_flag = false;
    }
    
    printf("Characters = %d, Words = %d, Lines = %d\n", n_chars, n_words,  n_lines);

    return 0;
}
