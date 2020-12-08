#include<stdio.h>
int main(){
    int height;
    int leaflets;
    scanf("%d",&height);
    scanf("%d",&leaflets);
    if(height<=5 && leaflets>=8){
        printf("Tinuviel");
    }
    else if(height>=10 && leaflets>=10){
        printf("Calaelen");
    }
    else if(height<=8 && leaflets<=5){
        printf("Falarion");
    }
    else if(height>=12 && leaflets<=7){
        printf("Dorthonion");
    }
    else{
        printf("Uncertain");
    }
    return 0;
}
