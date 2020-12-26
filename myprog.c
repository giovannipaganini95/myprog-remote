#include <stdio.h>

int main(void)
{
    
    int rows;
    scanf("%d", &rows);
    if(rows < 5 || rows > 20) return 0;
    
    int i,j;
    int max_points = rows * 2 - 1;
    int trunk_height = max_points / 8;
    int trunk_width = 3;
    int trunk_spaces = (max_points - trunk_width) / 2;
    
    printf("\n");
    for(i=1; i<=rows; i++){
        int row_points =  2 * i - 1;
        int row_spaces = (max_points - row_points)/2;
        for (j=0; j < row_spaces; j++) printf(" ");
        for (j=0; j < row_points; j++) printf("*");
        printf("\n");
    }
    
    
    for (i=0; i<trunk_height; i++){
        for (j=0; j< trunk_spaces; j++) printf(" ");
        for (j=0; j< trunk_width; j++) printf("*");
        printf("\n");
    }
     
    printf("\n");

    return 0;
}
