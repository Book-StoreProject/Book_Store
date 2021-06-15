#include <stdio.h>
#include <stdlib.h>
#include "global.h"

void Display()
{
int i=1;
Book* current_Book;
if(head==NULL){
    printf("Linked list is empty\n\n");
}
else
{
    current_Book=head;
    while(current_Book!=NULL){ ;
        printf("\n****************************************\n");
        printf("the Id of the book [%d] is :%ld\n",i,current_Book->Id);
        printf("the Name of the book [%d] is :%s\n",i,current_Book->Name);
        printf("the Author of the book [%d] is :%s\n",i,current_Book->Author);
        printf("the Price of the book [%d] is :%.2f\n",i,current_Book->Price);
        printf("****************************************\n\n");
        current_Book=current_Book->next;
        i++;
    }
}
}
void action()
{
printf("****************************************\n");
printf("please,enter a number to take an action*\n");
printf("****************************************\n");
printf("1| Add a new book                      *\n");
printf("****************************************\n");
printf("2| Remove a book                       *\n");
printf("****************************************\n");
printf("3| Find a book by Id                   *\n");
printf("****************************************\n");
printf("4| Find a book by Name                 *\n");
printf("****************************************\n");
printf("5| Edit a book                         *\n");
printf("****************************************\n");
printf("6| Display all books                   *\n");
printf("****************************************\n");
printf("7| Clear Linked List                   *\n");
printf("****************************************\n");
printf("0| End the program                     *\n");
printf("****************************************\n");
}
