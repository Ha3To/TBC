//
//  main.c
//  Countinue_Break
//
//  Created by 임태호 on 2022/02/24.
//

#include <stdio.h>

int main() {

    /* countinue */
    for(int i = 0; i < 10; ++i)
    {
        if(i == 5)
            continue;

        printf("%d ", i);
    }
    
    /* break */
    for(int i = 0; i < 10; ++i)
    {
        if(i == 5)
            break;

        printf("%d ", i);
    }
    
    /* while and continue*/
    int count = 0;
    while (count < 5)
    {
        int c = getchar();
        if (c == 'a')
            continue;
        putchar(c);
        count++;
    }
    
    /* for and continue */
    for (int count = 0; count < 10; ++count)
    {
        int c = getchar();
        if (c == 'a')
            continue;
        putchar(c);
    }
    
    /* continue as a placeholder */
    while (getchar() != '\n')
        continue;
    
    /* Need to continue ? */
    char c;
    while ((c = getchar()) != 'n')
    {
        if (c == 'a')
            continue;
        putchar(c);

        //if (c != 'a')
        //  putchar(c);
    }
    
    /* break_2 */
    while (1)
    {
        char c = getchar();

        if (c == '.')
            break;

        putchar(c);
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 5)
              break;

            printf("(%d %d)", i, j);
        }

        printf("\n");
    }
    
    return 0;
}
