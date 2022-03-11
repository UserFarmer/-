// 用两个栈实现一个队列。队列的声明如下，
// 请实现它的两个函数 appendTail 和 deleteHead ，
// 分别完成在队列尾部插入整数和在队列头部删除整数的功能。
// (若队列中没有元素，deleteHead 操作返回 -1 )

// 输入：
// ["CQueue","appendTail","deleteHead","deleteHead"]
// [[],[3],[],[]]
// 输出：[null,null,3,-1]

// 输入：
// ["CQueue","deleteHead","appendTail","appendTail","deleteHead","deleteHead"]
// [[],[],[5],[2],[],[]]
// 输出：[null,-1,null,null,5,2]

// 提示：
// 1 <= values <= 10000
// 最多会对 appendTail、deleteHead 进行 10000 次调用

#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class CQueue {
public:
  stack<int> A, B;
  CQueue() {}

  void appendTail(int value) { A.push(value); }

  int deleteHead() {
    if (!B.empty()) {
      int tmp = B.top();
      B.pop();
      return tmp;
    }
    if (A.empty()) {
      return -1;
    }
    while (!A.empty()) {
      int tmp = A.top();
      A.pop();
      B.push(tmp);
    }
    int tmp = B.top();
    B.pop();
    return tmp;
  }
};

int main() {
  CQueue s;
  return 0;
}