#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"

void Delet_Linked_List()
{
Book *current_Book,*next_Book;
current_Book=head;
while (current_Book !=NULL)
{
    next_Book=current_Book->next;
    free(current_Book);
    current_Book=next_Book;
}
FILE *fp1=fopen("Book Store.txt","w");
fp1=freopen(NULL,"w",fp1);
fclose(fp1);
if(current_Book==NULL)
{
    printf("Linked list is empty\n\n");
    return ;
}
}
