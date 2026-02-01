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

    so the prime factorization of 24 is   2 * 2 * 2 * 3.
```
*smallest prime factorization (SPF)*
Every existed numbers smallest divisor is a prime Number.
If you don't believe give it a try take any number.

*[code for spf]()*