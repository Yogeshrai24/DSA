class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if (rows == 1) return encodedText;
        
        int n = encodedText.size();
        int cols = n / rows;
        string ans;
        
        for (int j = 0; j < cols; j++) {
            int x = 0, y = j;
            while (x < rows && y < cols) {
                ans += encodedText[x * cols + y];
                x++;
                y++;
            }
        }
        
        while (!ans.empty() && ans.back() == ' ') ans.pop_back();
        
        return ans;
    }
};