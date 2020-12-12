#include<stdio.h>
int main(){
    char word[101];
    int rep;
    int i=0;
    scanf("%d",&rep);
    scanf("%s",word);
   
    while(i<rep){
        printf("%s\n",word);
        i++;
    }
    
    
   return 0; 
}
