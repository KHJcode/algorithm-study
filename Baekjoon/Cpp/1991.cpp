#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

struct TreeNode
{
    int left;
    int right;

    TreeNode(int left, int right) : left(left), right(right) {}
};
vector<TreeNode *> tree(26);

void preorder(int node)
{
    if (node == -1)
    {
        return;
    }
    cout << char(node + 65);
    preorder(tree[node]->left);
    preorder(tree[node]->right);
}

void inorder(char node)
{
    if (node == -1)
    {
        return;
    }
    inorder(tree[node]->left);
    cout << char(node + 65);
    inorder(tree[node]->right);
}

void postorder(int node)
{
    if (node == -1)
    {
        return;
    }
    postorder(tree[node]->left);
    postorder(tree[node]->right);
    cout << char(node + 65);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    char a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        tree[a - 65] = new TreeNode(b == '.' ? -1 : b - 65, c == '.' ? -1 : c - 65);
    }
    preorder(0);
    cout << "\n";
    inorder(0);
    cout << "\n";
    postorder(0);
    return 0;
}
