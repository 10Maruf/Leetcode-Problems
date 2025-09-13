/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack
{
    std::stack<int> stack;
    std::stack<int> minStack;
public:
    
    MinStack()
    {
        minStack.push(INT_MAX);
    }


    void push(int val)
    {
        stack.push(val);
        minStack.push(std::min(minStack.top(), val));
    }

    void pop()
    {
        stack.pop();
        minStack.pop(); 
    }

    int top()
    {
        return stack.top();
    }

    int getMin()
    {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
