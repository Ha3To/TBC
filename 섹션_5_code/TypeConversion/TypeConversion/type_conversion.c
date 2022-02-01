//
//  main.c
//  TypeConversion
//
//  Created by 임태호 on 2022/02/01.
//

#include <stdio.h>

int main()
{
    /* promotion in assignments */
    short s = 64;
    int i = s;

    float f = 3.14f;
    double d = f;

    /* demotion in assignments */
    d = 1.25;
    f = 1.25;
    //f = 1.123;

    /* ranking of types in operation */
    //long double > double > float
    //unsigned long long, long long
    //unsigned long, long
    //unsigned, int
    //short int, unsigned short int
    //signed char, char, unsigned char
    //_Bool
    //Ref: Google 'Integer conversion rank'
    d = f + 1.234;
    f = f + 1.234;

    /* casting operators */
    d = (double)3.14f;  // 이처럼 작성자가 자료형을 무엇으로 변환했는지 미리 작성해주는 것이 바람직하다.
    i = 1.6 + 1.7;      // 이 값은 3.3으로 double형이지만 int형 변수에 넣으면서 절삭이 일어나고 3이 들어간다.
    i = (int)1.6 + (int)1.7;// 하지만 미리 int형으로 강제형변환을 하면 1 + 1이되면서 2가 저장된다.
    
    char c;
    int i;
    float f;
    f = i = c = 'A';// 65
    printf("%c %d %f\n", c, i, f);
    c = c + 2;// 'C', 67
    i = f + 2 * c;// 65.0f + 2 * 67
    printf("%c %d %f\n", c, i, f);// 199
    c = 1106;// demolition, 1106 = 0b10001010010, 0b01010010 = 1106 % 256 = 82 = 'R'
    printf("%c\n", c);
    c = 83.99;
    printf("%c\n", c);
    
    return 0;
}
