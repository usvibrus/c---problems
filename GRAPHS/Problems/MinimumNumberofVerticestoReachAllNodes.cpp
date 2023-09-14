// 1557. Minimum Number of Vertices to Reach All Nodes

class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {

        vector<bool> indegreexist(n, false);

        for (auto edge : edges)
        {


            int u = edge[0];
            int v = edge[1];

            // u----->v
            //   \
           //    \
            //    v

            indegreexist[v] = true; // marking true if indegeee exist

            // and the vertices which who has 0 indegree or indegree marked false then thet is    the      answer
        }

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (!indegreexist[i])
            {

                ans.push_back(i);
            }
        }

        return ans;
    }
};