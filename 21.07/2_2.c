// esi arden minusov el a bajanvum 
#include <stdio.h>
//sarqum em funqcia 
int miban(int a, int b) {
    if (b == 0)
        return a;
    else
        return miban(b, a % b);
}

int main() 
{
    int num1, num2, num3;

    printf("Greq 3 hat tiv: ");
    scanf("%d %d %d", &num1, &num2, &num3);
// stugum em vor 0 chlini bayc karam chstugem   
  if ( num1==0||num2==0||num3==0) {
	printf("zroyi chi kara bajanvi \n");
	}else{
    int miban1 = miban(num1, num2);
    int miban2  = miban(miban1, num3);

    printf("amenamec bajanarary: %d\n", miban2);

    return 0;}
}
