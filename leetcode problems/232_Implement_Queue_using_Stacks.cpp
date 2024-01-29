//232. Implement Queue using Stacks

// Example 1:

// Input
// ["MyQueue", "push", "push", "peek", "pop", "empty"]
// [[], [1], [2], [], [], []]
// Output
// [null, null, null, 1, 1, false]

// Explanation
// MyQueue myQueue = new MyQueue();
// myQueue.push(1); // queue is: [1]
// myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
// myQueue.peek(); // return 1
// myQueue.pop(); // return 1, queue is [2]
// myQueue.empty(); // return false

#include<iostream>
#include <stack>
using namespace std;


class MyQueue {
public:

    stack<int> input;
    stack<int> output;
    int peekElement = -1;

    MyQueue() {

    };

    void push(int x) {
        if(input.empty()) {
            peekElement = x;
        }
        input.push(x);
    }

    int pop() {
        if(output.empty()) {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        int val =output.top();
        output.pop();
        return val;
    }

    int peek() {
        if(output.empty()) {
            return peekElement;
        }
        else {
            return output.top();
        }
    }

    bool empty() {
        if(input.empty() && output.empty()) {
            return true;
        }
        else {
            return false;
        }
    }

};

int main() {
    MyQueue* myQueue = new MyQueue();
    myQueue -> push(1);
    myQueue -> push(2);

    cout << "peek: " << myQueue -> peek() << endl;
    cout << "pop: " << myQueue -> pop() << endl;

    cout << "empty: ";
    if(myQueue -> empty()) {
        cout <<  "true";
    }
    else {
        cout <<  "false";
    }
    cout << endl;

    delete myQueue;

    return 0;

}