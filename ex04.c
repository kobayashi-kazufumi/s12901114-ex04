#include <stdio.h>
#include <stdlib.h>

int main(){
    int h=0;
    int t=0;
    char name[30];
    int p;
    


    printf("Tosshing coin...\n");
    
    for(int i=0;i<3;i++){
         p=rand()%2;
        if(p==1){
            printf("Round%d Head\n",i+1);
            h++;
        }else {
            t++;
            printf("Round%d Tail\n",i+1);
    
        }

    }

    printf("Head : %d Tail : %d\n",h,t);

if(h>t){

        printf("you won\n");
    }else 
        printf("you lose\n");    

}
