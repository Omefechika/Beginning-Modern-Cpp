// fibonacci.h : testing if a function template would work for
// a recursive function definition
// testing for only numerical values
/*
 Fibonacci series Definition:
 fibonacci(0) = 0;
 fibonacci(1) = 1;
 fibonacci(n) = fibonacci(n - 1) + fibonacci(n -2)
*/

template <typename T>
T fibonacci(T n){
    if ((0 == n) || (1 == n)) // same as n == 0
    {       
        return n;
    }
    // if present value is not a base case
    else
    {
        // the next n-value in the series is define by the 
        // equation
        return fibonacci(n -1) + fibonacci(n - 2);
    }
}