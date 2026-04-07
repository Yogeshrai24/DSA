class Fancy {
private:
    static const long long MOD = 1000000007;
    vector<long long> vals; 
    long long a = 1;        
    long long b = 0;        
    
    
    long long modInv(long long x) {
        long long result = 1, exp = MOD - 2;
        x %= MOD;
        while (exp > 0) {
            if (exp & 1) result = (result * x) % MOD;
            x = (x * x) % MOD;
            exp >>= 1;
        }
        return result;
    }
    
public:
    Fancy() {
        vals.clear();
        a = 1;
        b = 0;
    }
    
    void append(int val) {
        
        long long adjusted = (val - b + MOD) % MOD;
        long long invA = modInv(a);
        vals.push_back((adjusted * invA) % MOD);
    }
    
    void addAll(int inc) {
        b = (b + inc) % MOD;
    }
    
    void multAll(int m) {
        a = (a * m) % MOD;
        b = (b * m) % MOD;
    }
    
    int getIndex(int idx) {
        if (idx < 0 || idx >= (int)vals.size()) return -1;
        long long value = (a * vals[idx] + b) % MOD;
        return (int)value;
    }
};