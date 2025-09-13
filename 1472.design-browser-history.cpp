/*
 * @lc app=leetcode id=1472 lang=cpp
 *
 * [1472] Design Browser History
 */

// @lc code=start
class BrowserHistory
{
    stack<string> backStack, forwardStack;
    string current;

public:
    BrowserHistory(string homepage)
    {
        current = homepage;
    }

    void visit(string url)
    {
        backStack.push(current);      // Save current page in back history
        current = url;                // Move to new page
        while (!forwardStack.empty()) // Clear forward history
            forwardStack.pop();
    }

    string back(int steps)
    {
        while (steps-- > 0 && !backStack.empty())
        {
            forwardStack.push(current); // Push current to forward stack
            current = backStack.top();  // Go to previous page
            backStack.pop();
        }
        return current;
    }

    string forward(int steps)
    {
        while (steps-- > 0 && !forwardStack.empty())
        {
            backStack.push(current);      // Save current to back stack
            current = forwardStack.top(); // Move forward
            forwardStack.pop();
        }
        return current;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
// @lc code=end
