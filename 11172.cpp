// 11172 - Relational Operator
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2113

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t-- > 0) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a > b) {
            printf(">");
        }
        else if (a < b) {
            printf("<");
        }
        else {
            printf("=");
        }
        printf("\n");
    }
    return 0;
}
