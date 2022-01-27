#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//C program to build the outline
//boundary using draw()
int i,j, height=40;
int width=40, gameover, score;
//function to draw the boundary
void draw()
{
    //system("cls");
    for(i=0;i<height;i++){
        for(j=0;j<width;j++){
            if (i == 0 ;i == width - 1 ;j == 0 ;j == hight - 1 ){
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
}
}
    \\Driver Code
    int main()
    {
        \\Function Call
        return 0;
    }
