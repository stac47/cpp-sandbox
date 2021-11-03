#pragma once

inline int doStuff(int a, int b) {
    return a * b;
}

template<typename T>
T doStuffTemplate(T a, T b) {
    return a * b;
}
