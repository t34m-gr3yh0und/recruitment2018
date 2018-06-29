#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void curse(int i,int j,int k,int l,int m,int n,int o, int p);
int checkUsername(char username[8000]);
int checkPassword(char password[8000]);
int main(){
	char username[8000];
	char password[8000];
	int i,j,k,l,m,n,o,p;
	i=0;
	j=123;
	k=6345;
	l=5;
	m=442-j;
	n=1337;
	o=p;
	p=23*0;
	printf("Please Enter Username : ");
	scanf("%s",username);
	if (!checkUsername(username)){
		printf("Exiting program ...\n\n");
		exit(1);
	}
	printf("Please Enter Password : ");
	scanf("%s",password);
	if(!checkPassword(password)){
		printf("Exiting Program ... \n\n");
		exit(1);
	}
	curse(i,j,k,l,m,n,o,p);
	return 0;
}


int checkUsername(char username[8000]){
	int length = 0;
	char *temp = username;
	while(*temp!= '\0'){
		length++;
		temp++;
		if(length == 6000){
	               printf("NAHH... Go away...\n");
         	       return 0;
		}
	}
	if (length != 5263){
		printf("NAHH... Go away...\n");
		return 0;
	}
	return 1;
}

int checkPassword(char password[8000]){
	int length = 0;
	char *temp = password;
	while(*temp != '\0'){
		length++;
		temp++;
		if(length == 6000){ 
                       printf("NAHH... Go away...\n");
                       return 0;
                }
	}
	if(length != 1532){
		printf("Good try .. but still ... go away...\n");
		return 0;
	}
	return 1;
}
void curse(int i,int j,int k,int l,int m,int n,int o, int p){
	char flag[44]="R@NC)NCAQABx>sn40Z.b^qC1[Hc./12\\N5060h1J62x";
	printf("Flag : %s",flag);
	char *temp =flag;
	printf("\n\nCurse Starts ... ");
	printf("\nThe Flag is ");
	int counter=0;
	if(i == 456){
		if( k == 6345){
			if(j == 0){
				if(l == 5){
					if(m == k){
						if(n != 1337){
							if(o == 89653){
								counter = 1;
								while(*temp != '\0'){
									*temp = *temp + counter;
									counter= ((counter + 1)%5)+1;
								}
							}
						}
					}
				}
			}
		}
	}
	printf("The Flag is : %s",flag);
}
