//
//  main.c
//  Stack
//
//  Created by 임태호 on 2022/03/22.
//

#include <stdio.h>

int int_max(int i, int j)
{
    int m;
    m = i > j ? i : j;
    return m;
}

int main() {
    
    int a;
    
    a = int_max(1, 2);
    
    {
        int b;
        b = int_max(4, 5);
        
        {
            int b = 123;
        }
        
        {
            int c = 456;
        }
    }
    
    return 0;
}
