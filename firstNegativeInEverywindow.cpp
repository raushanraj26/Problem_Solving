// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1?page=1&category=Queue&difficulty=Easy,Medium&status=unsolved&sortBy=submissions





//brute force

// For each window of size k, scan from left to right.
// Find the first negative number.
// If none found, output 0.



// vector<int> firstNegativeBrute(vector<int>& arr, int k) {
//     int n = arr.size();
//     vector<int> ans;

//     for (int i = 0; i <= n - k; i++) {
//         int firstNeg = 0; // assume no negative
//         for (int j = i; j < i + k; j++) {
//             if (arr[j] < 0) {
//                 firstNeg = arr[j];
//                 break;
//             }
//         }
//         ans.push_back(firstNeg);
//     }
//     return ans;
// }






//sliding window+Queue

// Use a queue to keep track of negative numbers’ indices in the current window.
// As the window slides:
// Add the new element if it’s negative.
// Remove the front if it goes out of the window.
// The front of the queue = first negative in the window.






    // vector<int> firstNegInt(vector<int>& arr, int k) {
    //     // write code here
    //     int n=arr.size();
    //     queue<int>q;  //store negative number
    //     vector<int>ans;
    //     int j;
    //     for( j=0;j<k;j++){
    //         if(arr[j]<0){
    //             q.push(arr[j]);
                
    //         }
    //     }
    //     // Now j = k.so for lopp break;
    //     // before that i have to processedd first window
    //     // Store result for first window
    // if (!q.empty()) ans.push_back(q.front());
    // else ans.push_back(0);
        
    //     int i=0;
    //     while(j<n){
            
    //         //if jth element negative push into queue
    //         if(arr[j]<0){
    //             q.push(arr[j]);
                
    //         }
    //         while(j-i+1>k){
    //             if(!q.empty() && q.front()==arr[i]){
    //                 q.pop();
    //             }
    //             i++;
    //         }
            
            
    //         if(j-i+1==k){
    //             if(!q.empty()) {
    //                 ans.push_back(q.front());
    //             }else{
    //                 ans.push_back(0);
    //             };
    //         }
               
    //         j++;
            
    //     }
    //     return ans;
    // }
// };