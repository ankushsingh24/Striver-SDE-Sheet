// Stack class.
class Stack {
    
public:

    vector<int> a;
    int n;
    int i = -1;
    
    Stack(int capacity) {
        // Write your code here.
        n = capacity;
        a.resize(n);
    }

    void push(int num) {
        // Write your code here.
        if (i != n-1) {
          i++;
          a[i] = num;
        }
    }

    int pop() {
        // Write your code here.
        if(i != -1)
        {
            i--;
            return a[i+1];
        }

        return -1;
    }
    
    int top() {
        // Write your code here.
        if(i != -1)
            return a[i];
        return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        if(i != -1)
            return 0;
        return 1;
    }
    
    int isFull() {
        // Write your code here.
        if(i == n-1)
            return 1;
        return 0;
    }
    
};
