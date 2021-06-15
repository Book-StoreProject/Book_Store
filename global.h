#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED

typedef long  l;

typedef struct Node{

l Id;
struct Node *next;
char *Name;
char *Author;
float Price;
}Book;
Book *head;
void Add_Book(l id,char *name,char *author,float price);
void Display();
void Delete_Book(l id);
void Find_Book_Id(l id);
void Find_Book_Name(char name[]);
void Edit_Book(l id,l new_id,char *name,char *author,float price);
int check(l id);
void Delet_Linked_List();
void action();
void writeToFile(l id,char *book_name,char *author_name,float price);
void ReadFromFile();
void del(l ID);

#endif
