#include<stdio.h>
int main ()
{
char sym = 'a';
while (1){
printf (" Write any capital letter \n ");
scanf (" %c", &sym );
switch (sym){
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf(" Your letter Vowel:\n");
		break ;
	default:
		printf(" You letter Consonat:\n");}


}







}
