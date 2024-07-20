//delete_items function

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "utils.h"
int delete_items(char *id) {
    FILE *fp1=fopen("item_names.txt", "r"); //Opens name file read mode
    FILE *fp2=fopen("item_prices.txt", "r");//Opens price file read mode
    FILE *fp3=fopen("item_dates.txt", "r");//Opens date file read mode
    FILE *fp4=fopen("item_quantities.txt", "r");//Opens quantity file in read mode
    FILE *op1=fopen("temp1.txt", "w"); //Opens a temp file for name in write mode
    FILE *op2=fopen("temp2.txt", "w");//Opens a temp file for price in write mode
    FILE *op3=fopen("temp3.txt", "w");//Opens a temp file for date in write mode
    FILE *op4=fopen("temp4.txt", "w");//Opens a temp file for quantity in write mode
    char line[1000];
    int found=0;
    while(fgets(line,sizeof(line),fp1)!=NULL) {//Condition whetiher size of the line in name text is null
        if(strstr(line, id)!=NULL) { 
            found=1;        
            continue;           //If the ID is found then it skips that particular record and prints the rest in the temp file
        }                  	
        fputs(line,op1);         
    }

    while(fgets(line,sizeof(line),fp2)!=NULL) {//Condition whether size of the line in price text is null
        if(strstr(line,id)!=NULL) {
            found=1;
            continue;
        }
        fputs(line,op2);
    }

    while(fgets(line,sizeof(line),fp3)!=NULL) { //Condition whether size of the line in date text is null
        if(strstr(line,id)!=NULL) {
            found=1;
            continue;
        }
        fputs(line,op3);
    }

    while(fgets(line,sizeof(line),fp4)!= NULL) { //Condition whether size of the line in quantity text is null
        if(strstr(line, id)!=NULL) {
            found=1;
            continue;
        }
        fputs(line,op4);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
    fclose(op1);
    fclose(op2);
    fclose(op3);
    fclose(op4);
    remove("item_names.txt");
    remove("item_prices.txt");
    remove("item_dates.txt");
    remove("item_quantities.txt");
    rename("temp1.txt", "item_names.txt");
    rename("temp2.txt", "item_prices.txt");
    rename("temp3.txt", "item_dates.txt");
    rename("temp4.txt", "item_quantities.txt");
    if (!found) {
        printf("Record with ID %s not found.\n", id);
    } else {
        printf("Record with ID %s deleted.\n", id);
    }
}

