#include<stdio.h>
int main () {
char arr[10];
int stugum = 0;
printf("mutqagri inch uzum es \n ");
scanf(" %s", arr);
int i=0;
while(arr[i] != '\0'){
 	if ((arr[i]>47) && (arr[i]<58)){
	printf(" %c", arr[i]);
	stugum++ ;
}
i++;}
if(stugum==0){
	printf("ste tiv chka axper\n");}


}
