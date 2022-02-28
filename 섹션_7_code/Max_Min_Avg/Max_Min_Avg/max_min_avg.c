//
//  main.c
//  Max_Min_Avg
//
//  Created by 임태호 on 2022/02/28.
//

#include <stdio.h>
#include <float.h>  //TBC's version

int main() {
    
    /* HaeTo's version */
    double count = 0.0;
    double sum = 0.0;
    double temp = 0.0;
    double num = 0.0;
    double min = 0.0;
    double max = 0.0;
    double ave = 0.0;

    printf("Enter number :\n");

    while(scanf("%lf", &num) == 1)
    {
        if(temp < num)
            max = num;
        else if(temp > num)
            min = num;

        sum += num;
        count++;
    }

    ave = sum / count;

    if(count > 0)
        printf("min = %lf, max = %lf, ave = %lf\n", min, max, ave);
    else
        printf("No input\n");
    
    /* TBC's version */
    float max = -FLT_MAX;
    float min = FLT_MAX;
    float sum = 0.0f;
    float input;
    int n = 0;
    
    while(scanf("%f", &input) == 1)
    {
        if(input < 0.0f || input > 100.0f) continue;    // ignore negative values and extreme high value
        max = (input > max) ? input : max;
        min = (input < min) ? input : min;
        sum += input;
        
        n++;
    }
    
    if(n > 0)
        printf("min = %f, max = %f, ave = %f\n", min, max, sum / n);
    else
        printf("No input\n");
    
    return 0;
}
