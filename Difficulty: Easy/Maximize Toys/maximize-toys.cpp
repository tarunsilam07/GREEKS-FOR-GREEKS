//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int toyCount(int n, int k, vector<int> arr)
    {
        int sum=0;
        int cnt=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum<=k)
            cnt++;
            else break;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends