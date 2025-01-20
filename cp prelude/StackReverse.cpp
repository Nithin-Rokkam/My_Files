#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }
    int temp = st.top();
    st.pop();
    insert(st, x);
    st.push(temp);
}

void reverse(stack<int> &st) {
    if (st.empty()) return;
    int temp = st.top();
    st.pop();
    reverse(st);
    insert(st, temp);
}

int main() {
    int n;
    cin >> n;
    stack<int> st;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        st.push(x);
    }
    reverse(st);
    stack<int> result;
    while (!st.empty()) {
        result.push(st.top());
        st.pop();
    }
    while (!result.empty()) {
        cout << result.top() << " ";
        result.pop();
    }

    return 0;
}
