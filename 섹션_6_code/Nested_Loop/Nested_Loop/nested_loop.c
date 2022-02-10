//
//  main.c
//  Nested_Loop
//
//  Created by 임태호 on 2022/02/11.
//

#include <stdio.h>

#define NUM_ROWS    12
#define FIRST_CHAR  'A'
#define LAST_CHAR   'L'

int main() {

    int r;// row loop
    int c;// character loop

    /* 2차원 배열처럼 알파벳 출력 */
    for (r = 0; r < NUM_ROWS; ++r)// outer row loop
    {
        for (c = FIRST_CHAR; c <= LAST_CHAR; ++c)// inner character loop
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    
    /* 직각 삼각형 모양 알파벳 출력 */
    for (r = 0; r < NUM_ROWS; ++r)
    {
        for (c = FIRST_CHAR; c <= FIRST_CHAR + r; ++c)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    
    /* 상하반전 직각 삼각형 모양 알파벳 출력 */
    for (r = 0; r < NUM_ROWS; ++r)
    {
        for (c = FIRST_CHAR + r; c <= LAST_CHAR; ++c)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    
    return 0;
}
