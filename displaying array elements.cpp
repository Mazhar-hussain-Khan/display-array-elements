/* Mazhar Hussain    Reg no:20MDELE098
eamil:20MDELE098@uetmardan.edu.pk */
// Write a program that declares an array of 5 integers and displays the elements of the array using a loop//
#include<stdio.h>
void display(int array[]){
	for(int i=0;i<5;i++){
		printf("the element [%d]: %d\n",i,array[i]);
	}
}
int main(){
	int array[5]={4,7,9,3,6};
	display(array);
	return 0;
}
