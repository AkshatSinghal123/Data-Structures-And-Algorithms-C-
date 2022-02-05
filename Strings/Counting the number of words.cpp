//Counting the number of words
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,wcount=1;
	char A[]="Who are You";
	for(i=0;A[i]!='\0';i++){
		if(A[i]==' ' && A[i-1]!=' '){
			wcount++;
	  }
	}
	printf("The total words in the entered string is %d\n",wcount);
}