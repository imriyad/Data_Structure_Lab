
#include<bits/stdc++.h>
using namespace std;

class TNode{

public:
    int data;
    TNode* left;
    TNode *right;

    TNode(){
        data = 0;
        left  = NULL;
        right = NULL;
    }

    TNode(int d){
        data = d;
        left = NULL;
        right  = NULL;
    }
};

class BST{
public:
    TNode* root;
    BST(){
        root = NULL;
    }
    bool isEmpty(){
        if(root = NULL)
            return true;
        else
            return false;
    }

    void insertNode(TNode* new_Node){
        if(root == NULL){
            root = new_Node;
            cout<<"Value inserted as Root Node"<<endl;
        }
        else{
            TNode* temp = root;
            while(temp != NULL){
                if(new_Node -> data == temp->data){
                    cout<<"Value already exist"<<endl;
                }
                else if((new_Node -> data < temp -> data) && (temp -> left == NULL)){
                    temp->left = new_Node;
                    cout<<"Value inserted to the left"<<endl;
                    break;
                }
                else if(new_Node->data < temp->data){
                    temp = temp->left;
                }
                else if((new_Node->data > temp->data) && (temp->right == NULL)){
                    temp->right = new_Node;
                    cout<<"Value inserted to the right"<<endl;
                    break;
                }
                else{
                    temp = temp->right;
                }
            }
        }
    }

    void InOrder(TNode* r){
        if(r == NULL)
            return;
        InOrder(r->left);
        cout<<r->data<<" ";
        InOrder(r->right);
    }

    void PreOrder(TNode* r){
        if(r == NULL)
            return;
        cout<<r->data<<" ";
        PreOrder(r->left);
        PreOrder(r->right);
    }


    void PostOrder(TNode* r){
        if(r == NULL)
            return;
        PostOrder(r->left);
        PostOrder(r->right);
        cout<<r->data<<" ";
    }
};


int main()
{
    BST B1;
    TNode* nNode = new TNode();
    TNode* nNode1 = new TNode();
    TNode* nNode2 = new TNode();
    TNode* nNode3 = new TNode();
    TNode* nNode4 = new TNode();
    TNode* nNode5 = new TNode();
    nNode->data = 1;
    nNode1->data = 4;
    nNode2->data = 6;
    nNode3->data = 5;
    nNode4->data = 10;
    nNode5->data = 9;

    B1.insertNode(nNode);
    B1.insertNode(nNode1);
    B1.insertNode(nNode2);
    B1.insertNode(nNode3);
    B1.insertNode(nNode4);
    B1.insertNode(nNode5);

    cout<<"IN ORDER: ";
    B1.InOrder(nNode);
    cout<<endl;
    cout<<"PRE ORDER: ";
    B1.PreOrder(nNode);
    cout<<endl;
    cout<<"POST ORDER: ";
    B1.PostOrder(nNode);
    cout<<endl;

}
