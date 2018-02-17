//
// Created by SUMIT LAHIRI on 5/1/17.
//

#include "transactions.h"
template <class T1, class T2>
struct pair {
    // ...
    constexpr pair() noexcept(
        is_nothrow_constructible<T1>::value &&
        is_nothrow_constructible<T2>::value );
 
    pair(const pair&) = default;
 
    pair(const T1& x, const T2& y) noexcept(  
        is_nothrow_constructible<T1, const T1&>::value &&
        is_nothrow_constructible<T2, const T2&>::value );
    //...
    void swap(pair& p) noexcept( 
        noexcept(swap(first, p.first)) &&
        noexcept(swap(second, p.second)));
};

void fun1() noexcept {
    int i = 0;    // noexcept
    int * p = &i; // noexcept
    p = nullptr;  // noexcept
}
 
void fun2() noexcept {
    fun1();
    fun1();
}
 
int main() {
    std::unique_ptr p( new int(1) );
    fun2();
    // (*) 
}

template <typename T, typename Params...>  
T awesome_factory(Params... params) noexcept(noexcept(T{params...}))  
{
   return T{params...};
}
