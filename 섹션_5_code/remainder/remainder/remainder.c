//
//  main.c
//  remainder
//
//  Created by 임태호 on 2022/01/30.
//

#include <stdio.h>

int main()
{
    int seconds = 0, minutes = 0, hours = 0;
    
    while (seconds >= 0)
    {
       
        printf("Input seconds : ");
        scanf("%d", &seconds);
        
        if (seconds < 0)    // if you input negative, quit the program
               {
                   printf("Good bye\n");
                   break;
               }
        
        //TODO: seconds -> hours, minutes, seconds
        hours = seconds / 3600;
        minutes = seconds % 3600 / 60;
        seconds = seconds % 3600 % 60;
        
        //print result
        printf("%d hours, %d minutes, %d second\n", hours, minutes, seconds);
    }
    
    return 0;
}
