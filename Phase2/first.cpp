#include <iostream>
#include <string>
using namespace std;

string* tokenizer(string X, char Y, int &count) {
    // Step 1: Count how many tokens we will have
    count = 1;
    for (int i = 0; i < X.length(); i++) {
        if (X[i] == Y)
            count++;
    }

    // Step 2: Create a dynamic array to store tokens
    string* arr = new string[count];
    string temp = "";
    int index = 0;

    // Step 3: Go through the string manually
    for (int i = 0; i < X.length(); i++) {
        char c = X[i];
        if (c == Y) {
            arr[index++] = temp;  // save current token
            temp = "";            // reset for next one
        } else {
            temp += c;            // keep adding characters
        }
    }

    // Step 4: Store the last token (after the loop ends)
    arr[index] = temp;

    // Step 5: Return the array
    return arr;
}

int main() {
    string X;
    char Y;

    cout << "Enter string: ";
    getline(cin, X);

    cout << "Enter delimiter: ";
    cin >> Y;

    int count = 0;
    string* tokens = tokenizer(X, Y, count);

    cout << "\nTokens:\n";
    for (int i = 0; i < count; i++) {
        cout << i + 1 << ": " << tokens[i] << endl;
    }

    delete[] tokens; // free allocated memory
    return 0;
}