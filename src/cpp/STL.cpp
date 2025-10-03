//
// Created by Kishi Kishore N on 03/10/25.
//
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int main() {
    // ====== Vector (like ArrayList in Java) ======
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    cout << "Vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // ====== List (like LinkedList in Java) ======
    list<string> l = {"one", "two"};
    l.push_back("three");
    l.push_front("zero");
    cout << "List: ";
    for (auto &s : l) cout << s << " ";
    cout << endl;

    // ====== Set (like HashSet/TreeSet in Java) ======
    set<int> s = {5, 2, 8, 2}; // automatically sorted, duplicates ignored
    cout << "Set: ";
    for (int x : s) cout << x << " ";
    cout << endl;

    // ====== Map (like HashMap/TreeMap in Java) ======
    map<int, string> m;
    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Cherry";
    cout << "Map: ";
    for (auto &p : m) cout << "(" << p.first << "," << p.second << ") ";
    cout << endl;

    // ====== Queue (like LinkedList Queue in Java) ======
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Queue (FIFO): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // ====== Stack (like Stack in Java) ======
    stack<int> st;
    st.push(100);
    st.push(200);
    st.push(300);
    cout << "Stack (LIFO): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    // ====== Priority Queue (like PriorityQueue in Java) ======
    priority_queue<int> pq;  // max-heap by default
    pq.push(50);
    pq.push(10);
    pq.push(40);
    cout << "Priority Queue (Max-Heap): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}