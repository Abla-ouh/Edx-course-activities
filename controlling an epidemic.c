#include <stdio.h>

int main()
{
    int day = 1;
    int contaminated = 1;
    int population;

    scanf("%d", &population);

    while (contaminated < population)
    {
        day++;
        contaminated *= 3;
    }

    printf("%d", day);

    return 0;
}
