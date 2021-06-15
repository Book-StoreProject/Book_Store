#include <stdio.h>
#include <stdlib.h>
#include "global.h"

l id;
void Delete_Book(l id)
{
Book* current_Book,*previous_Book;
current_Book=head;
    previous_Book=head;

if(head==NULL){
    printf("Linked list is empty\n");
}
else if(current_Book->Id==id){
    head=current_Book->next;
    free(current_Book);
}
else
{
    while(current_Book->Id!=id)
    {
        if(current_Book->next==NULL)
        {
            return ;
        }
        previous_Book=current_Book;
        current_Book=current_Book->next;

    }
    previous_Book->next=current_Book->next;
    free(current_Book);
}

if(head!=NULL)
    del(id);
}
