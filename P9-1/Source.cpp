
#include <iostream>
#include <string>
using namespace std;

// Function prototype
int countCharacter(string str);

int main() {

    // Test strings
    string text1 = "Hello, World!";
    string text2 = "a b c";
    string text3 = "";

    // Display the number of characters in each string
    cout << "Character count: " << countCharacter(text1) << endl;
    cout << "Character count: " << countCharacter(text2) << endl;
    cout << "Character count: " << countCharacter(text3) << endl;

    return 0;
}

// Counts the number of characters in a string
int countCharacter(string str) {

    int count = 0;

    // Go through each character and increase the count
    for (int i = 0; i < str.length(); i++) {
        count++;
    }

    return count;
}
