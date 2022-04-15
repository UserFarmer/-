/*
 * @lc app=leetcode.cn id=806 lang=cpp
 *
 * [806] 写字符串需要的行数
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
const int MAX_WIDTH = 100;
class Solution {
 public:
  vector<int> numberOfLines(vector<int>& widths, string s) {
    int line = 1;
    int width = 0;
    for (auto& c : s) {
      width += widths[c - 'a'];
      if (width > MAX_WIDTH) {
        width = widths[c - 'a'];
        line++;
      }
    }
    return {line, width};
  }
};
// @lc code=end
