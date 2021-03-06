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

// begin() function object

#ifndef WHEELS_OP_BEGIN_HPP
#define WHEELS_OP_BEGIN_HPP

#include <wheels/adl/begin.h++>

#include <utility> // declval, forward

namespace wheels {
    namespace op {
        struct begin {
            template <typename T>
            auto operator()(T&& t) const
            noexcept(noexcept(adl::begin(std::declval<T>())))
            -> decltype(adl::begin(std::declval<T>())) {
                return adl::begin(std::forward<T>(t));
            }
        };
    } // namespace op
} // namespace wheels

#endif // WHEELS_OP_BEGIN_HPP

