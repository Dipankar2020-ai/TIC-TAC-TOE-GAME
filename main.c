/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <term.h>
char box[10]={'0','1','2','3','4','5','6','7','8','9'};
void creatingboard();
void markingboard(int,char);
int checkforwin();

int main()
{
    int i,player=1,choice;
    char mark;
    do
    {
        creatingboard();
        player=(player%2)? 1:2;
        printf("player  %d ,enter a number=>",player);
        scanf("%d",&choice);
        mark=(player==1)?'X':'O';
        markingboard(choice,mark);
        i=checkforwin();
        player++;
        
        
    }while(i==-1);
    creatingboard();
    if(i==1)
    {
        printf("player %d won the game",--player);
        
    }
    else
    {
         printf("<-------Draw------>");
    }
    return 0;
    
}
void creatingboard()
{
    clear_screen;
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X) -- Player 2 (O)\n\n");
    printf("     |     |     \n");
    printf(" %c   | %c   | %c   \n",box[1],box[2],box[3]);
    printf("_____|_____|_____\n");
    printf("     |     |      \n");
    printf(" %c   | %c   | %c   \n",box[4],box[5],box[6]);
    printf("_____|_____|_____\n");
    printf("     |     |      \n");
    printf(" %c   | %c   | %c   \n",box[7],box[8],box[9]);
    printf("_____|_____|_____\n");
    printf("     |     |      \n");
}

void markingboard(int choice,char mark)
{
    if(choice==1 && box[1]=='1')
    {
        box[1]=mark;
    }
    else if(choice==2 && box[2]=='2')  
    {
         box[2]=mark;   
    }
    else if(choice==3 && box[3]=='3')  
    {
         box[3]=mark;   
    }
    else if(choice==4 && box[4]=='4')  
    {
         box[4]=mark;   
    }
    else if(choice==5 && box[5]=='5')  
    {
         box[5]=mark;   
    }
    else if(choice==6 && box[6]=='6')  
    {
         box[6]=mark;   
    }
    else if(choice==7 && box[7]=='7')  
    {
         box[7]=mark;   
    }
    else if(choice==8 && box[8]=='8')  
    {
         box[8]=mark;   
    }
    else if(choice==9 && box[9]=='9')  
    {
         box[9]=mark;   
    }
    else
    {
        printf("Invalid Move\n");
    }
        
}

int checkforwin()
{
    if(box[1]==box[2] && box[2]==box[3])
    {
        return 1;
    }
    else if(box[4]==box[5] && box[5]==box[6])
    {
        return 1;
    }
    else if(box[7]==box[8] && box[8]==box[9])
    {
        return 1;
    }
    else if(box[1]==box[4] && box[4]==box[7])
    {
        return 1;
    }
    else if(box[2]==box[5] && box[5]==box[8])
    {
        return 1;
    }
    else if(box[3]==box[6] && box[6]==box[9])
    {
        return 1;
    }
    else if(box[1]==box[5] && box[5]==box[9])
    {
        return 1;
    }    
    else if(box[3]==box[5] && box[5]==box[7])  
    {
        return 1;
    }    
    else if(box[1]!='1' && box[2]!='2' && box[3]!='3' && box[4]!='4' && box[5]!='5' && box[6]!='6' && box[7]!='7' && box[8]!='8' && box[9]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

