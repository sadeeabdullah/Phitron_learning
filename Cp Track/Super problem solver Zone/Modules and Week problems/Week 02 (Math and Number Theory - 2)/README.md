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