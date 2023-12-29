#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>

int main()
{
    char name[20], choice, choice2,choice3;
    int choice4;
    int count=0, q1, q2, q3, q4, q5, q6, score=0,money;
    system("cls");
    printf("\nEnter character name: ");
    scanf("%s",name);
    printf("\n___________________________________________");
    printf("\n");
    printf("\nWELCOME TO THE GAME %s",name);
    printf("\n___________________________________________");
    printf("\n___________________________________________");
    printf("\n SO NOW ARE YOU READY TO BE A MILLIONAIRE???");
    printf("\n___________________________________________");
    printf("\n___________________________________________");
    START:
    system("cls");
    printf("\n -> type S to start the game");
    printf("\n -> type V to view your score");
    printf("\n -> type R to reset the score");
    printf("\n -> type H to display help section");
    printf("\n -> type Q to quit the game\n");
    printf("\nCHOICE: ");
    scanf(" %c",&choice);
    if(islower(choice))
    {
      choice=toupper(choice);
    }
    printf("\n___________________________________________");
    switch(choice)
    {
        case 'S': GAME:
                  system("cls");
                  printf("\n YOUR FIRST QUESTION IS..........");
                  printf("\n1:: WHAT IS THE SQUARE ROOT OF 144?? ");
                  printf("\n ANSWER: ");
                  scanf("%d",&q1);
                  system("cls");
                  printf("\n OK NOW LETS GOTO MEDIUM LEVEL...");
                  printf("\n2:: WHAT IS THE FACTORIAL OF 5?");
                  printf("\n ANSWER: ");
                  scanf("%d",&q2);
                  system("cls");
                  printf("\n OK NOW HERE COMES THE LAST LEVEL TRY UR BEST!!");
                  printf("\n3:: OUT OF 20 CHOCOLATES IF RAHUL HAS 5 CHOCOLATES AND RIYA HAS 6 CHOCOLATES HOW MANY DOES RICKY HAVE?");
                  printf("\n ANSWER: ");
                  scanf("%d",&q3);
                  if(q1==12)
                  {
                    count++;
                  }
                  if(q2==120)
                  {
                    count++;
                  }
                  if(q3==9)
                  {
                    count++;
                  }
                  money = 10000 * count;
                  system("cls");
                  printf("\n___________________________________________");
                  printf("\n YOU HAVE EARNED %d BUT CONTINUE IF YOU WANT TO EARN A MILLION ",money);
                  printf("\n___________________________________________");
                  if(count>=2)
                  {
                    system("cls");
                    printf("\n CONGRATULATIONS ON CLEARING ROUND 1!!!!!!! HUZZAAAHHH!!!!");
                    printf("\n___________________________________________");
                    printf("\nNOW LETS ENTER ROUND TWO");
                    printf("\n -> type C to continue the game\n");
                    printf("\n -> type M to view marks\n");
                    printf("\n -> type L to leave the game\n");
                    scanf(" %c",&choice2);
                    if(islower(choice2))
                    {
                      choice2=toupper(choice2);
                    }
                    switch(choice2)
                    {
                        case 'C': GAME2:
                                  system("cls");
                                  printf("\n___________________________________________");
                                  printf("\n YOUR FIRST QUESTION OF ROUND TWO IS..........");
                                  printf("\n1:: FIND POSITIVE VALUE OF X IF (X^2 + 15) = 24 ");
                                  printf("\n ANSWER: ");
                                  scanf("%d",&q4);
                                  system("cls");
                                  printf("\n OK NOW LETS GOTO MEDIUM LEVEL...");
                                  printf("\n2:: SANDEEP WALKS 60M TO THE EAST, THEN HE TURNS LEFT AND WALKS FOR 50M,");
                                  printf("\nTHEN TURNS RIGHT AND WENT 70M AND THEN TURNS RIGHT AGAIN AND WENT 50M.HOW FAR WAS SANDEEP FROM THE STARTING POINT???");
                                  printf("\n ANSWER: ");
                                  scanf("%d",&q5);
                                  system("cls");
                                  printf("\n OK NOW HERE COMES THE LAST LEVEL TRY UR BEST!!");
                                  printf("\n3:: A VENDOR BOUGHT TOFFEES AT 6 FOR A RUPEE. HOW MANY FOR A RUPEE MUST HE SELL TO GAIN 20PERCENT PROFIT?");
                                  printf("\nANSWER: ");
                                  scanf("%d",&q6);
                                  if(q4 == 3)
                                  {
                                    count++;
                                  }
                                  if(q5==130)
                                  {
                                    count++;
                                  }
                                    if(q6==5)
                                  {
                                  count++;
                                  }
                                  money = (count * 10000);
                                  if(money > 60000 || money == 60000)
                                  {
                                    //money = 100000;
                                    system("cls");
                                    printf("\n___________________________________________");
                                    printf("\nCONGRATULATIONSSSSSS!!!! YOU HAVE EARNED %d but maybe if you keep playing you can earn a million?",money);
                                    printf("\n___________________________________________");
                                    printf("\nDo you wanna play the game again? if yes type 1 if you want to quit type 2: ");
                                    scanf("%d",&choice4);
                                    if(choice4 == 1)
                                    {
                                        goto START;
                                        break;
                                    }
                                    else
                                    {
                                        goto QUIT;
                                        break;                                
                                    }
                                    break;
                                  }
                                  else
                                  {
                                    system("cls");
                                    printf("\nGOOD JOB!!! YOU HAVE EARNED %d, BUT BETTER LUCK NEXT TIME!",money);
                                    printf("\nDo you wanna play the game again?Maybe you could earn better?? If yes type 1 if you want to quit type 2: ");
                                    scanf("%d",&choice4);
                                    if(choice4 == 1)
                                    {
                                        goto START;
                                        break;
                                    }
                                    else
                                    {
                                        goto QUIT;
                                        break;                                
                                    }
                                    break;
                                  }
                                  printf("\n");
                                  printf("\n___________________________________________");
                                  printf("\n___________________________________________");
                                  printf("\n BYEEEEEE!!!!");
                                  break;

                        case 'M': system("cls");
                                  printf("\n___________________________________________");
                                  printf("\n%d is your current money",money); 
                                  printf("\nType 1 if you want to continue the game and earn money \n Type 2 to quit: ");
                                  scanf("%d",&choice4);
                                  if(choice4 == 1)
                                  {
                                      goto GAME2;
                                      break;
                                  }
                                  else
                                  {
                                    goto QUIT;
                                    break;                                
                                  }
                                  break;

                        case 'L': system("cls");
                                  goto QUIT;
                                  break;

                        default : system("cls");
                                  printf("\n___________________________________________");
                                  printf("\nPLEASE ENTER EITHER C OR M OR Q ONLY");
                                  break;
                    }
                  }
                  else
                  {
                    system("cls");
                    printf("\n___________________________________________");
                    printf("\nBETTER LUCK NEXT TIME MATE!!!!");
                    break;
                  }
                  break;
                  
        case 'V': MONEY:
                  system("cls");
                  printf("\n___________________________________________");
                  printf("\n%d is your current money",money); 
                  printf("\nType 1 if you want to play the game and earn money \n Type 2 to quit: ");
                  scanf("%d",&choice4);
                  if(choice4 == 1)
                  {
                      goto GAME;
                      break;
                  }
                  else
                  {
                    goto QUIT;
                    break;                                
                  }
                  break;
        
        case 'R': money = 0;
                  system("cls");
                  printf("\nSCORE HAS BEEN RESET");
                  printf("\n CURRENT SCORE IS %d",money);
                  printf("\nType 1 if you want to play the game and earn money \n Type 2 to quit: ");
                  scanf("%d",&choice4);
                  if(choice4 == 1)
                  {
                      goto GAME;
                      break;
                  }
                  else
                  {
                    goto QUIT;
                    break;                                
                  }
                  break;

        case 'H': system("cls");
                  printf("\n___________________________________________");
                  printf("\nONCE YOU START THE GAME YOU WILL REACH TO WARMUP LEVELS WHICH ONCE YOU HAVE ANSWERED MINIMUM 2 QUESTIONS YOU WILL BE ELIGIBLE TO ENTER CLHALLENGER ROUND AND WIN YOUR PRIZE MONEY...");
                  printf("\nYOU NEED TO GIVE ACCURATE ANSWERS...");
                  system("cls");
                  printf("\nType 1 if you want to continue to the game \nType 2 if you want to quit the game: ");
                  scanf("%d",&choice4);
                  if(choice4 == 1)
                  {
                      goto START;
                      break;
                  }
                  else
                  {
                    goto QUIT;
                    break;                                
                  }
                  break;
                  
        case 'Q': QUIT:
                  system("cls");
                  printf("\n___________________________________________");
                  printf("\nWE ARE REALLY SORRY IF ANY INCONVINIENCE IS CAUSED. WE WILL MAKE SURE TO RECTIFY ANY ERRORS. THANK YOU FOR ATTEMPTING THE GAME.");
                  break;

        default : system("cls");
                  printf("\n___________________________________________");
                  printf("\nPLEASE ENTER EITHER ONLY FROM THE GIVEN LIST");
                  break;
    }
    system("cls");
    printf("\n___________________________________________");
    printf("\n___________________________________________");
    printf("\nTHANK YOU SO MUCH FOR PLAYING THIS GAME!! WE HOPE TO MEET YOU AGAIN!!");
    printf("\n___________________________________________");
    return money;
}