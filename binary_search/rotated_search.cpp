#include<bits/stdc++.h>

using namespace std;

int findPivotIdx(vector<int> arr){
    int i=0;
    int n = arr.size();

    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]) return i;
    }

    return i;
}

int rotatedSearch(vector<int> arr, int element){

    int pivot = findPivotIdx(arr);
    cout<<"pivot "<<pivot<<endl;

    // put the array in proper sorting 

    int firstHalf = pivot-1;

    int secondHalf = arr.size() - pivot;

    vector<int> sorted;

    for(int i=pivot; i<arr.size(); i++){
        sorted.push_back(arr[i]);
    }

    for(int i=0; i< pivot; i++){
        sorted.push_back(arr[i]);
    }

   
   //implement binary search in sorted array
    
    int start = 0;
    int end = arr.size();

    while(start<=end){
        int mid = ( start + end )/2;

        if(sorted[mid] == element){
            return (mid + pivot)%arr.size() ;
        }
        else if(sorted[mid]> element){
            end = mid-1;
        }
        else if(sorted[mid]<element){
            start = mid+1;
        }
    }
 

    return 0;
}
 

int rotatedSearchOptimal(vector<int> arr, int element){
    int n = arr.size();
    int start =0;  int end =n-1;
    while(start <= end){

        int mid = (start+end)/2;

        if(arr[mid] == element) return mid;

        //case if the element is on L1
        if(a[start]<=a[mid]){
            if(element> a[start] and element<a[mid]) {
                end = mid -1;
            }
            else {

                start = mid+1;

            }
        }
        //case if the element is on L2
        else {
            if(element > a[mid] and a[end]>element){
                start = mid+1;
            }
            else {
                end = mid -1;
            }
        }
    }
    return -1;
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

int element = 10;


cout<<rotatedSearch(vect, element);


return 0;

}