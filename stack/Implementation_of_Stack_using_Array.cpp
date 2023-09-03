# include<iostream>
using namespace std;

struct myStack {
    int cap;
    int top;
    int *arr;

    myStack(int c) {
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x) {
        if(top == cap-1) {
            cout <<"Stck is Full" << endl;
            return;
        }
        else {
            top++;
            arr[top] = x;
        }

    }
    int pop() {
        if(top == -1) {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        else {
            int res = arr[top];
            top--;
            return res;
        }
    }
    int peek() {
        if(top == -1) {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        else {
            return arr[top];
        }
    }
    bool isEmpty() {
        return top == -1;
    }

    int size() {
        return top+1;
    }
};

int main() {
    myStack s(5);
    s.push(10);
    s.push(14);
    s.push(34);
    s.push(40);

    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout <<s.peek() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}

