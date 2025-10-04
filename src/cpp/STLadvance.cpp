//
// Created by Kishi Kishore N on 04/10/25.
//
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;

bool compareByValue(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
}

int main() {
    vector<int> nums = {5, 2, 8, 1, 9, 3};
    cout << "Original Vector: ";
    for (int n : nums) cout << n << " ";
    cout << "\n";

    sort(nums.begin(), nums.end(), [](int a, int b) { return a > b; });
    cout << "Sorted Descending: ";
    for (int n : nums) cout << n << " ";
    cout << "\n";


    nums.erase(remove_if(nums.begin(), nums.end(), [](int x) { return x % 2 != 0; }), nums.end());
    cout << "After Removing Odds: ";
    for (int n : nums) cout << n << " ";
    cout << "\n\n";



    map<string, int> freq = {{"apple", 3}, {"banana", 5}, {"mango", 2}};
    cout << "Map Contents:\n";
    for (auto& [fruit, count] : freq) {
        cout << fruit << " -> " << count << "\n";
    }


    vector<pair<string, int>> sortedFreq(freq.begin(), freq.end());
    sort(sortedFreq.begin(), sortedFreq.end(), compareByValue);

    cout << "\nSorted by Frequency (Descending):\n";
    for (auto& [fruit, count] : sortedFreq)
        cout << fruit << " -> " << count << "\n";

    cout << "\n";



    set<int> s = {5, 1, 5, 2, 9, 1};
    cout << "Set (Unique + Sorted): ";
    for (int x : s) cout << x << " ";
    cout << "\n";


    int key = 2;
    cout << "Find " << key << ": ";
    if (s.find(key) != s.end())
        cout << "Found!\n";
    else
        cout << "Not Found!\n";


    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int x : {5, 2, 8, 1, 9})
        maxHeap.push(x), minHeap.push(x);

    cout << "\nMax Heap (Descending): ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }

    cout << "\nMin Heap (Ascending): ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << "\n";

    return 0;
}