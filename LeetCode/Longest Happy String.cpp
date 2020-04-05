// Votrubac's beautiful code
class Solution {
public:
    string f(int a, int b, int c, char aa = 'a', char bb = 'b', char cc = 'c') {
        if(b > a)
            return f(b, a, c, bb, aa, cc);
        if(c > b)
            return f(a, c, b, aa, cc, bb);
        if(b == 0)
            return string(min(2, a), aa);
        int aUse = min(a, 2);
        int bUse = a - aUse >= b ? min(1, b) : 0;
        return string(aUse, aa) + string(bUse, bb) + f(a - aUse, b - bUse, c, aa, bb, cc); 
    }
    
    string longestDiverseString(int a, int b, int c) {
        return f(a, b, c);
    }
};
