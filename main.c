#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"


int main()
{
        int choice;
        long id,new_id;
        float price;
        printf("welcome to the book store\n\n");

        ReadFromFile();

        do{
        char *y;
        y=(char*)malloc(sizeof(15));
        char *z;
        z=(char*)malloc(sizeof(15));

        action();

        scanf("%d",&choice);
            switch (choice){

        case 1:

            printf("*************************************\n");
            printf("please,enter the Id of the book:    *\n");
            scanf("%ld",&id);
            printf("please,enter Name of the book:      *\n");
            fflush(stdin);
            scanf("%[^\n]s",y);
            printf("please,enter the Author of the book:   *\n");
            fflush(stdin);
            scanf("%[^\n]s",z);
            printf("please,enter the Price of the book:    *\n");
            scanf("%f",&price);
            Add_Book(id,y,z,price);
            writeToFile(id,y,z,price);
            printf("\nBook Added Successful!!\n");
            printf("*************************************\n\n");
            break;

        case 2 :
            printf("please,enter the Id of the book     *\n");
            scanf("%ld",&id);
            Delete_Book(id);
            printf("\nBook Deleted Successful!!\n");
            printf("*************************************\n");
            break;

        case 3 :
                printf("please,enter the Id of the book to search:     *\n");
                scanf("%ld",&id);
                Find_Book_Id(id);
            break;

        case 4 :
                printf("please,enter a Name of the book to search:      *\n");
                fflush(stdin);
                scanf("%[^\n]s",y);
                Find_Book_Name(y);
            break;

        case 5:
            printf("please,enter the Id of the book to edit     *\n");
            scanf("%ld",&id);
            if(check(id)==0)
            printf("Sorry book not found\n\n");
            else
            {
                printf("please,enter the new Id of the book to edit     *\n");
                scanf("%ld",&new_id);
               // Delete_Book(id);
                printf("please,enter new Name of the book:          *\n");
                fflush(stdin);
                scanf("%[^\n]s",y);
                printf("please,enter the new Author of the book:    *\n");
                fflush(stdin);
                scanf("%[^\n]s",z);
                printf("please,enter the Price of the book:    *\n");
                scanf("%f",&price);
                Edit_Book(id,new_id,y,z,price);
            }
              //Delete_Book(id);

             // writeToFile(new_id,y,z,price);
             // printf("\nBook Edited Successful!!\n");
            printf("*************************************\n");
            break;

        case 6 :
                Display();
                break;
        case 7:
                Delet_Linked_List();
                head=NULL;
                break;
        default :
            if(choice!=0)
            printf("\nplease,enter a valid number from [1] to [7]!!\n\n");
            }
        }while(choice!=0);
        printf("\n** Thanks for using Book Store Application!! **\n");
    return 0;
}
