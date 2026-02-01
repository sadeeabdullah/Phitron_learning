**Modular Arithmentic**
Three Types ->
1. Addition 
2. Substraction
3. Multiplication
4. Division 

We will be covering the first three types here

*Addition*
Normal : A + B
Modular : (A % mod + B % mod ) % mod
---
*subtraction*
Normal : A - B
Modular : (A % mod - B % mod ) % mod        .// sometimes we get negative value here we will handle this in different way
---
*Addition*
Normal : A * B
Modular : (A % mod * B % mod ) % mod

*why we need it? Let's suppose we can take only 10^18 value as max in integer what will happen if we add two 10^18 value? Overflow right? we use modular addition to control the overflow.*

---

**Prime Factorization**
---
It is a way to define any number with the prime number multiplication.
It is basically the skeleton part of number writing with the multiplication of  various number.

```
    example:
    24
    we have to go from the smallest prime value and write 24 with the use of the prime value.
    24 / 2 = 12 (yes)
    12 / 2 = 6 (yes)
    6 / 2 = 3 (yes)
    3 / 2 = (no)
    3 / 3 = 1 (yes and when we get 1 then we are done)

    so the prime factorization of 24 is   2 * 2 * 2 * 3;
```
*smallest prime factorization (SPF)* : 
Every existed numbers smallest divisor is a prime Number.
If you don't believe give it a try take any number.

*[code for spf](https://github.com/sadeeabdullah/Phitron_learning/blob/main/Cp%20Track/Super%20problem%20solver%20Zone/Modules%20and%20Week%20problems/Week%2002%20(Math%20and%20Number%20Theory%20-%202)/primeFactorization_spf.cpp)*

---

#Problem Solution Approach
---

*[Divide and Equalize](https://codeforces.com/problemset/problem/1881/D)*

*Observation* : Given Array size of N we have to make all array element same through operation -> choose i, j index on the array and what we can do is replace a[i] to a[i] / x and a[j] * x (where x is a Divisor of a[i]). As we have to make the all the element equal then their prime factorization would be same as well.

*Approach*: We can take all element prime factorization and check if we have divide all these divisor to every element or not (prime divisor of every element count % n == 0 or not).

*example*:
```
    lets take 
            30 50 27 20;
    prime factorization of these element:
            30 -> 2 * 3 * 5
            50 -> 2 * 5 * 5
            27 -> 3 * 3 * 3
            20 -> 2 * 5 * 2
    Now what we can do is make all the prime factorizatin equal by interchanging the factors.
            2 * 3 * 5 -> 30 
            2 * 5 * 3 -> 30
            2 * 3 * 5 -> 30
            2 * 5 * 3 -> 30
    Everyones becomes 30 By interchanging.

Now is it really working as we we were given the operation?
Yes, it is working as needed.
Prime factorization is the skeleton form of a number we can have all the divisor of any number using these factors By taking different combinations multiplications.

for Say we take 20 and 5.
can we make it equal? 
lets check it:
    20 / 2(x) = 10
    5 * 2(x) = 10.
see its possible by this way.

Or take 160 and 10
    160 / 4(x) = 40
    10 * 4 (x) = 40
Here x is 4 which is 2 * 2(prime factor).
```
Hope You get it try with some example yourself.

*[code](https://github.com/sadeeabdullah/Phitron_learning/blob/main/Cp%20Track/Super%20problem%20solver%20Zone/Modules%20and%20Week%20problems/Week%2002%20(Math%20and%20Number%20Theory%20-%202)/D_Divide_and_Equalize.cpp)*
