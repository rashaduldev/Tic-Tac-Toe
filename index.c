#include <stdio.h>


void printBoard();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
void main(){
   printBoard();
}
void printBoard(){
    printf("\n\n");
    printf("*** tik tac toe *** \n");
    printf("    |     |     \n");
    printf(" %c  |  %c  |  %c  \n",board);
    printf("____|_____|___  \n");
    printf("    |     |     \n");
    printf(" %c  |  %c  |  %c  \n");
    printf("____|_____|___  \n");
    printf("    |     |     \n");
    printf(" %c  |  %c  |  %c  \n");
    printf("    |     |     \n");
     printf("\n\n");
}