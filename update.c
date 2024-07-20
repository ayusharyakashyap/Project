//update function

#include "utils.h"
#include <stdio.h>
#include <string.h>
struct Product {
    int id;
    int quantity;
};
int update(){
    int sno,new_quantity;
    FILE *file;
    char line[100];
    struct Product product;
    file = fopen("item_quantities.txt", "r+"); // opens the quantity file
    printf("Enter the ID of the product:"); 
    scanf("%d", &sno); //Takes in the ID of the item to be changed
    while (fgets(line,100, file)!=NULL) {
        sscanf(line, "%d %d", &product.id,&product.quantity);
        if (product.id==sno) {
            printf("Enter the new quantity for product %d: ", sno);
            scanf("%d", &new_quantity);//Takes in the new quantity of the item
            fseek(file, -strlen(line), SEEK_CUR);
            sprintf(line, "%d %d\n", product.id,new_quantity);
            fputs(line, file);
            printf("Quantity updated for product %d.\n", sno);
            break;
        }
    }
    fclose(file);
    return 0;
}
