/*
给你二叉树的根节点 root 和一个表示目标和的整数 targetSum 。
判断该树中是否存在根节点到叶子节点的路径，
这条路径上所有节点值相加等于目标和 targetSum。
如果存在，返回 true ；否则，返回 false 。

树中节点的数目在范围 [0, 5000] 内
-1000 <= Node.val <= 1000
-1000 <= targetSum <= 1000
*/

/*

        5
       / \
      4   8
     /   / \
    11 13   4
    / \      \
   7   2      1

输入：root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
输出：true
解释：等于目标和的根节点到叶节点路径如上图所示。
*/

/*
    1
   / \
  2   3

输入：root = [1,2,3], targetSum = 5
输出：false
解释：树中存在两条根节点到叶子节点的路径：
(1 --> 2): 和为 3
(1 --> 3): 和为 4
不存在 sum = 5 的根节点到叶子节点的路径。
*/

/*
输入：root = [], targetSum = 0
输出：false
解释：由于树是空的，所以不存在根节点到叶子节点的路径。
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  bool hasPathSum(TreeNode *root, int sum) {
    if (root == nullptr) {
      return false;
    }
    if (root->left == nullptr && root->right == nullptr) {
      return sum == root->val;
    }
    return hasPathSum(root->left, sum - root->val) ||
           hasPathSum(root->right, sum - root->val);
  }
};

int main() {
  Solution s;
  TreeNode leaf1 = TreeNode(7);
  TreeNode leaf2 = TreeNode(2);
  TreeNode leaf3 = TreeNode(1);
  TreeNode level31 = TreeNode(11, &leaf1, &leaf2);

  return 0;
}