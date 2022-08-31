#include <stdio.h>
#include <stdlib.h>

void BMI(int w, float h);
int main()
{
       int w;
       float h;

        printf("Input your weight in kg\n: ");
        scanf("%d", &w);
        printf("Input your height in meters\n: ");
        scanf("%f", &h);
        BMI(w, h);

        return (0);
}

void BMI(int w, float h)
{
    float temp = w / (h * h);

    printf("BMI = %f\n", temp);

        if (temp < 18.5)
            printf("your weight status is underweight\n", BMI);
        else if (temp > 20.5 && (temp < 25))
            printf("your weight status is Normal weight\n", BMI);
        else
            printf("your weight status is overweight\n", BMI);
}
