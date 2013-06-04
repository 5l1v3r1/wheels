// Wheels - various C++ utilities
//
// Written in 2013 by Martinho Fernandes <martinho.fernandes@gmail.com>
//
// To the extent possible under law, the author(s) have dedicated all copyright and related
// and neighboring rights to this software to the public domain worldwide. This software is
// distributed without any warranty.
//
// You should have received a copy of the CC0 Public Domain Dedication along with this software.
// If not, see <http://creativecommons.org/publicdomain/zero/1.0/>

// Generic dependent type attachment

#ifndef WHEELS_META_DEPEND_ON_HPP
#define WHEELS_META_DEPEND_ON_HPP

#include <wheels/meta/invoke.h++>
#include <wheels/meta/identity.h++>

namespace wheels {
    namespace meta {
        // Makes dependent types
        // *Effects*: makes `T` depend on the trailing arguments.
        template <typename T, typename... D>
        struct depend_on : identity<T> {};
        // Makes dependent types
        // *Effects*: makes `T` depend on the trailing arguments.
        template <typename T, typename... D>
        using DependOn = Invoke<depend_on<T, D...>>;
    } // namespace meta
} // namespace wheels

#endif // WHEELS_META_DEPEND_ON_HPP

