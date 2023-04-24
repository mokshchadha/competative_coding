
#include<bits/stdc++.h>

using namespace std;

int trap(vector<int>& heights) {
    
}

int main(){
 #ifndef ONLINE_JUDGE
        freopen("input_file.txt", "r", stdin);
        freopen("output_file.txt", "w", stdout);
#endif

int n;
cin>>n;

vector<int> heights;

while(n--){
    int temp;
    cin>>temp;
    heights.push_back(temp);
}

trap(heights)

return 0; 

}