//
////Task 5
//////#include <iostream>
//////#include <string> 
//////
//////using namespace std;
//////
//////void passfunction(const char x[]) {
//////    for (int i = 0; x[i] != '\0'; ++i) {
//////        cout << x[i];
//////    }
//////    cout << endl;
//////}
//////
//////int main() {
//////    const int SIZE = 10;
//////    char arr[SIZE];
//////    cout << "Enter a string (up to " << SIZE - 1 << " characters): ";
//////    cin.getline(arr, SIZE);
//////
//////    passfunction(arr);
//////
//////    return 0;
//////}