/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*>mp;
    void fun(Node* current)
    {
        Node* clone=new Node(current->val);
        mp[current]=clone;
        for(auto u: current->neighbors)
        {
            if(mp.find(u)!=mp.end())
                clone->neighbors.push_back(mp[u]);
            else 
            {
                fun(u);
                clone->neighbors.push_back(mp[u]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        fun(node);
        return mp[node];
    }
};