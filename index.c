#include <stdio.h>

int checkWin();
void printBoard();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
void main(){
    int player=1 ,input,status=-1;
     printBoard();
    
    while(status==-1)
    
    {
        player=(player%2==0) ? 2 : 1;
    char mark=(player==1) ? 'X':'o';
    printf("Enter the Player: %d\n",player);
    scanf("%d", &input);
    if(input<1 || input>9){
        printf("invalid input");
        
    }
    
    board[input]=mark;
    status = checkWin();
    printBoard();
    player++;
}
  if (status == 1) {
        printf("Player %d wins!\n", --player);
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}
void printBoard(){
    checkWin();
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

int checkWin(){
    if (board[1]==board[2] && board[2]==board[3]){
        return 1;
    }
     if (board[1]==board[4] && board[4]==board[7]){
        return 1;
    }
     if (board[7]==board[8] && board[8]==board[9]){
        return 1;
    }
     if (board[3]==board[6] && board[6]==board[9]){
        return 1;
    }
    if (board[1]==board[5] && board[5]==board[9]){
        return 1;
    }
     if (board[3]==board[5] && board[5]==board[7]){
        return 1;
    }
     if (board[2]==board[5] && board[5]==board[8]){
        return 1;
    }
     if (board[4]==board[5] && board[5]==board[6]){
        return 1;
    }
    return -1;
}