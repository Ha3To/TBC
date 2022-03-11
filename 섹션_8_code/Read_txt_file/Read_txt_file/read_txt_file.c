//
//  main.c
//  Read_txt_file
//
//  Created by 임태호 on 2022/03/12.
//

#include <stdio.h>
#include <stdlib.h> // exit()

int main()
{
    int c;
    FILE *file = NULL;
    char file_name[] = "my_file.txt"; // TODO: use scanf(...)
    
    file = fopen(file_name, "r");
    if(file == NULL)
    {
        printf("Failed to open file.\n");
        exit(1);
    }
    
    while((c = getc(file)) != EOF)
        putchar(c);
    fclose(file);
    

    return 0;
}
