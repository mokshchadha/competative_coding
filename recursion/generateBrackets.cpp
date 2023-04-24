#include<bits/stdc++.h>

using namespace std;

int generateBracketPairs(string s, int n , int openBracketCount, int closeBracketCount, int currentIdx){
    if(currentIdx == 2*n){
        cout<<s<<endl;
        return 0;
    }
    if(openBracketCount<n){
       //putting a open bracket
       generateBracketPairs(s+'(', n, openBracketCount+1, closeBracketCount, currentIdx+1);
    }
    if(closeBracketCount < openBracketCount){
        //putting a close bracket
         generateBracketPairs(s+')', n, openBracketCount, closeBracketCount+1, currentIdx+1);
    }
}
 

int main(){
 #ifndef ONLINE_JUDGE
        freopen("input_file.txt", "r", stdin);
        freopen("output_file.txt", "w", stdout);
#endif

vector<int> vect;

int n; cin>>n;
string output;
cout<<generateBracketPairs(output, n, 0,0,0);

return 0; 

}