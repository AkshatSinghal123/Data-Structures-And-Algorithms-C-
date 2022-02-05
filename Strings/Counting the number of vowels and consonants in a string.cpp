//Counting the number of vowels and consonants in a string
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,vcount=0,ccount=0;
	char A[]="Who are You";
	for(i=0;A[i]!='\0';i++){
		if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'){
			vcount++;
		}
		else if(A[i]>=60&&A[i]<=90 || A[i]>=97 && A[i]<=122){
			ccount++;
		}
	}
	printf("The vowels in the entered string is %d\n",vcount);
	printf("The consonants in the entered string is %d",ccount);
}