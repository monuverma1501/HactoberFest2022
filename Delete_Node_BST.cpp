
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    TreeNode *leftLastRight(TreeNode* temp)
    {
        if (temp->right == NULL)
            return temp;
        return leftLastRight(temp->right);
    }

    TreeNode* forRight(TreeNode* temp)
    {
        if (temp->left == NULL)
            return temp->right;
        else if (temp->right == NULL)
            return temp->left;
        TreeNode* tempRight = temp->right;
        TreeNode* lastRight = leftLastRight(temp->left);
        lastRight->right = tempRight;
        return temp->left;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode *temp = root;
        if (temp == NULL)
            return NULL;
        else if (temp->val == key)
        {
            return forRight(temp);
        }
        while (temp != NULL)
        {
            if (temp->left != NULL && temp->left->val == key)
            {
                temp->left = forRight(temp->left);
                return root;
            }
            else if (temp->right != NULL && temp->right->val == key)
            {
                temp->right = forRight(temp->right);
                return root;
            }
            else if (temp->left != NULL && temp->val > key)
            {
                temp = temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
        return root;
    }
};
