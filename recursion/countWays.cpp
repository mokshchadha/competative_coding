#include<bits/stdc++.h>

using namespace std;

int countWays(int n){
    
    if(n==0) return 1;
    if(n<0) return 0;
     
   return  countWays(n-3) + countWays(n-2) + countWays(n-1);

}

 

int main(){
 #ifndef ONLINE_JUDGE
        freopen("input_file.txt", "r", stdin);
        freopen("output_file.txt", "w", stdout);
#endif

vector<int> vect;

int pathLength = 4;

cout<<countWays(pathLength);


 


return 0;

}