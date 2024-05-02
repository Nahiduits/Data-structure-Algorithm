#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateRandomNumber(int n){
    srand(time(NULL));
    return rand() % n;

}

int greater(char char1, char char2)
{
    if(char1 == char2){
        return -1;
    }
    if((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if((char2=='r') && (char1 == 's')){
        return 0;
    }

else if((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
     else if((char2=='p') && (char1 == 'r')){
        return 0;
    }


    if((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
     else if((char2=='s') && (char1 == 'p')){
        return 0;
    }

}

int main()
{
    int playerScore =0, compScore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r','p','s'};
    printf("Welcome to the Rock,Paper,Scissor\n");
    
    for(int i=0;i<3;i++){
          printf("Player 1's Turn:\n");
          printf("choose 1 for Rock,2 for Paper and 3 for Scissors\n");
          scanf("%d", &temp);
          getchar();
          playerchar = dict[temp - 1];
          printf("You chose %c\n\n",playerchar);


          printf("Computer's Turn:\n");
          printf("choose 1 for Rock,2 for Paper and 3 for Scissors\n");
          temp = generateRandomNumber(3) + 1;
          playerchar = dict[temp - 1];
          printf("CPU chose %c\n",compchar);



    if(greater(compchar,playerchar)== 1)
    {
        compScore += 1;
        printf("CPU got it\n");

    }
    else if(greater(compchar,playerchar)== -1)
    {
        compScore += 1;
        playerScore += 1;
        printf("It's a Draw!\n");
    }
    else{
        playerScore += 1;
        printf("You got it!\n\n");
    }
      printf("you: %d\nCPU: %d",playerScore,compScore);
      
    }

    printf("The random number between 0 to 5 is %d\n",generateRandomNumber(2));
    return 0;
}


