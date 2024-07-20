//count_items function

#include <stdio.h>
#include <string.h>
#include "utils.h"
int count_items(){
       char str[10];
       int count=0;
       FILE*ptr6;
       ptr6=fopen("item_prices.txt","r"); //Opens price file
       while(fgets(str,sizeof(str),ptr6)!=NULL){//Checks whether price file is  empty
        count+=1; //If not empty , increments count by one
       }
       return count;
}
