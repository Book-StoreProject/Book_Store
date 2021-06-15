#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"
l id;
void Find_Book_Id(l id)
{
Book *current_Book;
current_Book=head;
if(head==NULL)
{
    printf("Book is not found (store is empty)!!\n\n");
    return ;
}
while(current_Book->Id!=id){
    current_Book=current_Book->next;

if(current_Book==NULL)
{
    printf("Book is not available\n\n");
    return ;
}
}
printf("\n****************************************\n");
printf("the Id of the book is %ld\n",current_Book->Id);
printf("the Name of the book is %s\n",current_Book->Name);
printf("the Author of the book is %s\n",current_Book->Author);
printf("the Price of the book is %.2f\n",current_Book->Price);
printf("\nBook Finded Successful!!\n");
printf("****************************************\n\n");
}
void Find_Book_Name(char name[])
{
Book *current_Book;
current_Book=head;

while(current_Book!=NULL){
        if(strcmpi(current_Book->Name,name)==0)
        break;
    current_Book=current_Book->next;
}
if(current_Book==NULL)
{
    printf("Book is not available\n\n");
    return ;
}
printf("\n****************************************\n");
printf("the Id of the book is %ld\n",current_Book->Id);
printf("the Name of the book is %s\n",current_Book->Name);
printf("the Author of the book is %s\n",current_Book->Author);
printf("the Price of the book is %.2f\n",current_Book->Price);
printf("\nBook Finded Successful!!\n");
printf("****************************************\n\n");
}
