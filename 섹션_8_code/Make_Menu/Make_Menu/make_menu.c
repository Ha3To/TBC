//
//  main.c
//  Make_Menu
//
//  Created by 임태호 on 2022/03/11.
//

#include <stdio.h>

void get_number(void);

int main() {
    
    char c;
    
    while(1)
    {
        printf("Enter the letter of your choice:\n");
        printf("a. avengers     b. beep\n");
        printf("c. count        q. quit\n");
        scanf("%c", &c);
        
        if(c == 'q' || c == 'Q')
            break;
        
        switch (c)
        {
            case 'a': case 'A':
                printf("Avengers assemble!\n");
                break;
            case 'b': case 'B':
                printf("\a");
                break;
            case 'c': case 'C':
                get_number();
                break;
            default:
                printf("Please try again.\n");
                break;
        }
        while(getchar() != '\n')
            continue;
    }

    return 0;
}


void get_number(void)
{
    int n, i;
    
    printf("Enter an integer:\n");
    scanf("%d", &n);
    
    for(i = 1;i <= n; ++i)
        printf("%d\n", i);
}
