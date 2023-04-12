#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            top = newNode;
            return;
        }
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        Node* temp = top;
        int popped = top->data;
        top = top->next;
        delete temp;
        return popped;
    }
};

int evaluatePostfix(string exp) {
    Stack stack;
    string token;
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == ' ') {
            continue;
        } else if (isdigit(exp[i])) {
            int num = 0;
            while (isdigit(exp[i])) {
                num = num * 10 + (int)(exp[i] - '0');
                i++;
            }
            i--;
            stack.push(num);
        } else {
            int val1 = stack.pop();
            int val2 = stack.pop();
            switch (exp[i]) {
                case '+':
                    stack.push(val2 + val1);
                    break;
                case '-':
                    stack.push(val2 - val1);
                    break;
                case '*':
                    stack.push(val2 * val1);
                    break;
                case '/':
                    stack.push(val2 / val1);
                    break;
                case '^':
                    stack.push(pow(val2, val1));
                    break;
            }
        }
    }
    return stack.pop();
}

int main() {
    string exp = "10 20 + 30 * 40 -";
    int result = evaluatePostfix(exp);
    cout << "Result: " << result << endl;
    return 0;
}
