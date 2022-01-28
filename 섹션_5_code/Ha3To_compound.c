#include <stdio.h>

int main()
{
    double principal = 0, compound = 0;
    int goal = 0, year = 0;
    // 원금, 복리율, 목표 금액, 걸리는 시간

    printf("How much is the principal? : ");    //원금을 입력받는다.
    scanf("%lf", &principal);
    printf("\n");

    printf("What is the target amount? : ");    //목표금액을 입력받는다.
    scanf("%d", &goal);
    printf("\n");

    printf("What is the compounding rate? : "); //복리율을 입력받는다.
    scanf("%lf", &compound);
    printf("\n");

    while(principal <= goal)    //목표금액을 넘어서면 반복문 탈출
    {
        principal = principal + (principal * (compound / 100.0)); //원금 + 이자(복리)
        printf("%lf\n", principal);

        year = year + 1;    //1년씩 카운트
    }   //복리계산을하고 그값을 원금에 넣어준다, 이 과정을 한번 할때마다 1년씩 카운트된다.

    printf("Time taken to achieve goal : %d years", year);  //목표달성까지 걸리는 시간 출력

    return 0;
}