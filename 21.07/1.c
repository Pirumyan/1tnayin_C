#include<stdio.h>
int main () {
        int year = 0;
        printf(" gri tivy \n");
        scanf("%d", &year);
        if( (year %4==0) && (year %100!=0))
                printf("Nahanj tari e \n");
        else if (year % 400 ==0)
                printf("nahanj tari e \n");
        else
                printf(" nahanj tari che \n");


}
