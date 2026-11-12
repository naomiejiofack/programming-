#include<stdio.h>
int main(){
	int i;
	int temp;
	int array[10];
	double sum=0.0;
	int largestelement;
	int secondlargestelement;
	double average;
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
	//calculating and printing the sum of the array
	for(i=0;i<10;i++){
		sum=sum+array[i];
		average=sum/10;
	}
	printf("sum of array: %.2f\n",sum);
	//calculating and printing the average
	
	printf("average: %.2f\n",average);
	//searching for the largest element
	largestelement=array[0];
	for(i=0;i<10;i++){
		if(array[i]>largestelement){
			largestelement=array[i];
		}
	}
	printf("largest element: %d\n",largestelement);
	return 0;}
