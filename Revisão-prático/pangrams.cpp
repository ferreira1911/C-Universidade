#include <iostream>

using namespace std;

bool pangram(const char s[], char m[]) {
    // Initialize an array to keep track of occurrence of each letter
    bool letters[26] = {false};

    // Iterate through the string
    for (int i = 0; s[i] != '\0'; ++i) {
        // Ignore spaces
        if (s[i] == ' ') 
            continue;

        // Convert character to lowercase
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            c += 'a' - 'A';
        }

        // If character is a letter, mark its occurrence
        if (c >= 'a' && c <= 'z') {
            letters[c - 'a'] = true;
        }
    }

    // Check if all letters occurred at least once
    bool isPangram = true;
    int missingCount = 0;
    for (int i = 0; i < 26; ++i) {
        if (!letters[i]) {
            // If letter is missing, add it to the missing string
            m[missingCount++] = 'a' + i;
            isPangram = false;
        }
    }

    // Null terminate the missing string
    m[missingCount] = '\0';

    return isPangram;
}

int main() {
    { char s[] = " Stu yZ abC GhI MnO pQr   ";
  char m[27] = { -1 };
  bool r = pangram(s, m);
  cout << '\"' << s << "\" " 
       << boolalpha << r << " \"" << m << "\"\n"; }
    return 0;
}
