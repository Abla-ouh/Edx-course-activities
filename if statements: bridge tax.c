#include<stdio.h>
int main(){
    int sum;
    int dice1,dice2;
    scanf("%d",&dice1);
    scanf("%d",&dice2);
    sum=dice1+dice2;
    if(sum>=10){
        printf("Special tax \n36");
    }else{
        printf("Regular tax\n %d",sum*2);
    }
return 0;
}
