
#include <bits/stdc++.h>
using namespace std;

//                1           ----level 1
 //             /    \    
//             /      \
//             2        3    --------level 2
//           /  \      /   \
//          3   4    6     7 -------leval 3

// in tree total number of node = 2^levels-1 = 2^3-1 = 7
//MAX NODE AT EACH LEVEL = 2^LEVEL

//NUMBER OF LEVELS IF NUMBER OF NODES ARE N   

//IN TREE  IF NUMBER OF NODES HAVING 2 CHILDREN ARW 7 THEN NUMBER OF NODES HAVING ONE CHILDREN WILL BE 8 ONE MORE 

struct node
{

    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {

        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()

{
    
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(1);
    root->left->left = new node(4);
    root->left->right = new node(8);
    root->right->left = new node(2);
    root->right > right = new node(4);
}




////TYPES OF BINARY TREE

1] COMPLETE BINARY TREE

























=============================
class Tree{

int data';

Tree* left;
Tree*right;

Tree(int val){
    data = val;
    left = NULL;
    right=NULL;
}



};


Tree* root = new Tree(8);
root->left = new Tree(5);
root->right = new Tree(7);
