#include<stdio.h>
int main(){

int ingredients;
double price = 0;
double cost[10];
double pounds[10];

scanf("%i", &ingredients);

for(int i = 0; i < ingredients; i++){
    scanf("%lf", &cost[i]);
}
for(int i = 0; i < ingredients; i++){
    scanf("%lf", &pounds[i]);
    price += cost[i] * pounds[i];
}

printf("%.6lf", price);
}
