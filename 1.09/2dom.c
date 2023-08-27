#include <stdio.h>

int main() {
    int size = 0;
    printf("write your squaer size \n");
    scanf(" %d", &size);
    int num[size][size];
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
        
        scanf("%d", &num[i][j]);
    }
    }

int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf(" %d  ", num[i][j]);
            if (j == size - 1 - i) {
                sum = sum + num[i][j];

            }     
        }
    printf("\n");
   }


    printf("%d\n", sum);
    
        
    
    return 0;
}


