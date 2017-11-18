// 11727 - Cost Cutting
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2827

#include <stdio.h>

int biggest(int a, int b, int c) {
    int biggest = a;
    if (b > biggest) {
        biggest = b;
    }
    if (c > biggest) {
        biggest = c;
    }
    return biggest;
}
int smallest(int a, int b, int c) {
    int smallest = a;
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }
    return smallest;
}

int main() {
    //freopen("11727-input.txt", "r", stdin);
    int T, counter = 1;
    scanf("%d", &T);
    while(T-- > 0) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        int g = biggest(a, b, c);
        int l = smallest(a, b, c);
        printf("Case %d: %d\n", counter++, a + b + c - g - l);
    }
    return 0;
}
