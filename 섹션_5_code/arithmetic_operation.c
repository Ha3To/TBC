#include <stdio.h>

int main()
{
    printf("%d\n", 1 + 2);

    int income, salary, bonus;

    income = salary = bonus = 100;  // triple assignment
                                    // 마지막 변수에다가 100을 넣어줌으로서 그앞에있는 2개의 변수에도 같은 값이 들어간다.

    salary = 100;
    bonus = 30;

    income = salary + bonus;    // L-value vs R-value

    int takehome, tax;
    tax = 20;
    takehome = income - tax;

    int a, b;
    float c;
    a = -7;
    b = -a; // a에다가 -를 곱한다, 그래서 -는 연산자이다.
    b = +a; // + does nothing

    c = 1.0f + 2;// ?

    return 0;
}