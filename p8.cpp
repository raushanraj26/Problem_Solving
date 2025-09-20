// You are reading an article where you are given a string S representing a sentence. Your task is to find and return a string value representing the most frequently occurring letter pair (start letter, end letter) in the sentence. If multiple pairs have the same maximum frequency, return them in the order they appear in the sentence.

// Input Specification:
// input1 : A string value S representing the sentence.

// Output Specification:
// Return a string value representing the most frequently occurring letter pair (start letter, end letter) in the sentence. If multiple pairs have the same maximum frequency, return them in the order they appear in the sentence.

// Example:
// input1 : she is good grid god and ground player plotter

// Output : gd

// Explanation:
// Here, the string S is "she is good grid god and ground player plotter". The pairs that can be formed by (start letter, end letter) from the sentence are:


//that is most frequent pair nklo  



#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    unordered_map<string, int> freq;
    vector<string> order;

    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        // if word ka size 2 se jayada hona chahye tb ,isme se 2 element lenge
        if (word.size() > 1)
        {
            string pair;
            pair += word[0];
            pair += word[word.size() - 1];

            if (freq.count(pair) == 0)
            { // check available or not in map,
                order.push_back(pair);
            }

            freq[pair]++; // yadi ye upr hota then order vector me push nii hota qki hmesa  count 1 aata
        }
    }

    int maxi = 0; // store frequency
    string ans;   // store element which is most frequent
    for (int i = 0; i < order.size(); i++)
    {
        string pair = order[i];
        if (freq[pair] > maxi)
        {
            maxi = freq[pair];
            ans = pair;
        }
    }
    cout << ans;
    return 0;
}