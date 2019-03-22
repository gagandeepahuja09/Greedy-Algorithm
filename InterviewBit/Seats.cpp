#define MOD 10000003

// Source : https://github.com/cruxrebels/InterviewBit/blob/master/Greedy/Seats.cpp

int Solution::seats(string A) {
    vector<int> pos;
    for(int i=0; i<A.size(); i++) {
        if(A[i] == 'x')
            pos.push_back(i);
    }
    // Find median of the x's and hop all close to it
    if(!pos.size())
        return 0;
    int mid = pos.size()/2;
    int median = pos.size() & 1 ? pos[mid] : (pos[mid - 1] + pos[mid])/2;
    int empty = A[median] == 'x' ? median -1 : median; 
    int hops = 0;
    for(int s = median - 1; s>=0; s--) {
        if(A[s] == 'x') {
            hops += (empty - s);
            hops %= MOD;
            empty--;
        }
    }
    empty = median + 1;
    for(int e = median + 1; e < A.size(); e++) {
        if(A[e] == 'x') {
            hops += (e - empty);
            hops %= MOD;
            empty++;
        }
    }
    return hops%MOD;
}

