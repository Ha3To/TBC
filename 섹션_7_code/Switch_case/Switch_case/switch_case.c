//
//  main.c
//  Switch_case
//
//  Created by 임태호 on 2022/03/01.
//

#include <stdio.h>

int main() {
    
    char c;
    while((c = getchar()) != '.')
    {
        printf("You love ");
        
        //TODO: upper letters ? (use tolower() or add [case 'upper letter'])
        switch (/*tolower(c)*/ c)  //Note: integer types only
        {
            case 'a': case 'A':
                printf("apple");
                break;
            case 'b': case 'B':
                printf("baseball");
                break;
            case 'c': case 'C':
                printf("cake");
                break;
            default:
                printf("nothing");
        }
        
        printf(".\n");
        
        while(getchar() != '\n')
            continue;
    }
    
    return 0;
}
