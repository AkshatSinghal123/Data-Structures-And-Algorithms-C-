//Reversal of a string
#include<stdio.h>
#include<stdlib.h>
int main(){
	char A[]="python";
	char t;
	int i,j;
	for(j=0;A[j]!='\0';j++){
	}
		j=j-1;
		for(i=0;i<j;j--,i++){
		   t=A[i];
		   A[i]=A[j];
		   A[j]=t;
		}
	printf("reverse of the string is %s",A);
	return 0;
}