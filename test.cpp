#include <iostream>

using namespace std;

int main() {
    int n = 10000;
    int run = 600 / 60;
    int time = 0;
    while (n) {

        if (n - 600 < 0) {
            time = time * 60 + n / run;
            break;
        }
        n -= 600;
        n += 300;
        time += 2;
    }
    cout << time;
    return 0;
}
