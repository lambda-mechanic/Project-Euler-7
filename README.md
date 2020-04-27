# Project-Euler-7
My C++ solution to project euler problem 7 at https://projecteuler.net/archives

The problem is stated as follows:

*By listing the first six prime numbers: 2, 3, 5, 7, 11, 
and 13, we can see that the 6th prime is 13.*

*What is the 10 001st prime number?*

My solution uses a brute force method that employs one for loop nested in another.
The for loops iterate through the prime numbers starting at the second one(3). 
Since the second loop must run as long as its counter, j, is less than i--and
i must not be divided by 0--it must start at at least one. However, since 1 is 
a feature of prime numbers as well as composite numbers, if we start at one then 
we will recieve false positives for prime numbers. So, j = 2.  
And since i > j, i = 3. 

The program assumes the number is prime until proven otherwise. A bool called 
primeFound is initalized to a true value before an if statement checks whether
j is a factor of i through the % operator. If j is a factor, primeFound is set
to false and the loop exits. The following if statement in the first for loop
will therefore not run. Otherwise, if the number is prime, said if statement will
run and increase the counter variable which tracks the number of primes found.
Another if statement in the nested for loop checks whether counter = 10 001.
When it is, it sets the variable int prime = i, the loop exits, and int prime
is outputted to the console.
