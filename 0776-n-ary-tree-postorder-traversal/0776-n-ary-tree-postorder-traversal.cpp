/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
vector<int> values;
public:
    vector<int> postorder(Node* root) {
        if(root && root ->children.size() > 0)
        {
            for(Node* child : root->children)
            {
                postorder(child);
            }
        }

        if (root)
            {
                values.emplace_back(root->val);
            }
        
        return values;
    }
};