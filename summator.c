#include<stdio.h>
#include<stdlib.h>

int main(){
    int x1,x2;
    
    printf("Enter 2 int nums : ");
    if (scanf("%d %d", &x1, &x2) == 2){
        printf("Sum x1 %d and x2 %d is %d\n", x1, x2, x1+x2);
        
    }else{
        perror("Invalid input!\n");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}
