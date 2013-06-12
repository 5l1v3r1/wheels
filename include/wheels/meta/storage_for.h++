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

// Raw aligned storage type

#ifndef WHEELS_STORAGE_FOR_HPP
#define WHEELS_STORAGE_FOR_HPP

#include <wheels/meta/invoke.h++>

#include <type_traits> // aligned_storage

namespace wheels {
    namespace meta {
        template <typename T>
        struct storage_for : std::aligned_storage<sizeof(T), alignof(T)> {};
        template <typename T>
        using StorageFor = Invoke<storage_for<T>>;
    } // namespace meta
} // namespace wheels

#endif // WHEELS_STORAGE_FOR_HPP
