#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>  // For max function

using namespace std;

int totalFruit(vector<int>& fruits) {
    unordered_map<int, int> mp;
    int l = 0, r = 0;
    int s = 0;

    while (r < fruits.size()) {
        if (mp.find(fruits[r]) != mp.end()) {
            mp[fruits[r]]++;
            s = max(s, r - l + 1);
            r++;
            cout << "hello " << s << endl;
        } else {
            if (mp.empty() || mp.size() < 2) {
                mp[fruits[r]]++;
                s = max(s, r - l + 1);
                r++;
                cout << "he " << s << endl;
            } else {
                while (mp.size() >= 2) {
                    mp[fruits[l]]--;
                    if (mp[fruits[l]] == 0)
                        mp.erase(fruits[l]);
                    l++;
                    cout << "hii " << s << endl;
                }
            }
        }
    }

    return s;
}

int main() {
    int n;
    cout << "Enter the number of elements in the fruits array: ";
    cin >> n;

    vector<int> fruits(n);
    cout << "Enter the elements of the fruits array: ";
    for (int i = 0; i < n; ++i) {
        cin >> fruits[i];
    }

    int maxFruits = totalFruit(fruits);
    cout << "Maximum number of fruits that can be collected: " << maxFruits << endl;
    return 0;
}

