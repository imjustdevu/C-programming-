
// Variables in c
    
/*

    variables are containers fro storing data values , like numbers and character 

    imagine there is a box in which you can store some cupcakes 

    in c variables must have specific type , which tells the program what kind of the variable can store

    there are different types of variables in c

    numeric types : int , float , double
    character types : char
    logical types : Bool
    
    
    int - stores whole numbers/integers , 
        can be positive or negative ,
        can be 1 byte or 4 bytes depending on the system
        example : int age = 20;

    float - stores decimal numbers , 
        can be positive or negative ,
        can be 4 bytes depending on the system
        example : float price = 10.5;

    char - stores single character , 
        can be positive or negative ,
        can be 1 byte depending on the system
        example : char grade = 'A';

    logic - stores true or false values , 
        can be positive or negative ,
        can be 1 byte depending on the system
        example : bool isTrue = true;
    
--------------------------------------------------------------------------------------------------------

    // Declaring variables 

    to create a variableyou must specify the type and give the variable a name 
    you can also assign a value at the same time 

    type variable_name = value;

    -> where type is the data type of the variable ,
    -> variable_name is the name of the variable and 
    -> value is the value you want to assign to the variable

    = is the assignment operator , which is used to assign a value to a variable

    example 

    int myNum = 5; // declares an integer variable named myNum and assigns it the value of 5


    ----> you can also declare a variable first and then assign a value later 
    example

    #include<stdio.h>
    int main()
    {
        int myNum;
        myNum = 5; // assigns the value of 5 to the variable myNum
        return 0;   
    }
    
    ----> while declaring names of variables you should follow some rules
    like declare variable names with letters , numbers and underscores , but they cannot start with a number
    else it will give an error

    ----> variable names should be meaningful and descriptive , so that it is easy to understand what the variable is used for


    


*/