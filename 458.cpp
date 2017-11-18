// 458 - The Decoder
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=399
#include <iostream>
using namespace std;

int main() {
    string line;
    //freopen("458-input.txt", "r", stdin);

    while (getline(cin, line)) {
        for (string::iterator it = line.begin(); it != line.end(); it ++) {
            char c;
            c = *it;
            c = c - 7;
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}
