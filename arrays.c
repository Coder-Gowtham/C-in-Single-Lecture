#include <stdio.h>
#include <string.h>

int main()
{

    //^^^^^^^^^^^^^^^^^POINTERS^^^^^^^^^^^^^^^^^
    // int a = 98;
    // printf("%d\n", a);
    // int* ptr = NULL; // 1) pointer : it is a variable which stores the address of another variable. We can use it to change the value of the addressed variable / Call by address (The other method is call by value, ie directly calling the value) 2) It is a good practice to always declare a pointer as null
    // ptr = &a;       // 3) to go to the next address where the pointer is pointing then do ptr+1, this is done in arrays
    // *ptr = 123;
    // printf("%d\n", a);

    //****************INTEGER ARRAY****************
    // int arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the values for index %d : ", i);
    //     scanf("%d", &arr[i]);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The values for index %d : ", i);
    //     printf("%d\n", arr[i]);
    // }

    //************ CHARACTER ARRAY **************
    // char arr1[10];

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the values for index %d : \n", i);

    //     scanf("%s", &arr1[i]);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The values for index %d : ", i);
    //     printf("%c\n", arr1[i]);
    // }

    // ####################### STRINGS ############################

    // Function of strings : srcpy, strcat, strlen
    // char name[3] = {'m', 'y', '\0'}; // in string array the last character is a null character, it tells us that it a string and it has ended here
    // printf("%s\n", name);
 
    // char str1[65], str2[98], str3[32];
    // strcpy(str1, name); // cpoy the value os name into str1
    // printf("%s\n", str1);

    // strcpy(str2, "Gowtham");
    // printf("%s\n", str2);

    // strcat(str1, str2); // concatenates string2 to string1 and ends the resulting string with the null character.
    // printf("%s\n", str1);

    // strcpy(str1, "Harry");
    // strcpy(str2, "Harry");
    // // strcat(str1, str2);
    // printf("%d\n", strcmp(str1, str2));

    return 0;
}