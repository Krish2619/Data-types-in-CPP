Aim:
To create a C++ program that takes user input for various fundamental data types (integer, float, double, character, and string) and displays their values along with the memory size each data type occupies.

Apparatus:
1. GNU g++ compiler or any standard C++ compiler
2. Text editor or IDE (such as Visual Studio Code, Code::Blocks, Dev-C++)

Program Explanation:
The program includes <iostream> for input/output and <cstring> for string manipulation (though <cstring> is not strictly needed here as no C-string functions are used).
using namespace std; avoids typing std:: repeatedly.
The program declares variables of different fundamental data types:
int i for integers,
float f for floating-point numbers,
double d for double-precision floating-point numbers,
char c for a single character,
char s[100] as a character array (C-style string) to store strings up to 99 characters plus null terminator.
The program prompts the user to input values for each data type.
It then outputs each value along with its size in bytes using the sizeof() operator.
The size of s (the character array) will always be 100 bytes, reflecting the allocated size of the array, not the length of the entered string.

Algorithm:
1. Start the program.
2. Include necessary libraries (iostream and cstring).
3. Declare variables of types int, float, double, char, and a char array for string.
4. Prompt the user and read an integer.
5. Prompt the user and read a float.
6. Prompt the user and read a double.
7. Prompt the user and read a character.
8. Prompt the user and read a string (up to 99 characters).
9. Display the value of each variable and the size in bytes of its data type.
10. End the program.

Key Concepts:
Data Types: Understanding different primitive data types — integer, floating-point, double precision, character, and C-style string.
Input/Output: Using cin for input and cout for output.
Memory Size: Using sizeof() operator to find the size (in bytes) of variables/data types.
Character Arrays: Using a fixed-size char array for string input, which contrasts with std::string that can dynamically resize.
String Input: cin >> s; reads input until the first whitespace, so only a single word is captured.

Conclusion:
This program effectively demonstrates the declaration, input, and memory size of various fundamental C++ data types, including integer, float, double, character, and string (C-style). It illustrates how data types occupy different amounts of memory, a key aspect of understanding computer storage and data representation. Users learn to handle different input types and visualize how data is stored in memory, laying a strong foundation for more advanced programming concepts.
