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

// id() function object

#ifndef WHEELS_OP_ID_HPP
#define WHEELS_OP_ID_HPP

#include <wheels/adl/id.h++>

#include <utility> // declval, forward

namespace wheels {
    namespace op {
        struct id {
            template <typename T>
            T&& operator()(T&& t) {
                return std::forward<T>(t);
            }
        };
    } // namespace op
} // namespace wheels

#endif // WHEELS_OP_ID_HPP
