class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int mini = INT_MAX;

        vector<int> minutes;
        for(auto& val:timePoints){ 
            int hr = 10 * (val[0] - '0') + (val[1] - '0'); 
            int min = 10 * (val[3] - '0') + (val[4] - '0');
            minutes.push_back(hr * 60 + min);
        }
        sort(minutes.begin(), minutes.end());

        for(int i = 1; i < minutes.size(); ++i){
            mini = min(mini, minutes[i] - minutes[i-1]);
        }
        int n = minutes.size();
        mini = min(mini, 1440 - (minutes[n-1] - minutes[0]));

        return mini;
    }
};

static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();