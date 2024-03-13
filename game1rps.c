/*
Game : Stone, Paper, pencil, Scissor (player v/s computer) 
*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    printf("\nLet's Begin the Fun Game of Stone, Paper, Pencil and Scissors !!!");
    printf("\nEnter : ");
    printf("\n1 for Stone");
    printf("\n2 for Paper");
    printf("\n3 for Pencil");
    printf("\n4 for Scissor");
    printf("\n0 to Exit");
    int player,countp=0,countc=0;
    char ans;
    
    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &player);
        int comp = (rand()%4)+1;
       
        switch(player)
        {
            case 1 : printf("\nYour Choice : Stone");break;
            case 2 : printf("\nYour Choice : Paper");break;
            case 3 : printf("\nYour Choice : Pencil");break;
            case 4 : printf("\nYour Choice : Scissor");break;
            case 0 : goto end;break;
        }
        switch(comp)
        {
            case 1 : printf("\nComputer Choice : Stone");break;
            case 2 : printf("\nComputer Choice : Paper");break;
            case 3 : printf("\nComputer Choice : Pencil");break;
            case 4 : printf("\nComputer Choice : Scissor");break;
        }
       if((player==1 && comp==1) || (player==2 && comp==2) || (player==3 && comp==3) || (player==4 && comp==4) )
       {
         printf("\nIt's a Draw!!!");
       }
       else if (player == 1 && comp == 2)
       {
         printf("\nPaper beats Stone.. Paper Wins!!");
         countc++;
       }
       else if (player == 1 && comp == 3)
       {
         printf("\nStone beats Pencil.. Stone Wins!!");
         countp++;
       }
       else if (player == 1 && comp == 4)
       {
          printf("\nStone beats Scissor.. Stone Wins!!");
          countp++;
       }
       else if(player == 2 && comp == 1)
       {
         printf("\nPaper beats Stone.. Paper Wins!!");
         countp++;
       }
       else if(player == 2 && comp == 3)
       {
           printf("\nPencil beats Paper.. Pencil Wins!!");
           countc++;
       }
       else if (player == 2 && comp == 4)
       {
         printf("\nScissor beats Paper.. Scissor Wins!!");
         countc++;
       }
       else if (player == 3 && comp == 1)
       {
          printf("\nStone beats Pencil.. Stone Wins!!");
          countc++;
       }
       else if ( player == 3 && comp == 2)
       {
           printf("\nPencil beats Paper.. Pencil Wins!!");
           countp++;
       }
       else if (player == 3 && comp == 4)
       {
         printf("\nScissor beats Pencil.. Scissor Wins!!");
         countc++;
       }
       else if (player == 4 && comp == 1)
       {
          printf("\nStone beats Scissor.. Stone Wins!!");
          countc++;
       }
       else if (player == 4 && comp == 2)
       {
           printf("\nScissor beats Paper.. Scissor Wins!!");
          countp++;
       }
       else if (player == 4 && comp == 3)
       {
         printf("\nScissor beats Pencil.. Scissor Wins!!");
         countp++;
       }
    }
    end:
    printf("\n\nRESULT : ");
    printf("\nPoints of Computer : %d",countc);
    printf("\nPoints of Player : %d", countp); 
    if(countc>countp)
    {
       printf("\n Player Loses!!!");
       printf("\nThank you for Playing The Fun Game :)\nHave FUN!!!");
    }

    if (countp>countc)
    {
       printf("\nWoohoo!!! Player Wins!!!");
       printf("\nThank you for Playing The Fun Game :)\nHave FUN!!!");
    }

    if(countc==countp)
    {
       printf("\nIt's a TIE!!!");
       printf("\nThank you for Playing The Fun Game :)\nHave FUN!!!");
    }
  }
    
