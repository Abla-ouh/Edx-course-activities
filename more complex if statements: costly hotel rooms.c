#include<stdio.h>
int main(){
    
    int age,luggage;
    scanf("%d",&age);
    scanf("%d",&luggage);
    if(age<10){
        printf("5");
    }
    else if(age==60){
        printf("0");
    }
    else if(luggage>20){
            printf("40");}
    else{
                printf("30");
    }
    return 0;
}
