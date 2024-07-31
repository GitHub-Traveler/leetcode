#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int arr[n];
        int streak = 0;
        arr[0] = 1;
        for (int i = 1; i < n; i++) {
            if (ratings[i] <= ratings[i-1]) {
                min_val = min(arr[i-1] - 1, min_val);
                arr[i] = min_val;
            } else
                arr[i] = arr[i - 1] + 1;

        }
    }
};