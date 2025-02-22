#include <iostream>
using namespace std;

int main() {
    // Fun introduction
    cout << "Welcome to the Fun Pointer!\n\n";

    // Pointer Basics with User Input
    int a;
    int *p; // Pointer declaration

    cout << "Enter a magical number:";
    cin >> a; // User enters a number
    p = &a; // Assiging the address of a to pointer p

    cout << "Magic in action. Pointer Basics:\n";
    cout << "The address of a(stored in pointer p) is:" << static_cast<void *>(p) << endl;
    cout << "The value of a using pointer p: " << *p << endl;

    // Modifying 'a' using pointer
    *p += 10; // Add 10 for fun

    cout << "After casting a spell, the new value of a is: " << a << endl;

    //Pointer Arithmetic with Array
    int arr[5] = {2, 4, 6, 8, 10}; //Ensure array is declared before use
    int* ptr = arr; // Pointer to first element

    cout << "\n\nThe Legendary Array:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Address of arr[" << i << "]:" << static_cast<void*>(ptr + i) << " ";
        cout << "value: " << *(ptr + i) << endl;
    }

    cout << "\nPointers are Powerful!";
    return 0;
}
