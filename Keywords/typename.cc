// https://en.cppreference.com/w/cpp/keyword/typename

// https://www.codentalks.com/t/topic/5958
// class 내부에서 typename을 사용하는 경우에 대해

// 예시 : https://modoocode.com/295
template <class _CharT, class _Traits, class _Yp, class _Dp>
typename enable_if<is_same<void, typename __void_t<decltype((declval<basic_osteam<_CharT, _Traits>&>() << declval<typename unique_ptr<_Yp, _Dp>::pointer>()))>::type>::value, basic_ostream<_CharT, _Traits>&>::type

operator<<(basic_ostream<_CharT, _Traits>& __os, unique_ptr<_Yp, _Dp> const& __p) {
    return __os << __p.get();
}