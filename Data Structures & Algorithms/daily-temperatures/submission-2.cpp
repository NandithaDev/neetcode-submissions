class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        vector<int> result(temperatures.size(), 0);

        for(int i = 0; i < temperatures.size(); i++) {

            while(s.empty() == false) {
                if(temperatures[i] > temperatures[s.top()]) {
                    int j = s.top();
                    s.pop();
                    result[j] = i - j;
                }
                else {
                    break;
                }
            }

            s.push(i);
        }

        return result;
    }
};