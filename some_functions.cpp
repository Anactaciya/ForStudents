#include "some_functions.h"

ull FindFibArr(unsigned int n) {
    ull* fib{ new ull[n + 1] {} };
    fib[0] = 0;
    fib[1] = 1;
    for (unsigned int i = 2; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    ull ans = fib[n];
    delete[] fib;
    return ans;
}

ull FindFibRec(unsigned int n) {
    if (n < 2)
        return n;

    return FindFibRec(n - 1) + FindFibRec(n - 2);
}

ull FindFib(unsigned int n) {
    if (n < 2) {
        return n;
    }
    ull prev = 0;
    ull cur = 1;
    for (unsigned i = 2; i <= n; ++i) {
        ull next = cur + prev;
        prev = cur;
        cur = next;
    }

    return cur;
}