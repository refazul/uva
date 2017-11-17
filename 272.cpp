// 272 - TEX Quotes
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=208

#include <iostream>
using namespace std;

int main() {
    string line;
    //freopen("input.txt", "r", stdin);

    int counter = 0;
    while (getline(cin, line)) {
        for (string::iterator it = line.begin(); it != line.end(); it ++) {
            char c;
            c = *it;
            if (c == '"') {
                if (counter % 2 == 0) {
                    printf("``");
                } else {
                    printf("''");
                }
                counter++;
            } else {
                printf("%c", c);
            }
        }
        printf("\n");
    }
    return 0;
}
