#include<stdio.h>
int main(){
    int Num;
    int sum=0;
    while(1){
        scanf("%d",&Num);
        if(Num==-1){
            break;
        }else{
            sum+=Num;
        }
    }
    printf("%d",sum);
    return 0;
}
