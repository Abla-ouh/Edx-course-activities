#include<stdio.h>
int main(){
    float gas,cost;
    int passangers;
   scanf("%d",&passangers);
   scanf("%f",&gas);
   if(passangers==0){
       cost = (gas);
   }else{
       cost = (gas+1)/(passangers+1);
   }
   printf("%.2f",cost);
return 0;    
}
