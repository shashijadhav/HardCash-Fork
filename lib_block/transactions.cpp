
  template<typename _CharT, typename _Traits, typename _Allocator>
    inline basic_string<_CharT,_Traits,_Allocator>
    operator+(const basic_string<_CharT,_Traits,_Allocator>& __lhs,
	      const basic_string<_CharT,_Traits,_Allocator>& __rhs)
    { return basic_string<_CharT,_Traits,_Allocator>(__lhs) += __rhs; }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline basic_string<_CharT,_Traits,_Allocator>
    operator+(const _CharT* __lhs,
	      const basic_string<_CharT,_Traits,_Allocator>& __rhs)
    {
      __glibcxx_check_string(__lhs);
      return basic_string<_CharT,_Traits,_Allocator>(__lhs) += __rhs;
    }

   

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator==(const basic_string<_CharT,_Traits,_Allocator>& __lhs,
	       const _CharT* __rhs)
    {
      __glibcxx_check_string(__rhs);
      return __lhs._M_base() == __rhs;
    }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator!=(const basic_string<_CharT,_Traits,_Allocator>& __lhs,
	       const basic_string<_CharT,_Traits,_Allocator>& __rhs)
    { return __lhs._M_base() != __rhs._M_base(); }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator!=(const _CharT* __lhs,
	       const basic_string<_CharT,_Traits,_Allocator>& __rhs)
    {
      __glibcxx_check_string(__lhs);
      return __lhs != __rhs._M_base();
    }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator!=(const basic_string<_CharT,_Traits,_Allocator>& __lhs,
	       const _CharT* __rhs)
    {
      __glibcxx_check_string(__rhs);
      return __lhs._M_base() != __rhs;
    }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator<(const basic_string<_CharT,_Traits,_Allocator>& __lhs,
	      const basic_string<_CharT,_Traits,_Allocator>& __rhs)
    { return __lhs._M_base() < __rhs._M_base(); }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator<(const _CharT* __lhs,
	      const basic_string<_CharT,_Traits,_Allocator>& __rhs)
    {
      __glibcxx_check_string(__lhs);
      return __lhs < __rhs._M_base();
    }

  
  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator<=(const _CharT* __lhs,
	       const basic_string<_CharT,_Traits,_Allocator>& __rhs)
    {
      __glibcxx_check_string(__lhs);
      return __lhs <= __rhs._M_base();
    }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator<=(const basic_string<_CharT,_Traits,_Allocator>& __lhs,
	       const _CharT* __rhs)
    {
      __glibcxx_check_string(__rhs);
      return __lhs._M_base() <= __rhs;
    }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator>=(const basic_string<_CharT,_Traits,_Allocator>& __lhs,
	       const basic_string<_CharT,_Traits,_Allocator>& __rhs)
    { return __lhs._M_base() >= __rhs._M_base(); }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator>=(const _CharT* __lhs,
	       const basic_string<_CharT,_Traits,_Allocator>& __rhs)
    {
      __glibcxx_check_string(__lhs);
      return __lhs >= __rhs._M_base();
    }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator>=(const basic_string<_CharT,_Traits,_Allocator>& __lhs,
	       const _CharT* __rhs)
    {
      __glibcxx_check_string(__rhs);
      return __lhs._M_base() >= __rhs;
    }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator>(const basic_string<_CharT,_Traits,_Allocator>& __lhs,
	      const basic_string<_CharT,_Traits,_Allocator>& __rhs)
    { return __lhs._M_base() > __rhs._M_base(); }

  template<typename _CharT, typename _Traits, typename _Allocator>
    inline bool
    operator>(const _CharT* __lhs,
	      const basic_string<_CharT,_Traits,_Allocator>& __rhs)
    {
      __glibcxx_check_string(__lhs);
      return __lhs > __rhs._M_base();
    }

  // 21.3.7.8:
  template<typename _CharT, typename _Traits, typename _Allocator>
    inline void
    swap(basic_string<_CharT,_Traits,_Allocator>& __lhs,
	 basic_string<_CharT,_Traits,_Allocator>& __rhs)
    { __lhs.swap(__rhs); }

  template<typename _CharT, typename _Traits, typename _Allocator>
    std::basic_ostream<_CharT, _Traits>&
    operator<<(std::basic_ostream<_CharT, _Traits>& __os,
	       const basic_string<_CharT, _Traits, _Allocator>& __str)
    { return __os << __str._M_base(); }

  template<typename _CharT, typename _Traits, typename _Allocator>
    std::basic_istream<_CharT,_Traits>&
    operator>>(std::basic_istream<_CharT,_Traits>& __is,
	       basic_string<_CharT,_Traits,_Allocator>& __str)
    {
      std::basic_istream<_CharT,_Traits>& __res = __is >> __str._M_base();
      __str._M_invalidate_all();
      return __res;
    }

  template<typename _CharT, typename _Traits, typename _Allocator>
    std::basic_istream<_CharT,_Traits>&
    getline(std::basic_istream<_CharT,_Traits>& __is,
	    basic_string<_CharT,_Traits,_Allocator>& __str, _CharT __delim)
    {
      std::basic_istream<_CharT,_Traits>& __res = getline(__is,
							  __str._M_base(),
							__delim);
      __str._M_invalidate_all();
      return __res;
    }

    int
    compare(size_type __pos1, size_type __n1,
		  const basic_string& __str) const
    { return _Base::compare(__pos1, __n1, __str); }

    int
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
	      size_type __pos2, size_type __n2) const
    { return _Base::compare(__pos1, __n1, __str, __pos2, __n2); }

    int
    compare(const _CharT* __s) const
    {
      __glibcxx_check_string(__s);
      return _Base::compare(__s);
    }

    //  _GLIBCXX_RESOLVE_LIB_DEFECTS
    //  5. string::compare specification questionable
    int
    compare(size_type __pos1, size_type __n1, const _CharT* __s) const
    {
      __glibcxx_check_string(__s);
      return _Base::compare(__pos1, __n1, __s);
    }

    //  _GLIBCXX_RESOLVE_LIB_DEFECTS
    //  5. string::compare specification questionable
    int
    compare(size_type __pos1, size_type __n1,const _CharT* __s,
	    size_type __n2) const
    {
      __glibcxx_check_string_len(__s, __n2);
      return _Base::compare(__pos1, __n1, __s, __n2);
    }

    _Base&
    _M_base() _GLIBCXX_NOEXCEPT		{ return *this; }

    const _Base&
    _M_base() const _GLIBCXX_NOEXCEPT	{ return *this; }

    using _Safe::_M_invalidate_all;
  };


    template<typename _InputIterator>
      basic_string&
      append(_InputIterator __first, _InputIterator __last)
      {
	typename __gnu_debug::_Distance_traits<_InputIterator>::__type __dist;
	__glibcxx_check_valid_range2(__first, __last, __dist);

	if (__dist.second >= __dp_sign)
	  _Base::append(__gnu_debug::__unsafe(__first),
			__gnu_debug::__unsafe(__last));
	else
	  _Base::append(__first, __last);

	this->_M_invalidate_all();
	return *this;
      }

