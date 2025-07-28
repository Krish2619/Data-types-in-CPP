
//Krishna Chhabaria
//24070123149
//B3
#include <iostream> // Include the iostream library for input and output operations
#include <cstring> // Include the cstring library for string manipulation functions
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard functions
int main() {
    // Integer data type
    int i;
    float f;
    double d;
    char c;
    char s[100];
    //input for different data types
    cout << "Enter an integer: ";
    cin >> i;
    cout << "Enter a float: ";
    cin >> f;
    cout << "Enter a double: ";
    cin >> d;
    cout << "Enter a character: ";
    cin >> c;
    cout << "Enter a string: ";
    cin >> s;
   

  // Displaying the values and sizes of different data types
    cout << "Integer: " << i << ", Size: " << sizeof(i) << " bytes\n";
    cout << "Float: " << f << ", Size: " << sizeof(f) << " bytes\n";
    cout << "Double: " << d << ", Size: " << sizeof(d) << " bytes\n";
    cout << "Character: " << c << ", Size: " << sizeof(c) << " bytes\n";
    cout << "String: " << s << ", Size: " << sizeof(s) << " bytes\n";

    return 0;
}



/*output:
Enter an integer: 12
Enter a float: 1.1
Enter a double: 24.5555
Enter a character: h
Enter a string: krishna
Integer: 12, Size: 4 bytes
Float: 1.1, Size: 4 bytes
Double: 24.5555, Size: 8 bytes
Character: h, Size: 1 bytes
String: krishna, Size: 100 bytes
*/
