#include<stdio.h>
#include<stdlib.h>

int main(){
	char flag[]="R@NC)NCAQABx>sn40Z.b^qC1[Hc./12\\N5060h1J62x";
        printf("Flag : %s\n",flag);
	int counter=1;
	char *temp=flag;
	while(*temp != '\0'){
		*temp = *temp +  counter;
		counter = ((counter+1)%5)+1;
		temp++;
	}
	printf("New Flag = %s\n",flag);
	return 0;
}
