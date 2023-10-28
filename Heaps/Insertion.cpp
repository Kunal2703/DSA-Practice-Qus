#include<iostream>
using namespace std;

class heap {
    int *arr;
    int size;
    int capacity;

    public:
    heap(int c) {
        size = 0;
        capacity = c;
        arr = new int[c];
    }

    void insert(int val) {
        size = size+1;  //increase the size
        int index = size;   
        arr[index] = val;   //put the value at last index

        while(index > 1) {
            int parent = index/2;   //calculate the parent index
            if(arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else {
                return;
            }
        }
    }
    void print() {
        for(int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap h(10);

    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.insert(55);
    h.insert(70);

    h.print();
    return 0;
}