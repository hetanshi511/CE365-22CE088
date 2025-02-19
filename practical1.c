#include <stdio.h>
#include<conio.h>

int valid(char input[]){
    int i = 0;
    while(input[i] == 'a'){
        i++;
    }
    if(input[i] == 'b' && input[i+1] == 'b' && input[i+2] == '\0'){
        return 1;
    }
    return 0;
} 

int main(){
    
    char input[20];
    printf("Enter a string: ");
    scanf("%s",input);

    int answer=valid(input);
    if(answer==1){
        printf("The string is a valid.\n");
    }
    else{
        printf("The string is not a valid.\n");
        }
        return 0;


}


