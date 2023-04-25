#include<bits/stdc++.h>

using namespace std;


class tree {
    public :
     int data;
     node * left;
     node * right;

     node(int d){
        data = d;
        left = NULL;
        right = NULL;
     }
}

buildTree(){
    int d;
    cin>>d;
    if(d<=-1){
        return NULL;
    }

    node * n = new node(d);
    n->left = buildTree();
    n->right = buildTree();

    return n;
}
 
 

int main(){
 #ifndef ONLINE_JUDGE
        freopen("input_file.txt", "r", stdin);
        freopen("output_file.txt", "w", stdout);
#endif

 
return 0; 

}