#if __cplusplus >= 201103L
    void
    shrink_to_fit() noexcept
    {
      if (capacity() > size())
	{
	  __try
	    {
	      reserve(0);
	      this->_M_invalidate_all();
	    }
	  __catch(...)
	    { }
	}
    }
#endif

    using _Base::capacity;
    using _Base::reserve;

    void
    clear() // _GLIBCXX_NOEXCEPT
    {
      _Base::clear();
      this->_M_invalidate_all();
    }

    using _Base::empty;

    // 21.3.4 element access:
    const_reference
    operator[](size_type __pos) const _GLIBCXX_NOEXCEPT
    {
      _GLIBCXX_DEBUG_VERIFY(__pos <= this->size(),
			    _M_message(__gnu_debug::__msg_subscript_oob)
			    ._M_sequence(*this, "this")
			    ._M_integer(__pos, "__pos")
			    ._M_integer(this->size(), "size"));
      return _M_base()[__pos];
    }

    reference
    operator[](size_type __pos) // _GLIBCXX_NOEXCEPT
    {
#if __cplusplus < 201103L && defined(_GLIBCXX_DEBUG_PEDANTIC)
      __glibcxx_check_subscript(__pos);
#else
      // as an extension v3 allows s[s.size()] when s is non-const.
      _GLIBCXX_DEBUG_VERIFY(__pos <= this->size(),
			    _M_message(__gnu_debug::__msg_subscript_oob)
			    ._M_sequence(*this, "this")
			    ._M_integer(__pos, "__pos")
			    ._M_integer(this->size(), "size"));
#endif
      return _M_base()[__pos];
    }

    using _Base::at;

#if __cplusplus >= 201103L
    using _Base::front;
    using _Base::back;
#endif


__ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(short __n);

      __ostream_type&
      operator<<(unsigned short __n)
      {
	// _GLIBCXX_RESOLVE_LIB_DEFECTS
	// 117. basic_ostream uses nonexistent num_put member functions.
	return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type&
      operator<<(int __n);

      __ostream_type&
      operator<<(unsigned int __n)
      {
	// _GLIBCXX_RESOLVE_LIB_DEFECTS
	// 117. basic_ostream uses nonexistent num_put member functions.
	return _M_insert(static_cast<unsigned long>(__n));
      }

#ifdef _GLIBCXX_USE_LONG_LONG
      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }
#endif

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }

  // Specialization
  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }

  // Signed and unsigned
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }


  template<typename _Tp>
    using __do_is_convertible_to_basic_ostream_impl =
    decltype(__is_convertible_to_basic_ostream_test
	     (declval<typename remove_reference<_Tp>::type*>()));

  template<typename _Tp>
    struct __is_convertible_to_basic_ostream_impl
    <_Tp,
     __void_t<__do_is_convertible_to_basic_ostream_impl<_Tp>>>
    {
      using __ostream_type =
	__do_is_convertible_to_basic_ostream_impl<_Tp>;
    };

  template<typename _Tp>
    struct __is_convertible_to_basic_ostream
    : __is_convertible_to_basic_ostream_impl<_Tp>
    {
    public:
      using type = __not_<is_void<
        typename __is_convertible_to_basic_ostream_impl<_Tp>::__ostream_type>>;
      constexpr static bool value = type::value;
    };

  template<typename _Ostream, typename _Tp, typename = void>
    struct __is_insertable : false_type {};

  template<typename _Ostream, typename _Tp>
    struct __is_insertable<_Ostream, _Tp,
			   __void_t<decltype(declval<_Ostream&>()
					     << declval<const _Tp&>())>>
				    : true_type {};

  template<typename _Ostream>
    using __rvalue_ostream_type =
      typename __is_convertible_to_basic_ostream<
	_Ostream>::__ostream_type;

