#include<stdio.h>
int main ()
{
 int tiv = 0;
 int bit = 0;
// misth ashxati helnelu hamar cnontrol c
 while (1){
//cankanum em stanal input
 printf(" Gri tiv \n");
 scanf ("%d", &tiv);
// stugum em 5 bity  bitwizov u ev ov  
	bit= (tiv >> 4)&1 ;
// poxel 5 bity ete 0 a , toxel nuyny ete 1 a 
//stugum em paymany ete 
if ( bit == 0) {
// boptivanya ili  1 zdvig 4 razaa
	tiv = tiv|(1<<4); 
	printf(" %d \n" , tiv);
}
	else {
	printf(" %d\n", tiv);
}
}









}
