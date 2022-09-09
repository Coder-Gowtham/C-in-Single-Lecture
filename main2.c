#include <stdio.h>

//^^^^^^^^ FUNCTIONS in C ^^^^^^^^^
// ____SYNTAX____
// data_type func_name (parameter_type parameter_name){
//     return value_of_type_data_type;
// }

void newPrint(char *char1)
{
    printf("The value is %s\n", char1);
}

int sum(int a, int b){
    return a+b;
}

float avg(float a, float b){
    return (a+b)/2;
}

int main()
{
    newPrint("Hello World");

    printf("%d\n", sum(50, 60));
    printf("%f\n", avg(50, 61));
    return 0;
}
