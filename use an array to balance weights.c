#include <stdio.h>

int main(void) {
    int numberOfCars;
    scanf("%i", &numberOfCars);
    double cars[50];
    double totalWeight = 0;
    for (int i=0; i < numberOfCars; i++) {
        scanf("%lf", &cars[i]);
        totalWeight += cars[i];
    }
    double averageWeight = totalWeight / numberOfCars;
    for (int i=0; i < numberOfCars; i++) {
        printf("%.1lf\n", averageWeight - cars[i]);
    }
    return(0);
}
