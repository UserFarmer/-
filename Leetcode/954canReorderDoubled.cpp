// 给定一个长度为偶数的整数数组arr，只有对 arr 进行重组后可以满足
// “对于每个0 <= i < len(arr) / 2，都有arr[2 * i + 1] = 2 * arr[2 * i]” 时，
// 返回 true；否则，返回 false。

// 示例 1：

// 输入：arr = [3,1,3,6]
// 输出：false
// 示例 2：

// 输入：arr = [2,1,2,6]
// 输出：false
// 示例 3：

// 输入：arr = [4,-2,2,-4]
// 输出：true
// 解释：可以用 [-2,-4] 和 [2,4] 这两组组成 [-2,-4,2,4] 或是 [2,4,-2,-4]

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  bool canReorderDoubled(vector<int>& arr) {}
};

int main() {
  Solution s;
  return 0;
}