  #include<iostream>
  #include<limits.h>
  #include<queue>
  using namespace std;
  class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};
  class NodeData{
public:
int size;
int minVal;
int maxVal;
bool validBST;
NodeData(){};
NodeData(int size,int max,int min,bool valid){
    this->size = size;
    minVal = min;
    maxVal = max;
    validBST = valid;
}
  };
  void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // separator for separate level
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // purana level complete traverse
            cout << endl;
            if (!q.empty())
            {
                // queue have still child Node
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

  void buildFromLevelOrder(Node* &root)
{
    queue<Node *> q;
    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    if (data == -1) {
        root = nullptr;
        return;
    }
    root = new Node(data);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "enter left Node for :" << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout << "enter right Node for :" << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}
NodeData* findLargestBST(Node* root,int &ans){
  //bc
  if(root==nullptr){
    NodeData* temp = new NodeData(0,INT_MIN,INT_MAX,true);
    return temp;
  }
  NodeData* leftKaAns = findLargestBST(root->left,ans);
  NodeData* rightKaAns = findLargestBST(root->right,ans);
  
  //check work is done here
  NodeData* currNodeKaAns = new NodeData();
  currNodeKaAns->size = leftKaAns->size + rightKaAns->size + 1;
  currNodeKaAns->maxVal = max(root->data,rightKaAns->maxVal);
  currNodeKaAns->minVal = min(root->data,leftKaAns->minVal);

  if(leftKaAns->validBST && rightKaAns->validBST && (root->data > leftKaAns->maxVal) && (root->data < rightKaAns->minVal)){
    currNodeKaAns->validBST = true;
}else{
      currNodeKaAns->validBST = false;
    }

if(currNodeKaAns->validBST){
    ans = max(ans,currNodeKaAns->size);
}
 return currNodeKaAns;
}


  int main(){
    Node *root = nullptr;
    buildFromLevelOrder(root);
    cout<<"level order traverse"<<endl;
    levelOrderTraversal(root);
cout<<"largest Bst :";
    int answer = 0;
    findLargestBST(root,answer);
    cout<<answer;

    

   
  return 0;
   }