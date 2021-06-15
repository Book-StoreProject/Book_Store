#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"


void writeToFile(l id,char *book_name,char *author_name,float price)
{
    FILE *fptr=fopen("Book Store.txt","a+");
if(fptr==NULL)
    printf("file not found");
else{
    fprintf(fptr,"%ld,%s,%s,%.2f\n",id,book_name,author_name,price);
}
}
void ReadFromFile()
{
    long id=0;
    float price=0;
    char name[100];
    char author_name[100];
    char*ptr;
    char str[1024];
    FILE *fp;
    if((fp=fopen("Book Store.txt","r"))==NULL)
        printf("file not found");
         while(fgets(str, sizeof str, fp) !=NULL){
                if ((strlen(str)>0) && (str[strlen (str) - 1] == '\n'))
            str[strlen (str) - 1] = '\0';
         ptr=strtok(str,",");
         id=atoi(ptr);
         ptr=strtok(NULL,",");
         strcpy(name,ptr);
         ptr=strtok(NULL,",");
         strcpy(author_name,ptr);
         ptr=strtok(NULL,",");
         price=atoi(ptr);
         Add_Book(id,name,author_name,price);
      }
      printf("\n");
      fclose(fp);
}
void del(l ID){
FILE *fp1=fopen("Book Store.txt","r");
FILE *fp2=fopen("New Book Store.txt","a");
    long id;
    float price;
    char book_name[100];
    char author_name[100];
    char*ptr;
    char str[1024];
if(fp1==NULL)
    printf("file not exist");
     while(fgets(str, sizeof str, fp1) !=NULL){
                if ((strlen(str)>0) && (str[strlen (str) - 1] == '\n'))
            str[strlen (str) - 1] = '\0';
         ptr=strtok(str,",");
         id=atoi(ptr);
         ptr=strtok(NULL,",");
         strcpy(book_name,ptr);
         ptr=strtok(NULL,",");
         strcpy(author_name,ptr);
         ptr=strtok(NULL,",");
         price=atoi(ptr);
    if(id!=ID){
      fprintf(fp2,"%ld,%s,%s,%.2f\n",id,book_name,author_name,price);
    }
    }
fclose(fp1);
fclose(fp2);
remove("Book Store.txt");
rename("New Book Store.txt","Book Store.txt");
}


