//
//  main.c
//  True_False
//
//  Created by 임태호 on 2022/02/05.
//

#include <stdio.h>

int main()
{
    
    int tv, fv;
    tv = (1 < 2);
    fv = (1 > 2);

    printf("True is %d\n", tv);
    printf("False is %d\n", fv);
    
    int i = 5;
    while (i)
        printf("%d is ture\n", i--);
    printf("%d is false\n", i);

    return 0;
}
