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

/*
由于栈和队列的出入顺序不同，需要另外一个栈作为元素中转存储使用
*/
class CQueue {
public:
  stack<int> A, B;
  CQueue() {}

  //加入队尾，将数字value直接入栈A
  void appendTail(int value) { A.push(value); }

  int deleteHead() {

    //当栈B不为空时：B中有已完成倒序入栈元素，直接返回B栈顶元素
    if (!B.empty()) {
      int tmp = B.top();
      B.pop();
      return tmp;
    }

    //否则A为空时：A，B为空，无元素返回-1
    if (A.empty()) {
      return -1;
    }

    //否则栈A元素转移至栈B，实现倒序，返回B栈顶元素
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