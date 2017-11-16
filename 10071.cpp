// 10071 - Back to High School Physics
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1012
#include <stdio.h>

int main() {
    int v, t;
    while(scanf("%d %d", &v, &t) == 2) {
        printf("%d\n", v * t * 2);
    }
    return 0;
}
