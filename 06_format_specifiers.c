
// Format specifiers in C 

/*

format specifiers are used in c programming to specify the type of data that is being input or output 

format specifiers are used together with the printf() function to print variables 

it is important to use the correct format specifier for the data type of the variable being printed, otherwise it may lead to unexpected results or errors

it works as placeholder that tells c what kind of value will be printed 

for different data types, different format specifiers are used

-> for integer data types, the format specifier is %d or %i
-> for floating-point data types, the format specifier is %f or %lf
-> for character data types, the format specifier is %c
-> for string data types, the format specifier is %s

example for using format specifiers in c:

#include <stdio.h>
int main()
{
 
int num = 10;
float pi = 3.14;
char letter = 'A';
string name = "John";

printf("Integer: %d\n", num);
printf("Floating-point: %f\n", pi);
printf("Character: %c\n", letter);
printf("String: %s\n", name);

return 0;
}

here in output will be:
Integer: 10
Floating-point: 3.140000
Character: A
String: John




/////// other way /////////
 
we can directly use the format specifiers in printf() function without using variables

int muNum = 10;
float myFloat = 3.14;
char myChar = 'A';

print(%d\n", 10);
print(%f\n", 3.14);
print(%c\n", 'A');


*/