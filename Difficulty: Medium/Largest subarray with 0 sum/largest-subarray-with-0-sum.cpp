//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
       unordered_map<int,int>mpp;
       mpp[0]=1;
       int prefix=0;
       int maxlen=0;
       for(int i=0;i<n;i++)
       {
           prefix+=arr[i];
           if(prefix==0)
           {
               maxlen=i+1;
           }
           
           if(mpp.find(prefix)!=mpp.end())
           {
               maxlen=max(maxlen,i-mpp[prefix]);
           }
           else
           mpp[prefix]=i;
       }
       return maxlen;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends