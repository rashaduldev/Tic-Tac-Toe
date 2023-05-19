#include <stdio.h>


void printBoard();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
void main(){
    int player=1 ,input,status=-1;
     printBoard();
    
    while(status==-1)
    
    {
        player=(player%2==0) ? 2 : 1;
    char mark=(player==1) ? 'X':'o';
    printf("Enter the number: %d\n",player);
    scanf("%d", &input);
    if(input<1 || input>9){
        printf("invalid input");
        
    }

    board[input]=mark;
    
  printBoard();
  player++;
}
}
void printBoard(){
    printf("\n\n");
    printf("*** tik tac toe *** \n");
    printf("    |     |     \n");
    printf(" %c  |  %c  |  %c  \n",board[1], board[2],board[3]);
    printf("____|_____|___  \n");
    printf("    |     |     \n");
    printf(" %c  |  %c  |  %c  \n",board[4], board[5],board[6]);
    printf("____|_____|___  \n");
    printf("    |     |     \n");
    printf(" %c  |  %c  |  %c  \n",board[7], board[8],board[9]);
    printf("    |     |     \n");
     printf("\n\n");
}
















