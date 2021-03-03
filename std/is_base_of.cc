// 아래 상황에서 A가 부모, B가 자식일때
// A, B로 사용하면 참

#include <iostream>
#include <type_traits>
 
class A {};
 
class B : A {};
 
class C {};
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << "a2b: " << std::is_base_of<A, B>::value << '\n';
    std::cout << "b2a: " << std::is_base_of<B, A>::value << '\n';
    std::cout << "c2b: " << std::is_base_of<C, B>::value << '\n';
    std::cout << "same type: " << std::is_base_of<C, C>::value << '\n';
}