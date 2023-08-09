#include <stdio.h>
int main()
{
    int x = 0,y = 0;
    unsigned int rows = 0;
    printf("Enter the number of rows = ");
    scanf("%u",&rows);
    for(x=1; x<=rows; ++x)
    {
        // Print spaces
        for(y=1; y<x; ++y)
        {
            printf(" ");
        }
        // Print star
        for(y=rows; y>=1; y--)
        {
            printf("%d",y);
        }
        // Print new line
        rows--;
        printf("\n");
    }
    return 0;
}
