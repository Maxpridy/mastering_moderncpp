#include <iostream>
#include <string>
#include <type_traits>
#include <vector>

struct Foo {
    std::string str;
    ~Foo() noexcept {}; // 이 함수는 절대 throw하지 않는다는 키워드
};
struct Bar {
    //std::vector<int> a;
    int a;
    ~Bar() = default;
};
int main() {
    std::cout << std::boolalpha
        << std::is_destructible<int>::value << '\n'
        << std::is_destructible<std::vector<int>>::value << '\n'
        << "std::string is destructible? "
        << std::is_destructible<std::string>::value << '\n'
        << "std::string is destructible? "
        << std::is_nothrow_destructible<std::string>::value << '\n'
        << "std::string is destructible? "
        << std::is_trivially_destructible<std::string>::value << '\n'
        << "Foo is nothrow destructible? "
        << std::is_nothrow_destructible<Foo>::value << '\n'
        << "Foo is trivially destructible? "
        << std::is_trivially_destructible<Foo>::value << '\n'
        << "Bar is nothrow destructible? "
        << std::is_nothrow_destructible<Bar>::value << '\n'
        << "Bar is trivally destructible? "
        << std::is_trivially_destructible<Bar>::value << '\n';
}