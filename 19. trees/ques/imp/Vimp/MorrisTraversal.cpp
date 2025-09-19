vector<int> morrisInorder(Node *root)
{
    vector<int> inorder;
    Node *curr = root;
    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            // If no left child, visit this node and go right
            inorder.push_back(curr->data);
            curr = curr->right;
        }
        else
        {
            // Find inorder predecessor (rightmost of left subtree)
            Node *pred = curr->left;
            while (pred->right != NULL && pred->right != curr)
            {
                pred = pred->right;
            }
            if (pred->right == NULL)
            {
                // Make a temporary thread to current
                pred->right = curr;
                curr = curr->left;
            }
            else
            {
                // Thread already exists, remove it
                pred->right = NULL;
                inorder.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    return inorder;
}
//////////////////////////////////
vector<int> morrisPreorder(Node *root)
{
    vector<int> preorder;
    Node *curr = root;
    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            // Visit before going right
            preorder.push_back(curr->data);
            curr = curr->right;
        }
        else
        {
            Node *pred = curr->left;
            while (pred->right != NULL && pred->right != curr)
            {
                pred = pred->right;
            }
            if (pred->right == NULL)
            {
                preorder.push_back(curr->data); // Visit before threading
                pred->right = curr;
                curr = curr->left;
            }
            else
            {
                pred->right = NULL;
                curr = curr->right;
            }
        }
    }
    return preorder;
}
