
#include <iostream>
#include <string>
using namespace std;

// Function prototype
int countVowel(string str);

int main() {

    string input;

    // Continue asking for strings until the user enters Q
    while (true) {

        cout << "Enter a string or Q to quit: ";
        getline(cin, input);

        // End the program if the user enters Q
        if (input == "Q") {
            break;
        }

        // Display the number of vowels
        cout << "Vowel count: " << countVowel(input) << endl;
    }

    return 0;
}

// Counts the number of vowels in a string
int countVowel(string str) {

    int count = 0;

    // Check every character in the string
    for (int i = 0; i < str.length(); i++) {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {

            count++;
        }
    }

    return count;
}
