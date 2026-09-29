 

 // C programming introduction //

 /* 
    ---------------------------------------|
     First lets look towards history of C  |
    ---------------------------------------|

C was envolved from ALGOL , BCPL and B programming languages. It was developed by Dennis Ritchie at Bell Labs in 1972.
C is a general-purpose programming language that has been widely used for system programming, developing operating systems, and embedded systems.

To assure that the c language remains standard in 1983 , american national startard institute (ANSI) formed a committee to standardize the C language. 
The committee was called X3J11 and it published the ANSI C standard in 1989. Later in 1990, 
the international organization for standardization (ISO) adopted the ANSI C standard as ISO/IEC 9899:1990.

Then during 1990s c++ a languages entirely based on c, underwent a number of inmprovements and changes and became an ANSI aprprived language in 1977
c++ added deveral new features to C to make it not only a true object oriented language but also a more versatile lagnuage 
during same time sunmicrosystems of USA created a new language Java moddelled on C and C++


    ---------------------------------------|
     Importance of C                       |    
    ---------------------------------------|

    C is a general purpose programming language .
    supports structured programming 
    fast execution speed and low level memory access capabilities.
    it is widely used in operating systems , embedded systems , compilers and system software development 



    ---------------------------------------|
    Structure of C Programs                |
    ---------------------------------------|

    #include<stdio.h>
    int main()
    {
        printf("Hello World");
        return 0;
    }



    -> EXPLANATION
    #include<stdio.h> : This is a preprocessor command that tells the compiler to include the standard input-output header file before compiling the program.
    It contains declarations for input and output functions like printf().

     int main() : This is main function where the execution of the program begins. Every C program must have a main function.
     
     comments : Comments are used to explain the code and are ignored by the compiler. They can be single-line comments (//) or multi-line comments (/* *)
     
     statements : Statements are instructions that the program executes. In this case, printf("Hello World"); is a statement that prints "Hello World" to the console.

     return statement : The return statement is used to exit from the main function and return a value to the operating system. In this case, it returns 0, which indicates that the program executed successfully.




 */