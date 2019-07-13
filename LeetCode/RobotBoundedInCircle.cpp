class Solution {
public:
    bool isRobotBounded(string ins) {
        int x = 0, y = 0, dir = 0;
        cout << ins.size() << endl;
        for(int i = 0; i < ins.size(); i++) {
            if(ins[i] == 'G') {
                if(dir == 0)
                    x++;
                else if(dir == 1)
                    y++;
                else if(dir == 2)
                    x--;
                else
                    y--;
            }
            else if(ins[i] == 'L') {
                dir = (dir + 3)% 4;
            }
            else if(ins[i] == 'R')
                dir = (dir + 1) % 4;
            
            cout << x << " " << y << " " << dir << endl;
        }
        return (x == 0 && y == 0) || dir;
    }
};
