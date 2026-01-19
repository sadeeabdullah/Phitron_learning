
**Monotonic Function**
-----------------------
--> When a functions values increase or decrease in a way that the graph looks increasing or decreasing constantly.

--> More precisely, A function is monotonically increasing if, as X increases or decreases, the value of the function never decrease or increase(sequentially).

Example: f(x) = x^2 + 10;

    x = 0 --> f(x) = 10;  |
    x = 1 --> f(x) = 11;  | kinda Sorted right?
    x = 3 --> f(x) = 19;  |
It alwasy increases.

**If we find monotonic vibe on any problem then we can Binary Search on answer on it.**

-------
*Interesting thing in c++*
--------
You can write function into the main function. This function is called Lamda function.
```
auto ok = [&] (parameter here){         // here & take the access of the main function
    //function body
};     
```