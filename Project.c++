
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

void printMaze(int visited[SIZE][SIZE]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (visited[i][j])
                printf("X ");
            else
                printf(". ");
        }
        printf("\n");
    }
}

int main()
{
   
    int visited[SIZE][SIZE] = { 0 };

    printMaze(visited);

    return 0;
}
	
