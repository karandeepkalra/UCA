#include<stdio.h>
#include<stdlib.h>

#define SIZE_R 21
#define SIZE_C 77
#define ITEM_TOTAL 263
typedef struct{
    int rows;
    int cols;
}position;


void update_screen(char maze[][SIZE_C+1],int rows,int cols,int items)
{
    if(items)
    {
         printf("\nw = move up, s = move down, a = move left, d = move right, q = quit game, items left: %d \n", items);
    }
    for(int i=0;i<rows;i++)
    {
        printf("%s\n",maze[i]);
    }
}



void add_ghost(int *position,int* changef, int* deathf, int* itemf, char arr[SIZE_R][SIZE_C + 1])
{
    if(changef==0)
    {
    if((arr[ghost->row][ghost->cols+2]>SIZE_C)||arr[ghost->row][ghost->cols+1]=='*'||arr[ghost->row][ghost->cols+2]=='&'||arr[ghost->row][ghost->cols+2]=='*')
    {

    }
    else{
        if(arr[ghost->row][ghost->cols+2]=='@')
        {
            deathf=1;
        }
        if(itemf)
        {
            arr[ghost->row][ghost->cols]='^';
        }
        else{
            arr[ghost->row][ghost->cols]=' ';
        }
        if(arr[ghost->row][ghost->cols+2]=='^')
        {
            itemf=1;
        }
        else{
            itemf=0;
        }
        arr[ghost->row][ghost->cols+2]='&';
        ghost->cols=ghost->cols+2;
        changef=1;

    }
    }
}
