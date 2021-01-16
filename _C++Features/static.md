# Static in C++

Static keyword has different meanings when used with different types. We can use static keyword with:

Static Variables : Variables in a function, Variables in a class
Static Members of Class : Class objects and Functions in a class

## Static variables in a Function

When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of variable in the previous call gets carried through the next function call. This is useful for implementing coroutines in C/C++ or any other application where previous state of function needs to be stored.

[Static variable in a function example](/static/static_inFunc.cpp)

## Static variables in a class

As the variables declared as static are initialized only once as they are allocated space in separate static storage so, the static variables in a class are shared by the objects. There can not be multiple copies of same static variables for different objects. Also because of this reason **static variables can not be initialized using constructors**.


## References

1. [Geeks for geeks](https://www.geeksforgeeks.org/static-keyword-cpp/)

