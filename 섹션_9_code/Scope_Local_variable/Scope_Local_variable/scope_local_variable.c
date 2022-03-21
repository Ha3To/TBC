//
//  main.c
//  Scope_Local_variable
//
//  Created by 임태호 on 2022/03/22.
//

#include <stdio.h>

int int_max(int i, int j);

int int_max(int i, int j)
{
    int m;
    m = i > j ? i : j;
    return m;
}

int main() {
    
    int a;
    
    a = int_max(1, 2);
    
    printf("%d\n", a);
    printf("%p\n", &a);
    
    {
        a = int_max(4, 5);
        
        printf("%d\n", a);
        printf("%p\n", &a);
        
//        int b = 123;
    }
    
    printf("%d\n", a);
    printf("%p\n", &a);

    return 0;
}
