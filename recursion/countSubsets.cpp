#include<bits/stdc++.h>

using namespace std;

int countSubsets(vector<int> arr, int n , int i , int remainingSum){
    
    if(i==n){
        if(remainingSum == 0) return 1;
        return 0;
    }
    
    int includingCurrent = countSubsets(arr, n, i+1, remainingSum-arr[i]);
    int excludingCurrent = countSubsets(arr, n, i+1, remainingSum);

    return includingCurrent + excludingCurrent;

}

 

int main(){
 #ifndef ONLINE_JUDGE
        freopen("input_file.txt", "r", stdin);
        freopen("output_file.txt", "w", stdout);
#endif

vector<int> vect;

int n; cin>>n;
while(n--){
    int t; cin>>t;
    vect.push_back(t);
}

cout<<countSubsets(vect,5, 0, 6 );

 


return 0; 

}