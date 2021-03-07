// 1바이트마다 채움

#include <iostream>
#include <cstring>

int main()
{
    
    int a[20];
    std::memset(a, 1, sizeof(a));
    for (int ai : a) std::cout << std::hex << ai << std::endl;

    for (int i = 0; i < 20; ++i) {
        std::cout << std::hex << &a[i] << std::endl;
    }

    unsigned char b[20];
    std::memset(b, 1, sizeof(b));
    for (int bi : b) std::cout << std::hex << bi << std::endl;

    for (int i = 0; i < 20; ++i) {
        std::cout << std::hex << int(&(b[i])) << std::endl;
    }

    int c[20];
    std::fill(c, c+20, 2);
    for (int ci : c) std::cout << std::hex << ci << std::endl;

    for (int i = 0; i < 20; ++i) {
        std::cout << std::hex << &c[i] << std::endl;
    }

    unsigned char d[20];
    std::fill(d, d + 20, 257);
    for (int di : d) std::cout << std::hex << di << std::endl;

    for (int i = 0; i < 20; ++i) {
        std::cout << std::hex << int(&(d[i])) << std::endl;
    }
}