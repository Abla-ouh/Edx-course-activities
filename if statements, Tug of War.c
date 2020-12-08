#include<stdio.h>
int main(){
    int members;
    int weight;
    int sum1=0,sum2=0;
    int i;
    scanf("%d",&members);
    for(i = members*2;i>0;i--){
    scanf("%d",&weight);
    if(i%2==0){
        sum1=sum1+weight;
    }
    else{
        sum2=sum2+weight;
    }
}
    if(sum1>sum2){
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n",sum1);
        printf("Total weight for team 2: %d\n",sum2);
    }
    else{
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n",sum1);
        printf("Total weight for team 2: %d\n",sum2);
    }
    return 0;
}
