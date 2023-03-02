#include<bits/stdc++.h>

using namespace std;

int findIdx(vector<int> arr, int key) {
    int n = arr.size();
    int current = (n /2);

    while(current!=0){
        if(arr[current] == key) return current;
        if(current +1 <= n-1 && arr[current + 1] == key) return current+1;

        if(arr[current]>key) current = current/2;
        else {
            current = current *2;
        }
    }

   return 0;
}

int frequencyCount(vector<int> arr, int key){

    int idx = findIdx(arr, key);
    int n = arr.size();

    int frequency=0;
    int frontCursor = idx;
    int backCursor = idx-1; // so that we dont count the found index twice 
    
    while(frontCursor < n && arr[frontCursor] == key) {
        frontCursor++;
        frequency++;
    }

    while(backCursor>-1 && arr[backCursor]==key){
        backCursor--;
        frequency++;
    }
    
    return frequency;
}



int main(){
 #ifndef ONLINE_JUDGE
        freopen("input_file.txt", "r", stdin);
        freopen("output_file.txt", "w", stdout);
#endif

vector<int> vect;
  
vect.push_back(0);
vect.push_back(1);
vect.push_back(1);
vect.push_back(1);
vect.push_back(1);
vect.push_back(1);
vect.push_back(1);
vect.push_back(2);
vect.push_back(2);
vect.push_back(2);
vect.push_back(3);
vect.push_back(4);
vect.push_back(4);

int key = 1;


int frequency = frequencyCount(vect , key);
cout<<"frequency count of "<<key<<" is "<<frequency;

return 0;

}