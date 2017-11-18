// 102 - Ecological Bin Packing
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=38

#include <iostream>
using namespace std;

int main() {
    //freopen("102-input.txt", "r", stdin);
    int x[6];
    int b1, g1, c1, b2, g2, c2, b3, g3, c3;
    while(scanf("%d%d%d%d%d%d%d%d%d", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3) == 9) {
        x[0] = b2 + b3 + c1 + c3 + g1 + g2;//bcg
        x[1] = b2 + b3 + g1 + g3 + c1 + c2;//bgc
        x[2] = c2 + c3 + b1 + b3 + g1 + g2;//cbg
        x[3] = c2 + c3 + g1 + g3 + b1 + b2;//cgb
        x[4] = g2 + g3 + b1 + b3 + c1 + c2;//gbc
        x[5] = g2 + g3 + c1 + c3 + b1 + b2;//gcb

        int min_sum = x[0];
        int min_index = 0;
        for (int i = 0; i < 6; i++) {
            if (min_sum > x[i]) {
                min_sum = x[i];
                min_index = i;
            }
        }
        if (min_index == 0) {
            printf("BCG %d\n", min_sum);
        }
        else if (min_index == 1) {
            printf("BGC %d\n", min_sum);
        }
        else if (min_index == 2) {
            printf("CBG %d\n", min_sum);
        }
        else if (min_index == 3) {
            printf("CGB %d\n", min_sum);
        }
        else if (min_index == 4) {
            printf("GBC %d\n", min_sum);
        }
        else if (min_index == 5) {
            printf("GCB %d\n", min_sum);
        }
    }
    return 0;
}
