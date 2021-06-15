#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"


void Edit_Book(l id,l new_id,char *name,char *author,float price)
{
    Book *current_Book;
    del(id);
    if(head == NULL)
        printf("Linked list is empty\n\n");
    else
    {
        current_Book =head;
        while (current_Book!=NULL)
        {
            if(current_Book->Id==id)
                break;
            current_Book=current_Book->next;
        }
        if(current_Book==NULL)
            printf("Sorry book not found\n");
        else
        {
            current_Book->Id=new_id;
            current_Book->Name=name;
            current_Book->Author=author;
            current_Book->Price=price;
            writeToFile(new_id,name,author,price);
            printf("\nBook Edited Successful!!\n");
        }
    }
}
int check(l id)
{
    int flag=0;
    Book *current_Book;
    current_Book =head;
    while (current_Book!=NULL)
    {
        if(current_Book->Id==id)
        {
            flag=1;
            break;
        }
        current_Book=current_Book->next;
    }
    if(head==NULL)
        flag=0;
    return flag;
}
