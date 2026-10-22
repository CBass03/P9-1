
#include <iostream>
#include <string>
using namespace std;

// Function prototype
int countVowel(string str);

int main() {

    // Test strings
    string text1 = "shy myrrh";
    string text2 = "Cow";
    string text3 = "";

    // Display the vowel count for each string
    cout << "Vowel count: " << countVowel(text1) << endl;
    cout << "Vowel count: " << countVowel(text2) << endl;
    cout << "Vowel count: " << countVowel(text3) << endl;

    return 0;
}

// Counts the vowels in a string
int countVowel(string str) {

    int count = 0;

    // Check each character in the string
    for (int i = 0; i < str.length(); i++) {

        // Check for lowercase and uppercase vowels
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {

            count++;
        }
    }

    return count;
}
