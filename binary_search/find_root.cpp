#include<bits/stdc++.h>

using namespace std;

int integerPartOfRoot(int num){
    int start=0;
    int end =num;

    int ans=-1;

    while(start<=end){
        int mid = (start + end)/2;
        int midSquare = mid*mid;
        if(midSquare>num) {
            end = mid-1;
        }
        else {
            ans = mid;
            start = mid+1;
        }
    }

    return ans;

}

int findRoot(int num){
    //find the integer 
    int integerPart = integerPartOfRoot(num);
    cout<<"root "<<integerPart<<".";
    //find the precision
}


int main(){
 #ifndef ONLINE_JUDGE
        freopen("input_file.txt", "r", stdin);
        freopen("output_file.txt", "w", stdout);
#endif

vector<int> vect;
  
vect.push_back(7);
vect.push_back(9);
vect.push_back(10);
vect.push_back(1);
vect.push_back(2);
vect.push_back(3);
vect.push_back(4);
vect.push_back(5);
vect.push_back(6);

int num=10;


findRoot(num);


return 0;

}