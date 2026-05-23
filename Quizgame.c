 #include<stdio.h>
 int main(){
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1 ,point2, point3, point4, point5;
    
    int total;
    while(1){                                                  //here using while loop till the condition is true
    printf("WELCOME TO THE GAME\n\n");
    printf(">Press 7 to start the game\n");
    printf(">Press 0 to quit the game\n");

    scanf("%d",&i);
    
    if(i==7){                                                 //using if else statements to make readable
        printf("The game has been started!!\n");


    }
    else if (i==0){
        printf("The game been ended!!\n\n");
        break;

    }
    else {
        printf("INVALID \n ");
        continue;
    }
    point1 = point2 = point3 = point4 = point5 = 0;
    if(i==7){
        printf("1)Which one was the first search engine in internet\n\n");
        printf("1) Google\n");
        printf("2)Archie\n");
        printf("3)Wais\n");
        printf("4)Altavista\n");
        printf("Enter your Answer:");
        scanf("%d",&ans1);
        if(ans1==2){
            printf("Correct Answer\n");
            point1 = 5;
            printf("You have scored %d points\n",point1);
        }
        else{
            printf("Wrong answer\n");
            
            printf("You hav escored %d points\n",point1);
        }

        printf("Which was the first browser invented in 1990?\n\n");
        printf("1)internet Explorer\n");
        printf("2)Mosaic\n");
        printf("3)Mozilla\n");
        printf("4)Nexus\n");

        printf("Enter  your Answer :");
        scanf("%d",&ans2);

        if(ans2==4){
            printf("Correct Answer");
            point2 = 5;
            printf("You hav escored %d points\n ",point2);

        }
        else{
            printf("Wrong Answer\n");
           
            printf("You have scored %d points\n", point2);

        }

        printf("First Computer virus is known as?\n\n");
        printf("1)Rabbit\n");
        printf("2)Creeper Virus\n");
        printf("3)Elk Cloner\n");
        printf("4)SCA Virus\n");

        printf("Enter Your Answer:");
        scanf("%d",&ans3);
        if(ans3==2){
            printf("Correct Answer\n");
            point3 = 5;
            printf("You have scored %d points\n",point3);
        }
        else{
            printf("Wrong Answer");
            
            printf("You have scored %d points\n",point3);
        }

        printf("4)Firewallsin the computer is used for ?\n\n");
        printf("1)Security\n");
        printf("2)Data Transmission\n");
        printf("3)Monitoring\n");
        printf("4)Authentication\n"); 
        
        printf("Enter Your Answer:");
        scanf("%d",&ans4);
        
        if(ans4==1){
        printf("Correct Answer:");
        point4 = 5;
        printf("You have scored  %d point\n",point4);
        }
        else{
            printf("Wrong answer ");
           
            printf("you have scored %d point\n ",point4);

        }

        printf("5)Which of the is not teh Databae management Software?\n\n");
        printf("1)MySQL\n");
        printf("2)Oracle\n");
        printf("3)Cobal\n");
        printf("4)Sybase\n");

        printf("Enter your Answer:");
        scanf("%d",&ans5);

        if(ans5==3){
            printf("Correct Answer:");
            point5 = 5;
            printf("You have scored %d point\n",point5);
        }
        else{
            printf("Wrong Answer\n");
            
            printf("you have scored %d point\n",point5);
        }
        total = point1 + point2 + point3 + point4 + point5;
        
        printf("=== GAME OVER ===\n");
        printf("Your Total Score is: %d out of 25\n", total);
     }
    }
     return 0;
    

 }