#include<stdio.h>
/*
1 petq tan indz arjeq 
2 yst et arjeqi piti sarqem arakusi 
3 mi qani payman piti qnnarkem
*/
int main () {
int input = 0;
//1 harc
printf(" greq mer qarakus chapsery\n");
scanf("%d", &input);
// 2 harc 
for ( int i = 0; i < input ;++i){

	for ( int j = 0; j < input; ++j){

		if (( i == 0) || (i== input -1)){

			printf("* ");

		}	else{
			if ((j == 0)|| (j== input-1)){

					printf("* ");	}	

			else {
				printf("  ");}	}



}
	printf("\n");
	}}
