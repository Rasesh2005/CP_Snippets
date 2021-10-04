/* 
------------------------------------------------------------------------------------------------
USERNAME: Prajakta102
DESCRIPTION: THIS PROGRAM WILL FIND THE MAXIMUM DEPTH OF BINARY TREE.
DATE: 4/10/2021
------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int value;
	Node *left, *right;

	Node(int val)
	{
		this->value = val;
		this->left = this->right = NULL;
	}
};

int maxDepth(Node * root)
{
  //Initialising a variable to count the
      //height of tree
      int depth = 0;
   
    queue<Node*>q;
     
      //Pushing first level element along with NULL
      q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
       
          //When NULL encountered, increment the value
        if(temp == NULL){
            depth++;
        }
           
          //If NULL not encountered, keep moving
        if(temp != NULL){
            if(temp->left){
                  q.push(temp->left);
            }
              if(temp->right){
                q.push(temp->right);
            }
        }
       
          //If queue still have elements left,
          //push NULL again to the queue.
        else if(!q.empty()){
            q.push(NULL);
        }
    }
    return depth;
}

// driver code
int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->right->left = new Node(5);
  root->right->right = new Node(6);
  root->right->right->left = new Node(8);
  root->right->left->right = new Node(7);
  cout << "The maximum depth is: " << maxDepth(root) << endl;
}