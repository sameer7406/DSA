class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        vector<vector<int>> vec;

        for(int j = 0; j < n - 3; j++) {

            if(j > 0 && arr[j] == arr[j - 1])
                continue;

            for(int i = j + 1; i < n - 2; i++) {

                if(i > j + 1 && arr[i] == arr[i - 1])
                    continue;

                long long ans = (long long)target - arr[j] - arr[i];

                int start = i + 1;
                int end = n - 1;

                while(start < end) {

                    long long sum = (long long)arr[start] + arr[end];

                    if(sum == ans) {
                        vec.push_back({
                            arr[j],
                            arr[i],
                            arr[start],
                            arr[end]
                        });

                        while(start < end && arr[start] == arr[start + 1])
                            start++;

                        while(start < end && arr[end] == arr[end - 1])
                            end--;

                        start++;
                        end--;
                    }
                    else if(sum > ans) {
                        end--;
                    }
                    else {
                        start++;
                    }
                }
            }
        }

        return vec;
    }
};