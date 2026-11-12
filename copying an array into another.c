#include<stdio.h>
int main(){
	int i,array1[10],array2[10];
	//getting elements of the first array from the user
	for(i=0;i<10;i++){
		printf("enter an element\n");
	scanf("%d",&array[i]);
	}
	printf("array1: ");
	//printing the array
	for(i=0;i<10;i++){
		printf("%d ", array[i]);
	
	}
	//getting elements of the second array from the user
	for(i=0;i<10;i++){
		printf("enter an element\n");
	scanf("%d",&array[i]);
	}
	printf("array2: ");
	//printing the array
	for(i=0;i<10;i++){
		printf("%d ", array[i]);
	
	}
	//copying the first array into the second
	for(i=0;i<10;i++){
		array1[i]=array2[i];
	}
	return 0;
}
