//
//  main.c
//  Return_Type
//
//  Created by 임태호 on 2022/03/16.
//

#include <stdio.h>

int int_min(int, int);

int main()
{
    
    int i1, i2;
    
    while(1)
    {
        printf("Input two integers : ");
        
        if(scanf("%d %d", &i1, &i2) != 2)
            break;
        
        int lesser = int_min(i1, i2);
        //int lesser = min;
        printf("The lesser of %d and %d is %d\n", i1, i2, lesser);
        
        //printf("The lesser of %d and %d is %d\n", i1, i2, int_min(i1, i2));
    }
    
    printf("End.\n");

    return 0;
}

int int_min(int i, int j)
{
    int min;

    if(i < j)
        min = i;
    else
        min = j;

    return min;
//    return (float)min; //--> This code doesn't work because return value type isn't the same
//  return (i < j) ? i : j; //--> shortcut
    
//    if(i < j)
//        return i;
//    else
//        return j; //--> shotcut 2
}
