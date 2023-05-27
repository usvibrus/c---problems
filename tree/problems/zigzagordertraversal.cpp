class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {

        vector<vector<int>> ans;

        queue<TreeNode *> q;

        q.push(root);

        if (root == NULL)
        {
            return ans;
        }

        int c = 0;
        while (1)
        {

            if (q.empty())
            {
                return ans;
            }
            int size = q.size();
            vector<int> data;

            c++;
            while (size > 0)
            {

                TreeNode *temp = q.front();
                q.pop();

                data.push_back(temp->val);

                if (temp->left != NULL)
                {
                    q.push(temp->left);
                }

                if (temp->right != NULL)
                {

                    q.push(temp->right);
                }

                size--;
            }

            if (c % 2 == 0)
            {

                reverse(data.begin(), data.end());
            }

            ans.push_back(data);
        }

        return ans;
    }
};