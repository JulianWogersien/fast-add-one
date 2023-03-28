
#ifndef FAST_ADD_H
#define FAST_ADD_H

int fast_add_one(int n) {
    return -~n;
}

int fast_add_n(int v, int n) {
    for(int i = 0; i <= n; i++) {
        v = fast_add_one(v);
    }
    return v;
}

#endif

