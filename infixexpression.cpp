#include <bits/stdc++.h>
using namespace std;
int evaluatePostfix(string postfix) {
    stack<int> s;
    for(int i = 0; i < postfix.length(); i++) {
        char c = postfix[i];
        if(isdigit(c)) {
            s.push(c - '0');
        } else {
            int value2 = s.top(); s.pop();
            int value1 = s.top(); s.pop();
            switch(c) {
                case '+': s.push(value1 + value2); break;
                case '-': s.push(value1 - value2); break;
                case '*': s.push(value1 * value2); break;
                case '/': s.push(value1 / value2); break;
                case '^': s.push(pow(value1, value2)); break;
            }
        }
    }
    return s.top();
}

int main() {
    string postfix;
    cout << "Enter postfix expression (single-digit operands): ";
    cin >> postfix;
    int result = evaluatePostfix(postfix);
    cout << "Evaluation result: " << result << endl;
    return 0;
}