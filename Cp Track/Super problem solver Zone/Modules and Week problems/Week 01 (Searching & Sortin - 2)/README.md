
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
*[Maximum Median](https://codeforces.com/problemset/problem/1201/C)*
-----
Median is the middle value after sorting the array (we are having odd number of value here so need to worry about the median).

We need to maximize the median with K operation.
Let's take an given example: 
 after sorting the third test case:
 ```
                            N = 7, K = 7.
                            idx -->   1    2    3    4   5   6  7
                                      1    2    3    4   4   4  4
                                      1    2    3    5   5   5  5 (INCREASING BY ONE THAT   MAKES 4 OPERATION)
                                      1    2    3    5   6   6  6    (HERE 3 OPERATION)                        
                                      (increasing the part after the median because thats  only effect on the median)
```
Now the constrain for K is 10^9 at most. So, if we are thinking of trying running brute force we may end with TLE.

If we take any other example and check it then we will agree that if has a monotonical vibe(the operation is propostional to the median). So here we can use Binary Search on Result.
And check What maximum med we can get using the much operation. We have to count the operation and search on it.

*[code](https://github.com/sadeeabdullah/Phitron_learning/blob/main/Cp%20Track/Super%20problem%20solver%20Zone/Modules%20and%20Week%20problems/Week%2001%20(Searching%20%26%20Sortin%20-%202)/C_Maximum_Median.cpp)*

---

*[string Game](https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F)*
---
We have to check the last Index of deleting character from the string and print it.
Seems simple but it is not simple when the constrain is pretty high. Deleting and comparing cost a Huge amoung of time complexity.

Also here we can also find a monotonical vibes.
If we choose any index and find it is possible answer then the left sides element also uses as an answer.

As we have the monotonic vibes we will use Binary Search on Answer here.
We will also use Bool vector to track the Deleting character according their index.
Then we can check that if we have the target string sequence into the main  array or not.
By seeing the code it will help you to understand.

*[code](https://github.com/sadeeabdullah/Phitron_learning/blob/main/Cp%20Track/Super%20problem%20solver%20Zone/Modules%20and%20Week%20problems/Week%2001%20(Searching%20%26%20Sortin%20-%202)/F_String_Game.cpp)*

----