
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

*[Children Holiday](https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D)*
---
We have to inflates total N baloons with cooperation of M assistant and their Efficiency is given like:
For each assistant we have data - 
```
                                    ti --> minutes need to inflate one baloons.
                                    zi --> continious inflation without rest.
                                    yi --> rest minutes after inflating zi baloons.
```

The should be working simultaneously. We have to print the how much time needed to inflate all the baloons and how many each assistant will inflate.

**here You can also find a monotonic vibe baloon count will be propostional to time.**

Use binary search on the time and check.

*[code](https://github.com/sadeeabdullah/Phitron_learning/blob/main/Cp%20Track/Super%20problem%20solver%20Zone/Modules%20and%20Week%20problems/Week%2001%20(Searching%20%26%20Sortin%20-%202)/D_Children_Holiday.cpp)*

---

*[kth not divisible](https://codeforces.com/problemset/problem/1352/C)*
---
The problem provides two integer N, K. We have to print the kth positive integer that is divisible by n.

*how to determine how many number between a range is not divisible by N.
```
            Not divisible number count = Range(threshold) - (Range / N);
            example:
                N = 14;
                Range = 1 to 13
                Not divisible number count = 13 - (13 / 4) = 10
                (1, 2, 3, 5, 6, 7, 9, 10, 11, 13) --> total 10
```

**Here we will kth non divisible value is propostional to k --> monotonic vibe**

We will find the range where we could find at least k non divisor of N.

*[code](https://github.com/sadeeabdullah/Phitron_learning/blob/main/Cp%20Track/Super%20problem%20solver%20Zone/Modules%20and%20Week%20problems/Week%2001%20(Searching%20%26%20Sortin%20-%202)/C_K_th_Not_Divisible_by_n.cpp)*

---

*[Wooden Toy Festival](https://codeforces.com/problemset/problem/1840/D)*
---
From the problem we have few information. The workshop have Only **Three** Carvers. Wood Festival is really close so **N** people will come to the shop with a request to make wooden toy differents of different Pattern and the pattern for *i-th people* will be a of i. Carvers can work on toys **simaltenously**.
We have to Minimize the Maximum waiting time for toy delievery.

**Approach** : We will try to make waiting Minimum so it could be 0 > 1 > 2 > 3... We will check how many carvers we need based on the maximum waiting period. When we got any maximum period that can done the work with three carver then we will check on the left waiting period.

*[code](https://github.com/sadeeabdullah/Phitron_learning/blob/main/Cp%20Track/Super%20problem%20solver%20Zone/Modules%20and%20Week%20problems/Week%2001%20(Searching%20%26%20Sortin%20-%202)/D_Wooden_Toy_Festival.cpp)* code will help you to clear the approach.

----

*[Min Max MEX](https://codeforces.com/contest/2093/problem/E)*
---
We are given N -> the number of the element in the array and K --> the partition count we need to make on the array and get the maximum of the minimum mex among the k subarray.

**Approach** : As the constrain is too long we need to optimize the code. At max we can get the ans Mex to be N and minimum we can get 0. We will run a Binary Search on answer and check that the ans Mex we are looking for can be achieved by the K partition  or not. We will check if the partition after getting desire answer mex is greater than we need then we will check for larger ans Mex Untill we get equal or closer to the desire partition and  maximum answer mex.

*[code](https://github.com/sadeeabdullah/Phitron_learning/blob/main/Cp%20Track/Super%20problem%20solver%20Zone/Modules%20and%20Week%20problems/Week%2001%20(Searching%20%26%20Sortin%20-%202)/E_Min_Max_MEX.cpp)*