#include<stdio.h>
//ste chi stacvum - tvery 
int main () {

	int a = 0;
	int b = 0;
	int c = 0;
	int baj = 0;
	printf(" greq 3 at tiv \n");
	scanf("%d%d%d", &a,&b,&c);
	for ( int i= 1; i <=a && i<=b &&i <=c;i++){
		if ( a%i==0 && b % i == 0 && c % i == 0){

		baj=i;}
}
	printf("sranc amenamec bajarary %d\n", baj);
	


}
