#include <vector>
#include <cassert>
#include <iostream>
#define LOCAL

long long solve(int n, const std::vector<int>& a) {
    return 0;
}

#ifdef LOCAL
#define assertm(cond, msg) assert((cond) && msg)
#else
#define assertm(cond, msg)
#endif

void self_test() {
    assertm(solve(3, {1,2,3}) == 6,  "basic sum");
    assertm(solve(1, {5})     == 5,  "single element");

    std::cout << "All self-tests passed ✓\n";
}

int main() {
#ifdef LOCAL
    self_test();
    return EXIT_SUCCESS;
#endif

    std::cout << "Hello World\n";
}