
// https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1






//brute force


// vector<int> countDistinctBrute(vector<int>& arr, int k) {
//     int n = arr.size();
//     vector<int> ans;
//     for (int i = 0; i <= n - k; i++) {
//         unordered_set<int> st;
//         for (int j = i; j < i + k; j++) {
//             st.insert(arr[j]);
//         }
//         ans.push_back(st.size());
//     }
//     return ans;
// }





//window+map

vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        // unordered_set<int>st;  //set lenene oe jb ith erase kr rhe toh saae ith delete ho rha but
                                  //in other element there is may be foe another window
        unordered_map<int,int>mp;
        int i=0;
        int j=0;
        int n=arr.size();
        vector<int>ans;
        while(j<n){
            
            mp[arr[j]]++;
            while(j-i+1>k){
                mp[arr[i]]--;
                if(mp[arr[i]]==0){
                    mp.erase(arr[i]);
                }
                i++;
            }
            if(j-i+1==k){
                ans.push_back(mp.size());
                
                
            }
            j++;
        }
        return ans;
    }



    //frequency map


//     vector<int> countDistinctWindow(vector<int>& arr, int k) {
//     int n = arr.size();
//     unordered_map<int,int> freq;
//     vector<int> ans;

//     // First window
//     for (int i = 0; i < k; i++) {
//         freq[arr[i]]++;
//     }
//     ans.push_back(freq.size());

//     // Slide window
//     for (int i = k; i < n; i++) {
//         // Remove outgoing element
//         freq[arr[i-k]]--;
//         if (freq[arr[i-k]] == 0) {
//             freq.erase(arr[i-k]);
//         }
//         // Add incoming element
//         freq[arr[i]]++;
//         ans.push_back(freq.size());
//     }
//     return ans;
// }


