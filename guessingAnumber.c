#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int choice, number , max, attempts, min =1 , chances,guessedNumber ,score ;
     srand(time(0)); 

    do
    { printf(">>Welcome to the guessing number...\n");
    printf("... 1 for easy (1 to 50 ,7 chances)\n");
    printf("... 2 for medium(1 to 100 , 5 chances)\n");
    printf("... 3 for hard (1 to 200, 3 chances)\n");
    printf("... 4 for Exit ");

    printf("Choose the difficulty level:\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        max =50;
        chances = 7;
        break;
    case 2:
        max =100;
        chances = 5;
        break;
    case 3:
        max =200;
        chances = 3;
        break;
    case 4:
       printf("Exiting the Game!!! see you again");
        return 0;      
    
    default:
    printf("Invalid choice!");
    continue;
    }


   
    number = (rand()% max)+1;
    attempts = 0;
    score = 100;

    printf("I have choosen %d to %d numbers \n", min , max);
    printf("You have %d chances :\n ", chances);


    while(attempts< chances)
    {

        printf("Enter  your guessing number  or -1 for quiting:\n");
        scanf("%d",&guessedNumber);
        
        if(guessedNumber==-1){
            printf("you are quiting the game\n");
            break;
        }

       attempts= attempts+1;
    
        if (guessedNumber == number ){
            printf("Correct ! guessing number is %d\n",number);
            printf("Your score is %d\n",(score-attempts*10));
            break;
        }
        else if(guessedNumber<number){
            printf("Too low! Try again\n");
        }
        else{
            printf("Too high ! Try again \n");
            }


        if(attempts == chances){
            printf("Game Over!! here your number is %d",number);
        }
     }
       
    } while (choice!=4);

    return 0;
}
    

  