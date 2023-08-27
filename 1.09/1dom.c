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
    for (int t = 0; t < size; t++)
    {
        for (int v = 0; v < size; v++)
        {
            printf(" %d  ", num[t][v]);
            if (t == v) {
                sum = sum + num[t][v];

            }     
        }
    printf("\n");
   }


    printf("%d", sum);
    
        
    
    return 0;
}

   





    
