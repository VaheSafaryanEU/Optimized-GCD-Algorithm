#include <iostream>

int gcd(int m, int n) {
    if (m < n) {
        int temp = m;
        m = n;
        n = temp;
    }
    std::cout << "Step F0: m = " << m << ", n = " << n << std::endl;
    int x = 1;
    while (n != 0) {
        std::cout << "Step F" << x << ": m = " << m << ", n = " << n << std::endl;
        int r = m % n;
        if (r == 0) {
            break;
        }
        m = r;
        if (m < n) {
            int temp = m;
            m = n;
            n = temp;
        }
    }

    std::cout << "GCD is " << m << std::endl;
    return m;
}

int main() {
    int m, n;
    std::cout << "Enter two integers: ";
    std::cin >> m >> n;
    gcd(m, n);
    return 0;
}

