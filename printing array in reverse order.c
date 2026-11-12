#include<stdio.h>
int main(){
	int i, array[10];
	//getting elements of the array from the user
	for(i=0;i<10;i++){
		printf("enter an element\n");
	scanf("%d",&array[i]);
	}
	printf("array: ");
	//printing the array
	for(i=0;i<10;i++){
		printf("%d ", array[i]);
	
	}
	//reversing and printing the reversed array
	printf("\nreversed array: ");
	for(i=9;i>=0;i--){
	printf("%d ",array[i]);}
	return 0;
}
