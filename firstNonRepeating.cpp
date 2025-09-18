// In the approaches I showed:
// First traversal → count frequency of each character.
// Second traversal → check which characters appear only once.


// #include <iostream>
// #include <unordered_map>
// #include <string>
// using namespace std;

// int main() {
//     string s = "programming";
//     unordered_map<char, int> freq;

//     // Count frequency of each character
//     for (char c : s) {
//         freq[c]++;
//     }

//     cout << "Non-repeating characters: ";
//     for (char c : s) {
//         if (freq[c] == 1) {
//             cout << c << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }




//BY QUEUE


// try this queuetsion
// https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1?page=1&category=Queue&difficulty=Easy,Medium&status=unsolved&sortBy=submissions





#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    string s = "programming";
    unordered_map<char, int> freq;
    queue<char> q;

    for (char c : s) {
        freq[c]++;

        q.push(c);

        // Remove characters from queue until front is non-repeating
        //or jb tk front ka frequency 1 se jyada hai,means front repeat kr rha hai pop krte jaao,means 

        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }
    }

    if (!q.empty())
        cout << "First non-repeating character: " << q.front() << endl;
    else
        cout << "No non-repeating character found." << endl;

    return 0;
}




