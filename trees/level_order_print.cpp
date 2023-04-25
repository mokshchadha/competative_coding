#include<bits/stdc++.h>

using namespace std;


class node {
    public :
     int data;
     node * left;
     node * right;

     node(int d){
        data = d;
        left = NULL;
        right = NULL;
     }
};

node * buildTree(){
    int d;
    cin>>d;
    if(d<=-1){
        return NULL;
    }

    node * n = new node(d);
    n->left = buildTree();
    n->right = buildTree();

    return n;
};


 void levelOrderPrint(node * n){
    //level order traversal of the tree;
    queue<node *> q;

    q.push(n);
    q.push(NULL);

    while(!q.empty()){
       node* current = q.front();

       if(current == NULL) {
         cout<<"\n";
         q.pop();
        if(!q.empty()) q.push(NULL);
       }
       else {
        cout<<current->data<<" ";
        if(current->left!=NULL) q.push(current->left);
        if(current->right!=NULL) q.push(current->right);
        q.pop();
       }

     
    }

 }
 

int main(){
 #ifndef ONLINE_JUDGE
        freopen("input_file.txt", "r", stdin);
        freopen("output_file.txt", "w", stdout);
#endif

    node * n = buildTree();
    levelOrderPrint(n);
 
return 0; 

}