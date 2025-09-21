#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int random;
    int input;
    
    srand(time(NULL));
    random = (rand() % 50) + 1;
    
    do{
        printf("Tente acertar o numero secreto:");
            scanf("%d" , &input);
            if ( input > random){
                printf("Tente um numero menor\n");
            }else if (input < random){
                printf("Tente um numero maior\n");
            }else{
                printf("Voce ganhou");
            }
            
    }
    while(input != random);
            
    



   return 0;
}