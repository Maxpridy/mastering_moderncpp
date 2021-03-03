#include <iostream>
#include <type_traits>
 
template <typename T, typename U>
struct decay_equiv : std::is_same<typename std::decay<T>::type, U>::type {};
// std::decay<T>의 역할에 주목할것. 왼쪽으로 들어오는 타입을 
// lvalue를 rvalue로, array를 pointer로, function을 pointer로 변환해줌
 
int main()
{
    std::cout << std::boolalpha
              << decay_equiv<int, int>::value << '\n'
              << decay_equiv<int&, int>::value << '\n'
              << decay_equiv<int&&, int>::value << '\n'
              << decay_equiv<const int&, int>::value << '\n'
              << decay_equiv<int[2], int*>::value << '\n'
              << decay_equiv<int(int), int(*)(int)>::value << '\n';
}