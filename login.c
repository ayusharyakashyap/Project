//login function

#include "utils.h"
#include <stdio.h>
#include <string.h>
int login(){
	FILE *fptr;
	fptr = fopen("credentials.txt", "r");
   int tries_left;
	char username1[100];//actual username
	char password1[100];//actual password
	fscanf(fptr, "%s", username1);
	fscanf(fptr, "%s", password1);

	char username2[100];//actual username
	char password2[100];//actual password
	fscanf(fptr, "%s", username2);
	fscanf(fptr, "%s", password2);

	char username3[100];//actual username
	char password3[100];//actual password
	fscanf(fptr, "%s", username3);
	fscanf(fptr, "%s", password3);



	fclose(fptr);

	char e_username[100];//entered username
	char e_password[100];//entered passworD
	
	for(int i=0; i<3; i++){//3tries
      printf("ENTER USERNAME: ");
		scanf("%s", e_username);
      printf("ENTER PASSWORD: ");
		scanf("%s", e_password);
	
		if((strcmp(e_username, username1)==0 || strcmp(e_username, username2)==0 || strcmp(e_username, username3)==0)   && (strcmp(e_password, password1)==0 || strcmp(e_password, password2)==0 || strcmp(e_password, password3)==0)){
		printf("Succesfully logged in! Welcome %s!!\n", e_username);          // Checking if credentials are correct
		break;
		}
		else{
			tries_left=3-i-1;
         if(tries_left!=0){       //Checks the number of tries left
            printf("INCORRECT CREDENTIALS PLEASE TRY AGAIN\n"); //Prints this if tries left is not zero
            printf("TRIES LEFT: %d\n",tries_left);
         }
      }
	}
   if(tries_left==0){ 
	 return 0;//If tries left is zero , it exits
   }else{
      return 1;
   } 
}
