#include <stdio.h>   // "include" and "return" are C keywords

/*
    Explanation:
    - Keywords are reserved words in C that have special meaning.
      Example: int, float, if, else, return, for, while, etc.
    - Identifiers are the names we give to variables, functions, arrays,
      etc., defined by the programmer. Example: age, sum, main, myVar, etc.
*/

int main() {   // "int" and "main" → int is a keyword, main is an identifier
    int age = 23;            // "int" is a keyword, "age" is an identifier
    float height = 5.9;      // "float" is a keyword, "height" is an identifier
    char grade = 'A';        // "char" is a keyword, "grade" is an identifier

    // Print values
    printf("Age: %d\n", age);       // printf is an identifier (function name)
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    return 0;   // "return" is a keyword, 0 is a constant literal
}
