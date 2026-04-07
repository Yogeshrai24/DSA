#include <bits/stdc++.h>
using namespace std;

class Robot {
public:
    int w, h, x, y, dir, cycle;
    vector<string> d;

    Robot(int width, int height) {
        w = width;
        h = height;
        x = 0;
        y = 0;
        dir = 0;
        d = {"East", "North", "West", "South"};
        cycle = 2 * (w + h) - 4;
    }

    void step(int num) {
        num %= cycle;
        if (num == 0 && x == 0 && y == 0) {
            dir = 3;
            return;
        }

        while (num--) {
            if (dir == 0) {
                if (x + 1 < w) x++;
                else {
                    dir = 1;
                    y++;
                }
            } 
            else if (dir == 1) {
                if (y + 1 < h) y++;
                else {
                    dir = 2;
                    x--;
                }
            } 
            else if (dir == 2) {
                if (x - 1 >= 0) x--;
                else {
                    dir = 3;
                    y--;
                }
            } 
            else {
                if (y - 1 >= 0) y--;
                else {
                    dir = 0;
                    x++;
                }
            }
        }
    }

    vector<int> getPos() {
        return {x, y};
    }

    string getDir() {
        return d[dir];
    }
};

int main() {
    Robot robot(6, 3);

    robot.step(2);
    vector<int> pos1 = robot.getPos();
    cout << "Position: (" << pos1[0] << ", " << pos1[1] << "), Direction: " << robot.getDir() << endl;

    robot.step(2);
    vector<int> pos2 = robot.getPos();
    cout << "Position: (" << pos2[0] << ", " << pos2[1] << "), Direction: " << robot.getDir() << endl;

    robot.step(10);
    vector<int> pos3 = robot.getPos();
    cout << "Position: (" << pos3[0] << ", " << pos3[1] << "), Direction: " << robot.getDir() << endl;

    return 0;
}