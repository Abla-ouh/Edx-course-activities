#include<stdio.h>
int main(void){
    int max;
    int min;
    int temp;
    scanf("%d",&min);
    scanf("%d",&max);
    scanf("%d",&temp);
    
    while(temp!=-999){
        if(temp>=min && temp<=max){
            printf("Nothing to report\n");
        }
        else{
            printf("Alert!\n");
            break;
        }
        scanf("%d",&temp);
    }
    return 0;
}
    
    
    
    
    
    
    
    
    
    
