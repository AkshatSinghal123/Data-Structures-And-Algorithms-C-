//Comparing two strings
#include<stdio.h>
#include<stdlib.h>
int main(){
	char A[]="painter";
	char B[]="painting";
	int i,j;
	for(i=0,j=0;A[i]!='\0'&&B[j]!='\0';i++,j++){
		if(A[i]!=B[j]){
			break;
		}
	}
	if(A[i]==B[j]){
		printf("The two strings are equal\n");
	}
	else if(A[i]<B[j]){
		printf("First string is smaller than second string\n");
	}
	else{
		printf("First string is greater than second string\n");
	}
	return 0;
}
