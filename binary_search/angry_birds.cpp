#include<bits/stdc++.h>

using namespace std;

bool isPossibleToAllot(vector<int> arr, int birds, int distance){
   int placedBirds = 1;
   int lastPlacedBird = arr[0];

   for(int i=1; i<arr.size(); i++){
    int currentPosition = arr[i];
    if(currentPosition- lastPlacedBird >=distance){
        placedBirds = placedBirds+1;
        lastPlacedBird = currentPosition;
    }
    if(placedBirds == birds) return true;
   }
   return false;
}

int angryBirds(vector<int> arr, int birds){
    int start=0;
    int end = arr[arr.size()-1] - arr[0];

    int max=-1;

    while(start<=end){
        int mid = (start+end)/2;

        bool isPossible = isPossibleToAllot(arr, birds, mid);

        if(isPossible){
            start = mid+1;
            max = mid>max? mid : mid;
        }
        else {
            end = mid-1;
        }

    }
    cout<<"max dist possible "<<max<<endl;
    return max;

}

 

int main(){
 #ifndef ONLINE_JUDGE
        freopen("input_file.txt", "r", stdin);
        freopen("output_file.txt", "w", stdout);
#endif

vector<int> vect;
  
vect.push_back(1);
vect.push_back(2);
vect.push_back(4);
vect.push_back(8);
vect.push_back(9);

int birds =3;

angryBirds(vect, birds);


 


return 0;

}