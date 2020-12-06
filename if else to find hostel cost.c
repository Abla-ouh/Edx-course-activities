#include<stdio.h>
int main(){
    int arr;
    int price;
    scanf("%d",&arr);
    if(arr > 0){
        price = 10+(5*arr);
    }else{
        price=10;
    }
       if(price>53){
            printf("53");}
            else{
    printf("%d",price);}
    return 0;
}
