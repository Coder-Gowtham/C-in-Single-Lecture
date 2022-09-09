#include <stdio.h>

int main()
{
    int a = 7; // 2 to 4 bytes
    long integer1 = 1;
    short integer2 = 4;
    unsigned int integer3 = 7; // it takes only +ve intergers , no -ve integers so we can put a larger number into this as we are not considering the -Ve values
    unsigned short integer4 = 8;

    float b = 8.0;                    // 4 bytes , 6 decimal places
    double myFloat = 7.45;            // 8 bytes, 15 decimal places
    long double myFloat2 = 7.3456789; // 10 bytes, 19 decimal places

    char c = 't'; // 1 byte

    printf("hello! %c\n", c); // %d for int, %f for float, %c for char, %s for string

    printf("The size taken by int is %d\n", sizeof(int));
    printf("The size taken by unsigned int is %d\n", sizeof(unsigned int));
    printf("The size taken by short int is %d\n", sizeof(short int));
    printf("The size taken by float is %d\n", sizeof(float));
    printf("The size taken by double is %d\n", sizeof(double));
    printf("The size taken by long double is %d\n", sizeof(long double));
    printf("The size taken by char is %d\n", sizeof(char));

    /* ************Rules for creating variables******************

    1- cannot start with a numeric value (int 2gautam X)
    2- can start with an underscore (int _gautam )
    3- cannot start with a special character (int ^gautam X)
    4- recommended to use camelCasing notation

    int gautamName; // This is a variable declaration, tell the compiler to specify/reserve the space for the specific variable to be used
    gautamName = 76 // This is variable Initialization, to give a value to the declared value. It can also be done in the one step as well
    char five ='5' // This is variable declaration and initialization

    const int i = 9 //a constant value cannot be changed

    */

    /* ***************Types of OPERATORS in C*******************

   1- Arithmetic Operators
   2- Relational Operator
   3- Logical Operators
   4- Bitwise operators
   5- Assignment Operators
   6- Misc operators
   */

    // 1- Arithmetic Operators

    int a1 = 6, b1 = 7, c1 = 8;
    printf("The sum of a and b is %d\n", a1 + b1);
    printf("The difference of a and b is %d\n", a1 - b1);
    printf("The division of a and b is %d\n", a1 / b1);
    printf("The modulo of a and b is %d\n", a1 % b1);
    printf("The increment of a %d\n", a1++);
    printf("The decrement of a %d\n", a1--);

    // 2- Relational Operator

    int harry = 9, rohan = 45;
    printf("%d\n", harry == rohan);
    printf("%d\n", harry != rohan);
    printf("%d\n", harry >= rohan);
    printf("%d\n", harry <= rohan);

    // 3- Logical Operators
    int h = 0, j = 1;

    printf("The logical operator returned %d\n", h && j);
    printf("The logical operator retu   rned %d\n", h || j);
    printf("The logical operator returned %d\n", !j);
    printf("The logical operator returned %d\n", !h);

    // 4- Bitwise operators

    //  A = 60 B = 13
    //  A = 00111100
    //  B = 00001101
    //  R = 00001100 = 12 -> bitwise calculation, aplying and(&) logic bitwise

    int A = 60, B = 14;

    printf("Bitwise AND operatoroperator retuned %d\n", A & B);  // & is bitwise AND operator
    printf("Bitwise OR operator retuned %d\n", A | B);           // | is bitwise OR operator
    printf("Bitwise ZOR operator retuned %d\n", A ^ B);          // ^ is bitwise ZOR operator
    printf("Bitwise ONES COMPLIMENT operator retuned %d\n", ~B); // & is bitwise ONES COMPLIMENT operator
    printf("Bitwise LEFT SHIFT operator retuned %d\n", A << B);  //<< is bitwise LEFT SHIFT operator
    printf("Bitwise RIGHT SHIFT operator retuned %d\n", A >> B); //<< is bitwise RIGHT SHIFT operator

    // 5- Assignment Operators
    //  =, +=, -=, *=, %= , etc

    int ha = 9;

    ha += 9;
    printf("ha is %d\n", ha);

    // 6- Misc operators & (returns the variable's address), * (returns the value at an address), ?: (conditional statement)

    // ************TAKING INPUT FROM USER*****************

    /* int harryInput;

        printf("\n Please input the vaue of harryInput ");

        scanf("%d", &harryInput); // '&' takes the address of the harryInput and update it's value whatever the user provides as input. In C evrything is done by address
        printf("\n You entered %d as harryInput\n", harryInput);

        printf("\n You entered %f as harryInput, this output is typecasted\n", (float) harryInput); // Typecasting : TO convert one kind of data to another i.e (float) harryInput)

        int num1 , num2;

        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%f", (float)num1/num2);
    */

    // ^^^^^^^^^^^^^^^Decision making in C^^^^^^^^^^^^^^^^^

    // *************** IF ELSE Statement******************
    /* int age;
     printf("\nEnter your age: ");
     scanf("%d", &age);
     if(age<18){
         printf("You cannot drive ");
     } else{

         printf("You can drive ");

     }
      int i4 = age>3?100:200;
      printf("%d\n", i4);
      */

    // *****************SWITCH CASE STATEMENT**************************

    /*
    int num3 = 14;

    switch (num3)
    {
    case 13:
        printf("Okay 13");
        break;

    case 12:
        printf("okay anything else");
    default:
        break;
    }
    */

    // -------------------- Loops in C -------------------------------
    // *****While Loop******
    printf("\n----Loops in C-------\n");
    printf("\n**While Loop**\n");
    int index = 0;
    while (index < 10)
    {
        printf("%d\n", index);
        index++;
    }

    printf("\n**For Loop**\n");

    for (int i = 11; i < 20; i++)
    {
        printf("%d\n", i);
    }

    printf("\n**Do While Loop**\n");

    int y = 1;
    do{
        printf("do while lopp is running\n");
        y++;
    } while(y<10);
    

    return 0;
}
