#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
    {
        int userchoice, compchoice;
      printf("welcome to rock ,paper,scissors!\n");
       do
        {
            printf("\n choose your move:\n 1 rock \n 2 paper \n 3 scissors\n");
             printf("enter your choice(1/2/3):");
             scanf("%d",&userchoice);
             srand(time(NULL));
             compchoice=rand()%3+1;
             printf ("user's choice : %d\n",userchoice);
             printf("computer's choice : %d \n ",compchoice);
             if(userchoice==compchoice)
             {
                 printf("it 's a tie!");
             }
             else if ((userchoice==1&&compchoice==3)||(userchoice==2&&compchoice==1)||(userchoice==3&&compchoice==2))
             {
                 printf("congratulations!you win!\n");
             }
             else
             {
               printf("computer win. better luck next time!\n");
             }
             printf("do you want to play again?(1 for yes, 0 for no ):");
             scanf("%d",&userchoice);
        }
        while (userchoice==1);
        printf("thanks for playing!goodbye.\n");
        return 0;
 }
