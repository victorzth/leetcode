#include <queue>
#include <iostream>

using namespace std;

class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
        q = queue<int>();
    }

    void push(int x)
    {
        q.push(x);
        for (int i = 0; i < q.size() - 1; i++)
        {
            int e = q.front();
            q.pop();
            q.push(e);
        }
    }

    int pop()
    {
        int i = q.front();
        q.pop();
        return i;
    }

    int top() { return q.front(); }

    bool empty() { return q.size() == 0; }
};

int main()
{
    MyStack *obj = new MyStack();
    obj->push(1);
    obj->push(2);
    cout << obj->pop() << endl;
    cout << obj->top() << endl;
    cout << obj->empty() << endl;
}
