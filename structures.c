#include <stdio.h>
#include <string.h>

struct Books
{                  // in OOP we can put different functions, attributes inside a class
    char name[50]; //  but in C we can only put variables in STRUCTURES
    char author[50];
    int price;

} book;

void printStruct(struct Books bk)
{
    printf("Book name is %s\n", bk.name);
    printf("Author name is %s\n", bk.author);
    printf("Book is %d\n", bk.price);
}
int main()
{
    // Structures
    struct Books bk1, bk2;
    strcpy(bk1.name, "C Programming");
    strcpy(bk1.author, "Dennins Richie");
    bk1.price = 78;

    printStruct(bk1);
}
