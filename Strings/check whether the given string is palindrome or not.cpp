//check whether the given string is palindrome or not
#include<stdio.h>
#include<stdlib.h>
int main(){
	char A[]="malayalam";
	char t;
	int i,j;
	for(i=0;A[i]!='\0';i++){
	}
	i=i-1;
	for(j=0;j<i;j++,i--){
		t=A[j];
		A[j]=A[i];
		A[j]=t;
	}printf("The reverse of the string is %s\n",A);
	if(A[i]==A[j]){
		printf("The given string is a palindrome");
	}else{
		printf("The given string is not a palindrome");
	}
}