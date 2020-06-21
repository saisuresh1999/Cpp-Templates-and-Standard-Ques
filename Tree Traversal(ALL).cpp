#define REP(i, n) for (i = 0; i < n; i++)
#define pb(a) push_back(a)
#define vi vector<long>
#define ll long long
#include <bits/stdc++.h>
using namespace std;


/*Input
1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
Note : Level order traversal of input tree, where −1 represents null nodes.

Output
1 2 3 4 5 6 7 // LevelOrder
4 2 5 1 6 3 7 // InOrder
1 2 4 5 3 6 7 // PreOrder
4 5 2 6 7 3 1 // PostOrder

*/

struct node
{
    ll value;
    node *left;
    node *right;
};

node *createNode(ll value)
{
    node *t = new node();
    t->value = value;
    t->right = t->left = NULL;
    return t;
}

void deleteNode(node *t)
{
    delete t;
}


node *replaceNegativeOne(node *root)
{
    if (root == NULL || (root->value == -1 && root->left == NULL && root->right == NULL))
        return NULL;
    root->left = replaceNegativeOne(root->left);
    root->right = replaceNegativeOne(root->right);
    return root;
}

node *createTreeByLevelTree()
{
    ll n, m;
    queue<node *> q;

    node *root, *t;

    root = NULL;

    while (cin >> n)
    {
        if (q.empty())
        {
            root = createNode(n);
            q.push(root);
            continue;
        }
        cin >> m;

        t = q.front();
        q.pop();

        t->left = createNode(n);
        t->right = createNode(m);

        if (t->left->value != -1)
        {
            q.push(t->left);
        }

        if (t->right->value != -1)
        {
            q.push(t->right);
        }
    }

    return root;
}

void deleteTree(node *node)
{
    if (node == NULL)
        return;

    deleteTree(node->left);
    deleteTree(node->right);
    delete node;
}

// Complete the levelOrderTraversal function below.
/* For your reference:
struct node
{
    ll value;
    node *left;
    node *right;
};
*/

void levelOrderTraversal(node *t)
{
    //mycode
    if(t==NULL)
    return;
    queue<node*> q;
    q.push(t);
    while(!q.empty()){
      node *temp=q.front();
      q.pop();
      cout<<temp->value<<" ";
      if(temp->left!=NULL)
      q.push(temp->left);
      if(temp->right!=NULL)
      q.push(temp->right);
    }
}

void inOrderTraversal(node *t)
{
    //mycode;
    if(t==NULL)
      return ;
    else{
      inOrderTraversal(t->left);
      cout<<t->value<<" ";
      inOrderTraversal(t->right);
    }
}

void preOrderTraversal(node *t)
{
    //mycode;
    if(t==NULL) return;
    else{
      cout<<t->value<<" ";
      preOrderTraversal(t->left);
      preOrderTraversal(t->right);
    }
}

void postOrderTraversal(node *t)
{
    //write your code here;
    if(t==NULL)
      return;
    else{
      postOrderTraversal(t->left);
      postOrderTraversal(t->right);
      cout<<t->value<<" ";
    }
}





int main()
{
    node *root = NULL;
    root = createTreeByLevelTree();
    root = replaceNegativeOne(root);
    //doYourThing(root);
    levelOrderTraversal(root);
    cout<<endl;
    inOrderTraversal(root);
    cout<<endl;
    preOrderTraversal(root);
    cout<<endl;
    postOrderTraversal(root);
    
    deleteTree(root);
    return 0;
}