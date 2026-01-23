
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

------
**Problem Solution Approach**
----
----
*Maximum Median*
-----
Median is the middle value after sorting the array (we are having odd number of value here so need to worry about the median).

We need to maximize the median with K operation.
Let's take an given example: 
 after sorting the third test case:
                            N = 7, K = 7.
                            idx -->   1    2    3    4   5   6  7
                                      1    2    3    4   4   4  4
                                      1    2    3    5   5   5  5 (INCREASING BY ONE THAT   MAKES 4 OPERATION)
                                      1    2    3    5   6   6  6    (HERE 3 OPERATION)                        (increasing the part after the median because thats  only effect on the median)

Now the constrain for K is 10^9 at most. So, if we are thinking of trying running brute force we may end with TLE.

If we take any other example and check it then we will agree that if has a monotonical vibe(the operation is propostional to the median). So here we can use Binary Search on Result.
And check What maximum med we can get using the much operation. We have to count the operation and search on it.