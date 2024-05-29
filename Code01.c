#include <stdio.h>
int main()
{

    int n, i, sum = 0, avg = 0, perc = 0, max;

    printf("How many subject you study: ");
    scanf("%d", &n);
    printf("Maximum marks of one subject: ");
    scanf("%d", &max);
    int mark[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &mark[i]);
        sum += mark[i];
    }

    perc = (sum * 100) / (n * max);
    printf("Maximum Marks = %d", max * n);
    printf("\nSum = %d", sum);
    printf("\nPercent = %d", perc);

    return 0;
}