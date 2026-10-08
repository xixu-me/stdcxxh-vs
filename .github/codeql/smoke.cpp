// Compile the public header as a translation unit for CodeQL and compatibility checks.
#include "../../stdc++.h"

int main() {
    std::vector<int> values{3, 1, 2};
    std::sort(values.begin(), values.end());
    return values.front() == 1 ? 0 : 1;
}
