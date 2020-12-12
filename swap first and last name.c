
#include<stdio.h>
int main(){
    char name[101];
    char lastName[101];
    int nbr;
    int i;
    scanf("%d",&nbr);
    for(i=0 ; i<nbr ; i++){
        scanf("%s %s\n",name,lastName);
        printf("%s %s\n",lastName,name);
    }
   
    return 0;
}
