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


node * levelOrderBuild(vector<int> nodes){
    node * root = new node(nodes[0]); // root node
    
    queue<node *> q;

    q.push(root);

    int i =1;

    while(!q.empty()){
       
        node * current = q.front();
        q.pop();

        int c1 = nodes[i];
        int c2 = nodes[i+1];

        i = i+2;

        if(c1!=-1){
            current->left = new node(c1);
            q.push(current->left);
        }

        if(c2!= -1){
            current->right = new node(c2);
            q.push(current->right);
        }    
         
    }

    return root;
}


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

 int maxHeightOfTree(node * node){
    if(node == NULL)
        return 0;
    else {
       int leftHeight = maxHeightOfTree(node->left);
       int rightHeight = maxHeightOfTree(node->right);
       return max(leftHeight, rightHeight) +1;
    }
 }

 int diameterOfTree(node * root){
    return maxHeightOfTree(root->left) + maxHeightOfTree(root->right);
 }
 

int main(){
 #ifndef ONLINE_JUDGE
        freopen("input_file.txt", "r", stdin);
        freopen("output_file.txt", "w", stdout);
#endif

    int t;
    cin>>t;
    vector<int> v;
    
    while(t--){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    node * myTree = levelOrderBuild(v);
    cout<<"my tree"<<endl;
    // levelOrderPrint(myTree);
    cout<<diameterOfTree(myTree);
return 0; 

}