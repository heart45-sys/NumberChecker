#include <stdio.h>
#include <string.h>

int main() {
    // check if the number is odd or even

    int number;
    char choice[10];

    do{
        printf("Enter Any Number:  ");
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("%d is Even Number!",number);
    
    }else{
        printf("%d is Odd Number!",number);


    }
     printf("\nDo You Want to check another number? (Yes/No: )");
    scanf("%s", &choice);

    }while(strcmp(choice, "YES")==0);
    printf("THANKYOU FOR USING THE PROGRAM");
    
    return 0;

   

}