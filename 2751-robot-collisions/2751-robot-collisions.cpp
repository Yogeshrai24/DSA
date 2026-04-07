class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);
        
        sort(idx.begin(), idx.end(), [&](int a, int b) {
            return positions[a] < positions[b];
        });
        
        stack<int> st;
        
        for (int i : idx) {
            if (directions[i] == 'R') {
                st.push(i);
            } else {
                while (!st.empty() && healths[i] > 0) {
                    int j = st.top();
                    st.pop();
                    
                    if (healths[j] > healths[i]) {
                        healths[j]--;
                        healths[i] = 0;
                        st.push(j);
                    } else if (healths[j] < healths[i]) {
                        healths[i]--;
                        healths[j] = 0;
                    } else {
                        healths[i] = 0;
                        healths[j] = 0;
                    }
                }
            }
        }
        
        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (healths[i] > 0) res.push_back(healths[i]);
        }
        
        return res;
    }
};