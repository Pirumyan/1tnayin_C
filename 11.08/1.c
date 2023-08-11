#include<stdio.h>
void hashv(int a[],int qanak){
	for (int i= 0;i<qanak;i++){
	printf(" %d ", a[i]);
	}
printf("\n");
}

int main() 
{
int qanak = 0;
printf("qani het tiv eq mutqagrelu \n");
scanf(" %d", &qanak);
int arr[qanak];
for( int i = 0; i<qanak;++i) {
	printf("greq  tivy \n ");
	scanf(" %d",&arr[i]);
}
	hashv(arr,qanak);
	
	for(int i = 0; i < qanak-1;i++){
	for (int j = 0; j<qanak-1; j++){
		if(arr[j] > arr[j+1]){
	int temp = arr[j];
	arr [j]= arr [j+1];
	arr[j+1]=temp; } 
} 




}

hashv(arr,qanak);





}

