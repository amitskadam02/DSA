#include <iostream>
#include <algorithm>

using namespace std;

// Function to reverse a portion of a string in-place
void reverse(string &str, int start, int end) {
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

// Function to reverse the order of words in a string
void reverseOrderOfWords(string &str) {
    int n = str.size();
    
    // Step 1: Reverse the entire sentence
    reverse(str, 0, n - 1);

    // Step 2: Reverse each word individually
    int start = 0, end = 0;
    while (end <= n) {  // <= to include the last word
        if (end == n || str[end] == ' ') { // Word boundary detected
            reverse(str, start, end - 1);
            start = end + 1; // Move to the next word
        }
        end++;
    }
}

int main() {
    string str = "Amit is hard working";
    reverseOrderOfWords(str);
    cout << "Reversed: " << str << endl;
    return 0;
}
