<!-- vscode-markdown-toc -->
* 1. [Introduction to Competitive Coding](#IntroductiontoCompetitiveCoding)
* 2. [STL in C++ and Collections in Java](#STLinCandCollectionsinJava)
		* 2.1. [Imports](#Imports)
		* 2.2. [Strings](#Strings)
		* 2.3. [Inputting, Concatenating, Comparing Strings](#InputtingConcatenatingComparingStrings)
		* 2.4. [Vectors](#Vectors)
* 3. [Some Useful Functions](#SomeUsefulFunctions)
		* 3.1. [Sorting](#Sorting)
		* 3.2. [Min, Max](#MinMax)
		* 3.3. [Further Reading](#FurtherReading)
* 4. [Recursion](#Recursion)
	* 4.1. [ Examples](#Examples)
		* 4.1.1. [ Example 1: Fibonacci series](#Example1:Fibonacciseries)
		* 4.1.2. [ Example 2: Factorials](#Example2:Factorials)
* 5. [Time Complexities](#Time)
        * 5.1 [Introduction](#Timeintro)
        * 5.2 [Big O notation](#Timebig)
        * 5.3 [Further Reading](#Timefurther)
* 6. [Fast IO for Competitive Programming](#Fastio)
* 7. [Basic Mathematics](#Basemaths)
        * 7.1 [GCD and LCM](#Gcdlcm)
        * 7.2 [Combinatorics](#Combinatorics)
        * 7.3 [Bit Manipulation](#Bitmanipulation)
        * 7.4 [Primality and Sieve of Eratosthenes](#Primality)
* 8. [Modular Arithmetic](#Modarith)
* 9. [Ad Hoc](#Adhoc)
* 10. [Kadane's Algorithm and Prefix Sum](#Kadane)

##  1. <a name='IntroductiontoCompetitiveCoding'></a>Introduction to Competitive Coding 

Let us first talk about how one should approach a problem in Competitive Coding. There are broadly 4 steps -
 
**1. Understanding the problem:**  Try and figure out the basic logic behind the problem. If you don't understand how it's working, then the best way around it is to write up some random test cases and figure out the logic. This process helps you later to test your code more thoroughly.

**2. The Algorithm:**  Come up with an algorithm. Don't start coding yet. Find cases where your code might be failing. Take care of these cases. This is an iterative process. **Always look for cases you might be missing.** More formally, prove the correctness of the algorithm. Run the algorithm over the test cases that you found in Step 1. This process is called a **dry run**.

**3. Validate Constraints:** Once you have an airtight logic, find the runtime of your algorithm. See if it's enough to pass the time limit considering the **worst case, not the best case**. If it isn't, find ways to optimize the code. Most of the times, it's a data structure that helps you out. Most people overlook this step and this almost always results in a Time Limit Exceeded Error.

**4. Code:** Write the code. Submit. If it doesn't pass, that means you went wrong in one of the previous steps. Start again at step 1 to check the problem statement and see if you've missed some tiny detail in the question. Then start thinking of possible edge cases where your code might be failing. If there is a timeout error, that shows that you didn't check if the runtime fits in the given constraints. The best way to fix it then is to check the values being computed and see if there are any anomalies.

A few tips for everyone - 

Master your language. If you're doing it in C++, learn the **STL** well, same goes for Java and **Collections**. Have the tools you need at your disposal. Learn the different space and time complexities for each data structure. Not knowing the underlying complexities often lead to wasting time on attempting the problem with unnecessary and costly implementations.

The key to improving yourself is practice. People chose different ways to do this. You can choose a standard platform and sort the problems by the number of people who have solved the problem. Keep solving. The most popular choices are Hackerrank and Codechef. If you can't solve a problem even after trying it out a lot, look at the editorials. Understand the solution, and then implement it on your own. Look at other people's submissions. Sometimes the red coders have very intriguing solutions to the simplest of problems.

For your practice we are providing you with a few problems based on all the topics listed below. You can find them [here](https://www.hackerrank.com/contests/iecse-winterproject-2019/challenges/filters/page:1)

Start attempting contests. Codechef long contests are really good for beginners. Since this contest runs for ten days, you'll have enough time to research and find the right algorithms for the problems. Once you're confident, you can start attempting short contests on platforms like codeforces, codechef, etc. The most important time of a contest is after the contest. This is when you try solving the problems that you couldn't solve during the contest. This is called up solving. This is a very efficient way of learning new tricks, optimizations, and concepts.

Also check [this](https://www.codechef.com/certification/data-structures-and-algorithms/prepare) out.

##  2. <a name='STLinCandCollectionsinJava'></a>STL in C++ and Collections in Java
When you are taking part in a competition, creating functions/methods for certain tasks, like extracting substrings, sorting, adding and removing elemnts array, requires time to code and hence you lose out on valuable time. A good understanding of the library functions is important for writing quick and bug-free code. Most programming languages provide with predefined libraries which help you do the same. Here are a few you'll need to know to get started with competitive coding.

>It is always suggested you understand how these are implemented without using STL, because if you ever face a problem where time is a constraint or requires a specific form of updation which STL do not have, you will have to code a program for it.


####  2.1. <a name='Imports'></a>Imports

Imports for C++ STL
```cpp
##include<bits/stdc++.h>
```
Imports for Java Utility Package
```Java
import java.util.*;
import java.io.*;        // Classes for Fast I/O implementation in Java
```

####  2.2. <a name='Strings'></a>Strings

If you have ever tried coding in C, you are probably used to declaring a string using an array of chars. C++ offers a string class that makes string handling easier.

The following code snippet shows how to declaring and use a string :

```cpp
##include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Coding is fun";   // Declaring and initialising string

    int len = str.length(); // the length() function returns the length of the string

    cout<<"The length of string "<<str<<" is "<<len<<endl;

    return 0;
}
```

Java equivalent
```Java
import java.util.*;
public class Solution{
	public static void main(String[] args){
		String str = "Coding is fun";

		int len = str.length();

		System.out.println("The length of the string "+str+" is "+len);
	}
}
```

####  2.3. <a name='InputtingConcatenatingComparingStrings'></a>Inputting, Concatenating, Comparing Strings
A major advantage of using string class instead of character array is that you don't need to know the size of the string while declaring it.

Concatenating strings is also easier with the string class. You can concatenate two strings using the '+' operator.

For comparing if two strings are equal , you can either use the relational operators('<' , '>' , '==' , "!="). Another way is using the compare function.
```cpp
##include<bits/stdc++.h>
using namespace std;
int main()
{
  // Input

  string str1;             // Declaring a string
  cin>>str1;               // Taking user input for the string

  int len = str1.length(); // the length() function returns the length of the string
  cout<<"The length of string "<<str1<<" is "<<len<<endl;

  // Concatenating

  string s1 = "Hello " , s2 = "World" , s3;
  s3 = s1 + s2; // Concatenating the strings
  cout<<s3<<endl;

  //Referencing strings elements

  for(int i=0 , n=s3.length() ; i < n ; i++)
  {
    cout<<"Char "<<i+1<<" of s3 is "<<s3[i]<<endl; // Referencing ith element of a string
  }

  // Comparing strings

  string s4 = "aaa" , s5 = "aab"; // s5 is greater than s4

  if(s4 <= s5) cout<<"s4 is less than s5\n"; // Use the <= operator to compare strings instead strcomp()

  if(!(s4.compare(s5)) cout<<"s4 and s5 are not equal\n"; // s4.compare(s5) returns 0 if s4 and s5 are equal

  string s6=""; // declare an empty string

  for(int i=0 ; i < 26 ; i++)
  {
    s6 += (i + 'a'); // Concatenation using compound assignemnt ( += ) also works
  }

  cout<<s6<<endl;
  return 0;
}
```

Java equivalent
```Java
import java.util.*;
public class Solution{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        String str = in.next();
        
        int len = str.length();

        System.out.println("The length of the string "+str+" is "+len);
        
        String s1 = "Hello",s2 = "World",s3;

        s3 = s1 + s2; // Concatenating strings

        System.out.println(s3);
        
        for(int i=0;i<s3.length();i++){
            // ith element 
            System.out.println("Char at "+(i+1)+" of s3 is "+s3.charAt(i));
        }
        
        String s4 = "aaa" , s5 = "aab";
        
        // comparing using compareTo()
        
        if(s5.compareTo(s4)>0)
            System.out.println("s5 greater than s4");
        else if(s5.compareTo(s4)<0)
            System.out.println("s5 less than s4");
        else
            System.out.println("s5 equal to s4");
            
        String s6 = "";

        for(int i=0;i<26;i++){
            s6 += (char)(i+'a'); // shorthand operator +=
        }

        System.out.println(s6);
    }
}
```
####  2.4. <a name='Vectors'></a>Vectors

A vector is a container i.e. something you can use to store many elements together. It is similar to an array but with added functionalities.

You don't need to know the size of a vector when declaring it. You can also get a vector's length and resize a vector at runtime.


```cpp
##include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v1(10); // this is a declaration for a vector of integers that has size 10. Note that unlike an array declaration, we use ()
                      // instead of []
  for(int i=0 ; i < 10 ; i++)
    v1[i] = i;
  }

  for(int i=0 ; i < 10 ; i++)
  {
    cout<< v1[i] << " ";
  }
  cout<< endl;

  vector<int> v2; // Here, we are not declaring the size of the vector

  int len = v2.size(); // v.size() returns the size of the vector
  cout<<"Initial size of v2 is "<<len<<endl; // Output is 0, because we have not specified the size of the vector yet.

  {
    for(int i=0 ; i < 15 ; i++)
    v2.push_back(i); // Since v[i] is not a valid index yet, we use the push_back() function to insert an element into the vector
  }

  for(int i=0 ; i < 15 ; i++) cout<<v2[i]<<" ";
  cout<<endl;
  int len1 = v1.size() , len2 = v2.size();
  cout<<"Sizes of the two vectors are "<<len1<<" and "<<len2<<endl;

}
return 0;
```

You can use the empty() function to check if a vector is empty.

The resize function can be sued to resize a vector one it is filled upto its current capacity.

The clear function clears the vector.

```cpp
##include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<string> v1(10,"Hello"); // Declaring a vector of of size 10 that holds strings.Each index in the vector
                                 // is initialized to the value "Hello"
  for(int i=0 , n = v1.size() ; i<10 ; i++)
  {
    cout<<"Replacing "<<v1[i]<<" with ";
    v1[i] = "World";
    cout<<v1[i]<<endl;
  }

  v1.resize(20); // Resizing the vector to 20

  for(int i=10 ; i<19 ; i++) v1[i] = "Hello";
  vector<string> v2 = v1 ; // Here v2 is initialized with the same size and values as v1

  for(int i=0 , n = v2.size() ; i<n ; i++) cout<<v2[i]<<" ";
  cout<<endl;

  if(!v1.empty()) cout<<"Length of v2 is "<<v2.size()<<endl; // v1.empty() returns 1/true if the vector is empty, else it returns 0/false

  v2.clear(); // After clearing the vector v2 ,  the outut of v.size() is 0

  cout<<"Size of v2 after clearing is "<<v2.size()<<endl;
  return 0;
}
```

Java equivalent is ArrayLists
```Java
import java.util.*;
public class Solution{
    public static void main(String[] args){
        ArrayList<Integer> v1 = new ArrayList<Integer>(Arrays.asList(new Integer[10]));

        for(int i=0;i<10;i++){
            v1.set(i,i);
        }

        for(int i=0;i<10;i++){
            System.out.println(v1.get(i));
        }

        ArrayList<Integer> v2 = new ArrayList<Integer>();

        System.out.println("Initial size is "+v2.size());

        for(int i=0;i<15;i++){
            v2.add(i); // cannot use set() as they cannot be indexed yet
        }

        for(int i=0;i<15;i++){
            System.out.println(v2.get(i));
        }

        System.out.println("Length of v1 : "+v1.size()+" and Length of v2 : "+v2.size());

        v2.ensureCapacity(50); // resize to 50

        if(!v2.isEmpty()) // isEmpty() function to check if arraylist is empty
            System.out.println("Size of v2 is "+v2.size());

        v2.clear(); // clear arraylist

        System.out.println("Size of v2 is now : "+v2.size());
    }
}
```
##  3. <a name='SomeUsefulFunctions'></a>Some Useful Functions

####  3.1. <a name='Sorting'></a>Sorting

C++ provides the sort(pointer_to_first_ele , pointer_to_last_ele) function to sort arrays and vectors. The sort function is more efficient than sorting algorithms like bubble sort. It is also easier to use.

```cpp
  int a[5] = {5 , 4 , 3 , 2 , 1};
  sort(a , a + n); // to sort an array we pass the pointer to the first and last element of the array

  vector<int> v(10);

  for(int i=10 ; i > -1 ; i--) v[i] = i;
  sort(v.begin() , v.end()) // Here also, we pass the pointer to the first and last element in the vector.
                           // v.begin() returns the pointer to the first element and v.end() returns the pointer to the last element
```
Java equivalent is using Arrays.sort() and Collections.sort()
```Java
   int a[] = {5 , 4 , 3 , 2 , 1};

   Arrays.sort(a); // sort an array

   for(int i=0;i<5;i++)
       System.out.println(a[i]);

   ArrayList<Integer> v = new ArrayList<Integer>();

   for(int i=4;i>=0;i--) v.add(i);

   Collections.sort(v); // sort an arraylist

   for(int i=0;i<5;i++)
       System.out.println(v.get(i));
```

####  3.2. <a name='MinMax'></a>Min, Max

The min and max functions can be used to find the minimum and maximum of multiple numbers without using many if else statements.

```cpp
int a=1 , b=2 , c=3 , d=4;
int maximum = max(max(a , b) , max(c , d)); // maximum of four numbers
int minimum = min(min(a , b) , min(c , d)); // minimum of four numbers
```
Java equivalent
```Java
int a = 1,b = 2,c = 3,d = 4;
int maximum = Math.max( Math.max(a,b) , Math.max(c,d) );
int minimum = Math.min( Math.min(a,b) , Math.min(c,d) );
```
To use max(), min() directly you can use static imports
```Java
import static java.lang.Math.*;
```

####  3.3. <a name='FurtherReading'></a>Further Reading
A great place to get started would be geeksforgeeks, links for which are provided below.
* https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
* https://www.geeksforgeeks.org/java-util-package-java/
* [Strings in C++](https://www.geeksforgeeks.org/strings-library-in-cpp-stl/) , [Strings in Java](https://www.geeksforgeeks.org/string-class-in-java/)


##  4. <a name='Recursion'></a>Recursion

Imagine you have to build a robot which can perform a certain task, like add A to B, now you are told to use a unit from an infinite supply of units which can only add and subtract 1 to/from a number provided to it, and also perform logical operations. How will you build a system which adds A to B perfectly.

You'll give both number to the robot, which will pass them to a secondary robot which adds 1 to A and subtract 1 from B and keep passing along until B is 0, and then the final value is returned. Here we don't violate the rules and still get an answer.

With recursion you can breakdown a complex problem into a simpler unit which can be solved by calling the same function again and again till a certain stop condition is reached

```cpp
int add(int a,int b)
{
	if(b==0)				//By the time b becomes 0, a becomes a+b
		return a;			//As a is now a+b it is safe to return the new value
	return add(a+1,b-1);	                //Here the output of the secondary call is returned from primary call
}						//which also applies for that secondary call and further ahead.
```

Recursion is a technique by which a function repeatedly calls itself (Or a different function) to have a effect similar to a loop.

A Recursive function in it's most basic form consists of two parts.
* Base case
* Recursive call

This flow chart shows how a basic recursive function works

![Recursion.png](https://www.programtopia.net/sites/default/files/recursion.png)

######  7.1. <a name='Basecase'></a>Base case
The base case or the terminal case consists of the final step of the function which marks the end of the recursive function.

######  7.2. <a name='Recursivecall'></a>Recursive call

This step usually performs the calculations required and calls a smaller version of the main problem.
This goes on until it reaches the base case.

######  7.3. <a name='Choosingbasecaseandrecursivecall'></a>Choosing base case and recursive call

The choice of the base case and recursive call for your function is really important as these decide how your function works

The recursive call of your function must be such that at each successive recursive call the function reaches closer to your base case, ie after multiple calls to your function, you should eventually reach your base case

The base case of your function decides when your function ends, so your base case should be selected such that your recursive case can never overshoot your base case.

###  4.1. <a name='Examples'></a> Examples
So lets try out a couple of examples on how recursion works
####  4.1.1. <a name='Example1:Fibonacciseries'></a> Example 1: Fibonacci series

The fibonacci series in mathamatics is represented by
F(0) = 1
F(1) = 1
F(x) = F(x-1) + F(x-2)
This problem gives us the perfect example of where to use recursion

This code in c++ would be
```c++
int fibonacci(int x)
{
	if(x == 0 || x == 1)
	    return 1;
        return fibonacci(x - 1) + fibonacci(x - 2);
}
```

The same code in Python would be
```python
def fibonacci(x):
	if x == 0 or x == 1:
		return 1
	return fibonacci(x - 1) + fibonacci(x - 2)
```
The same code in Java would be
```Java
public int fibonacciRecursion(int n)
{
	if(n == 0)
		return 0;
	if(n == 1 || n == 2)
		return 1;
	return fibonacciRecursion(n-2) + fibonacciRecursion(n-1);
}
```

Here ``if(x == 0 || x == 1) `` is the base case and it returns when x = 0 or x = 1 and 
``return fibonacci(x - 1) + fibonacci(x - 2)`` is the recursive call.
We can verify that the recursive call can never go below 1 or 0 as long as the initial input is valid because it is taken care of by the base case thus we never go past the base case.
Also we see that with every call to the function x is getting smaller and thus closer to the base case of 0 or 1.

####  4.1.2. <a name='Example2:Factorials'></a> Example 2: Factorials

The factorial of a number n is equal to n\*(n-1)\*(n-2)...1
ie,

``` F(n) = n*(n-1)*(n-2)...1 ```

Thus the code in c++ for this would be
```c++
int factorial(int x)
{
    if(x <= 1)
	return 1;
    return x*factorial(x - 1);
}
```

Similarly in python this code becomes
```python
def factorial(x):
    if x <= 1:
	return 1
    return x*factorial(x - 1)
```

Similarly in Java the code becomes
```Java
public int factorial(int n)
{    
	if (n == 0)    
		return 1;    
	else    
		return(n * factorial(n-1));    
}
```

Again here ``if(x == 1)`` is the base case and returns when x is 1 and ``return x*factorial(x - 1)``
is the recursive call.
Here too we see that x can never go below 1 as long as the initial input is above 1 and we also notice that with every successive recursive call x gets closer to 1.

## Time Complexities

#### Introduction

Thinking of an efficient algorithm to solve a problem is one of the hardest tasks in competitive programming. Assessing your algorithm's efficiency is of upmost importance. This is where Time complexities are useful. They help us decide whether certain algorithms can solve the problem within the required time and space constraints. Time Complexity is one of the most important metrics of comparison for Algorithms.

For example consider two different sorting algorithms, bubble and quick sort. [Bubble Sort](https://www.geeksforgeeks.org/bubble-sort/) has a time complexity of O(N<sup>2</sup>) whereas [Quick Sort](https://www.geeksforgeeks.org/quick-sort/) has a complexity of O(NlogN). Thus, we conclude that quick sort is more efficient than bubble sort. We will get into Big O notation later in this tutorial.

A lot of you must have faced an issue by now where your code passes some of the test cases, and some you get an error called TLE (Time Limit Exceeded). This is caused by non-efficient code. Every testcase comes with a time limit. Your code needs to produce an output for the given test case in that time limit for it to pass the case. If you encounter this error you need to make your code more efficient. Let us look at a sample code to understand complexities better.

#### A Sample:

```cpp
int func(int n)
{
    int sum=0;              //line 1
    for(int i=0;i<n;i++)    //line 2
        sum += i;           //line 3
    return sum;             //line 4
}
```
Let us now compute the number of times a statement is executed for each call of the function.

Line 1 and Line 4 are single statements and hence execute in one unit of time each.

Line 2 has a for loop which executes two statements, a check statement and an increment statement. The check statement runs exactly n+1 times (It stops once the condition is false). The increment statement runs for exactly n times. This line contributes 2n + 1 to the total runtime.

Line 3 has two operations, addition an assignment. Each of these operations takes 1 unit time each. Since the loop runs n times, this line contributes 2n to the total runtime.

So, the total runtime can be written as a function of the input size n. The function would be

f(n) = 4n + 3

We can see that the function is linear with respect to the input size n.

Similarly now lets look at Bubble Sort:

```cpp
void bubbleSort(int arr[], int n)  
{  
    int i, j;                               //line1
    for (i = 0; i < n-1; i++)               //line2
    {                                       //line3
        for (j = 0; j < n-i-1; j++)         //line4
        {                                   //line5
            if (arr[j] > arr[j+1])          //line6
                swap(&arr[j], &arr[j+1]);   //line7
        }                                   //line8
    }  
}
```

Here *n* is the size of the array.

Let us now compute the number of times a statement is executed for each call of the function.

Line 1 is a single statement and hence executes in one unit of time each.

Line 2 has a for loop which executes another for loop. So for every execution of the first for loop, the second for loop is executed. The second for loop, at most will run n-1 times for each execution of the first for loop.

The first for loop is executed n times. For each time the first for loop is executed, the second for loop, at most, is executed n-1 times.

Thus the total runtime can be written as a function of the array size squared, i.e. n<sup>2</sup>.

#### Big O notation

Big O notation is used in Computer Science to describe the performance or complexity of an algorithm. Big O specifically describes the worst-case scenario, and can be used to describe the execution time required by an algorithm.

We use the Big O notation for analyzing algorithms because it gives us an upper bound, and we are mostly concerned with the worst case scenarios.

Let us look at the most common complexities to understand Big O better.

###### O(1) or Constant Time

This is when the algorithm runs in constant time, i.e doesn't depend on the size of the input.

```cpp
int start = 10;
int end = 20;
int mid;
mid = (start + end)/2;
```

###### O(n) or Linear Time

This is when the runtime of the algorithm grows linearly with the size of the input. For example,

```cpp
for(int i=0;i<n;i++)
    cout << i << endl;
```

###### Ο(N<sup>2</sup>) or Quadratic Time 

This is when the runtime of the algorithm grows quadratically with respect to the size of the input. For example,

```cpp
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
        cout << i+j << endl;
}
```
###### Ο(logN) or Logarithmic Time

This is when the algorithm breaks down into two subproblems. For example, the binary search algorithm follows Ο(log N) complexity.

```cpp
int binsearch(int arr[],int low,int high)
{
    int mid = (low + high)/2;
    if(item == arr[mid])
        return mid;
    if(item > arr[mid])
        return binsearch(arr,mid+1,high);
    return binsearch(arr,low,mid-1);
}
```

The logarithm is base 2, i.e, log<sub>2</sub>N

#### Further Reading
1. Chapter 1,3 of Introduction to Algorithms, Second Edition, by Thomas Cormen, Charles Leiserson, Ronald Rivest, Clifford Stein.
2. https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-1/
3. https://www.cs.cmu.edu/~adamchik/15-121/lectures/Algorithmic%20Complexity/complexity.html
4. https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/tutorial/
5. http://bigocheatsheet.com/ - contains complexities of standard sorting algorithms and standard data structures

## Fast IO for Competitive Programming

In competitive programming, it is important to read input as fast as possible so we save valuable time.

You must have seen various problem statements saying: “Warning: Large I/O data, be careful with certain languages (though most should be OK if the algorithm is well designed)”. Key for such problems is to use Faster I/O techniques.

For such problems, the I/O data is extremely large and what we require is fast IO.

###### C++

Most of you who use C++ would be using cin-cout for IO. However you might find it surprising to know that scanf and printf are actually faster than cin-cout. In fact, scanf is actually almost 5 times faster. You can check out some comparisons [here](https://www.geeksforgeeks.org/cincout-vs-scanfprintf/).

This is because the C++ library includes the C library, it needs to support the C and C++ I/O at the same time. To synchronize the buffers, cin is synchronizing itself with the underlying C-library’s stdio buffer. As a result, it runs slightly slower.
Although it’s slower, it lets you freely mix C++ and C I/O. However there's a work around for this.

```cpp
ios_base::sync_with_stdio(false); //line1
cin.tie(NULL);                    //line2
```
Line 1 toggles on or off the synchronization of all the C++ standard streams with their corresponding standard C streams if it is called before the program performs its first input or output operation. Adding ios_base::sync_with_stdio (false); (which is true by default) before any I/O operation avoids this synchronization. It is a static member of function of std::ios_base.

tie() is a method which simply guarantees the flushing of std::cout before std::cin accepts an input. This is useful for interactive console programs which require the console to be updated constantly but also slows down the program for large I/O. The NULL part just returns a NULL pointer.

Just add these two lines at the beginning of main() and you are good to go!

###### Java

Most of you who use Java would be using the Scanner class for IO. It is easy to implement and requires a lot less typing, however it is also very slow. This is because scanner invloves parsing of tokens. What this means is that Scanner breaks what you parse into tokens, the criteria being whitespaces, tabs, new lines, etc.

There are a few workarounds, check them out:

- [Fast I/O in Java for Competitive Programming](https://www.geeksforgeeks.org/fast-io-in-java-in-competitive-programming/)

We would recommend you make a practice of using Fast IO methods. Sometimes it can happen that no warning is provided and you would be left wondering why your code is not working.

## Basic Mathematics for Competitive Programming

## Greatest Common Divisor and Least Common Multiple

The GCD (Greatest Common Divisor) of two numbers is defined as the largest integers that divide both the numbers. For example, 2 is the GCD of 4 and 6. From this concept, follows something called co-primes. Two numbers are said to be co-prime if their GCD is 1. For example, 3 and 5 are co-primes because their GCD is 1. 

LCM (Least Common Multiple) is defined as the smallest integer that is divisible by both the numbers. For example, 10 is the LCM of 2 and 5. 

#### Euclid's algorithm

This is one of the most famous algorithms for computing gcd of two numbers. 
Consider two numbers a and b. The procedure of Euclid's algorithm can be broken down into a sequence of equations,

![](https://wikimedia.org/api/rest_v1/media/math/render/svg/8b9f7b38708371bce2fee00c52ba4e5138a28d52)

If a is smaller than b, the first step of the algorithm swaps the numbers. For example, if a < b, the initial quotient is zero and the remainder is a. Thus, r<sub>k</sub> is smaller than it's predecessor r<sub>k-1</sub>. 

Since the remainders decrease with every iteration, a remainder r<sub>N</sub> must eventually equal 0, at which point this algorithm stops. The final non-zero remainder r<sub>N-1</sub> is the greatest common divisor for a and b.

g = gcd(a, b) = gcd(b, r<sub>0</sub>) = gcd(r<sub>0</sub>, r<sub>1</sub>) = … = gcd(r<sub>N−2</sub>, r<sub>N−1</sub>) = r<sub>N−1</sub>.

For proof of the algorithm, visit [here](https://www.whitman.edu/mathematics/higher_math_online/section03.03.html).

A simple implementation of Euclid's GCD algorithm in C++ would be,

```cpp
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
```

Once we calculate the GCD of two numbers, we can calculate the LCM very easily. 

```cpp
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
```

## Combinatorics

Combinatorics is the branch of mathematics that deals with combinations of elements belonging to a finite set in accordance with some constraints.

######## Principle of Addition

The principle of addition states if a one task can be one done in *m* ways and another task which is **mutually exclusive** of the first task can be done in *n* ways, then the the number of possible ways in which either can be done is *m+n*.

######## Principle of Multiplication

The principle of multiplication states that if one task can be done in *m* ways and another task which is **independent** of the first task can be done in *n* ways, after the first task has been performed, then the number of possible ways in which both the tasks can be done is *m×n*.

######## Combinations of Objects

Number of ways in which you can select *n* objects taken *r* at a time. (Order does not matter.)

<sup>*n*</sup>*C*<sub>*r*</sub> *= n! / r! (n - r)!*

######## Permutations of Objects

Number of ways you can order *n* objects taken *r* at a time. (Order matters.)

<sup>*n*</sup>*P*<sub>*r*</sub> *= n! / (n - r)!*


######## Stars and Bars

**Theorem one**

For any pair of positive integers *n* and *k*, the number of *k*-tuples of positive integers whose sum is *n* is equal to the number of *(k − 1)*-element subsets of a set with *n − 1* elements. 

Let us say that we need to distribute 7 cookies to 4 kids such that they all have at least 1. We can represent it as stars and bars.

					* * * | * | * | * *

Here the 4 kids get 3, 1, 1 and 2 cookies respectively. we can say that we can place *(k-1)* bars between *(n-1)* spaces between the stars. Thus, the answer is <sup>6</sup>*C*<sub>3</sub>.

This can be generalised as <sup>*(n-1)*</sup>*C*<sub>*(k-1)*</sub>.

**Theorem two**

For any pair of positive integers *n* and *k*, the number of *k*-tuples of non-negative integers whose sum is *n* is equal to the number of multisets of cardinality *k − 1* taken from a set of size *n + 1*.

Let us say that we need to distribute 7 cookies among 4 kids where each kid may get none or more cookies. We can represent this situation using stars and bars as well.

					* * * | | * * | * *

Here the 4 kids get 3, 0, 2 and 2 cookies respectively. So there are 10 symbols out of which 3 have to be bars. Thus, the answer is <sup>10</sup>*C*<sub>3</sub>.

This can be generalised as <sup>*(n+k-1)*</sup>*C*<sub>*(k-1)*</sub>.

######## Properties of Combinations

![Combinations Properties](https://www.studypage.in/images/maths/algebra/combination-properties.jpg)

## Bit Manipulation

Working on bytes, or data types comprising of bytes like ints, floats, doubles or even data structures which stores a large number of bytes is normal for a programmer. In some cases, a programmer needs to go beyond this - that is to say that in a deeper level where the importance of bits is realized.

Operations with bits are used in Data compression (data is compressed by converting it from one representation to another, to reduce the space), Exclusive-Or Encryption (an algorithm to encrypt the data for safety issues). In order to encode, decode or compress files we have to extract the data at the bit level. Bitwise Operations are faster and closer to the system and sometimes optimize the program to a good level.

We all know that 1 byte comprises of 8 bits and an integer or character can be represented using bits in computers, which we call its binary form(contains only 1 or 0) or in its base 2 form.

```
Example:
1) 14 = {1110}
= 1 * 23 + 1 * 22 + 1 * 21 + 0 * 20
= 14.

2) 20 = {10100}
= 1 * 24 + 0 * 23 + 1 * 22 + 0 * 21 + 0 * 20
= 20.
```

For characters, we use ASCII representation, which is in the form of integers which again can be represented using bits as explained above.

#### Bitwise Operators

There are different bitwise operations used in the bit manipulation. These bit operations operate on the individual bits of the bit patterns. Bit operations are fast and can be used in optimizing time complexity. Some common bit operators are:

**NOT ( ~ )**: Bitwise NOT is a unary operator that flips the bits of the number i.e., if the ith bit is 0, it will change it to 1 and vice versa. Bitwise NOT is nothing but simply the one’s complement of a number. Let's take an example.

N = 5 = (101)<sub>2</sub>
~N = ~5 = ~(101)<sub>2</sub> = (010)<sub>2</sub> = 2

**AND ( & )**: Bitwise AND is a binary operator that operates on two equal-length bit patterns. If both bits in the compared position of the bit patterns are 1, the bit in the resulting bit pattern is 1, otherwise 0.

A = 5 = (101)<sub>2</sub> , B = 3 = (011)<sub>2</sub> A & B = (101)<sub>2</sub> & (011)<sub>2</sub>= (001)<sub>2</sub> = 1

**OR ( | )**: Bitwise OR is also a binary operator that operates on two equal-length bit patterns, similar to bitwise AND. If both bits in the compared position of the bit patterns are 0, the bit in the resulting bit pattern is 0, otherwise 1.

A = 5 = (101)<sub>2</sub> , B = 3 = (011)<sub>2</sub> <br>
A | B = (101)<sub>2</sub> | (011)<sub>2</sub> = (111)<sub>2</sub> = 7

**XOR ( ^ )**: Bitwise XOR also takes two equal-length bit patterns. If both bits in the compared position of the bit patterns are 0 or 1, the bit in the resulting bit pattern is 0, otherwise 1.

A = 5 = (101)<sub>2</sub><br> B = 3 = (011)<sub>2</sub><br><br>
A ^ B = (101)<sub>2</sub> ^ (011)<sub>2</sub> = (110)<sub>2</sub> = 6

**Left Shift ( << )**: Left shift operator is a binary operator which shift some number of bits, in the given bit pattern, to the left and append 0 at the end. Left shift is equivalent to multiplying the bit pattern with  ( if we are shifting k bits ).

1 << 1 = 2 = 2<sup>1</sup><br>
1 << 2 = 4 = 2<sup>2</sup><br>
1 << 3 = 8 = 2<sup>3</sup><br>
1 << 4 = 16 = 2<sup>4</sup><br>
…<br>
1 << n = 2<sup>n</sup><br>

**Right Shift ( >> )**: Right shift operator is a binary operator which shift the some number of bits, in the given bit pattern, to the right and append 1 at the end. Right shift is equivalent to dividing the bit pattern with 2k ( if we are shifting k bits ).

4 >> 1 = 2<br>
6 >> 1 = 3<br>
5 >> 1 = 2<br>
16 >> 4 = 1<br>

![Table](https://he-s3.s3.amazonaws.com/media/uploads/cb985c2.png)

> Bitwise operators are good for saving space and sometimes to cleverly remove dependencies.

###### **How to check if a given number is a power of 2 ?**

Consider a number N and you need to find if N is a power of 2. A simple solution to this problem is to repeated divide N by 2 if N is even. If we end up with a 1 then N is a power of 2, otherwise not. There is a special case also. If N = 0 then it is not a power of 2.
```cpp
 bool isPowerOfTwo(int x)
    {
        if(x == 0)
            return false;
        else
        {
            while(x % 2 == 0) x /= 2;
            return (x == 1);
            }
    }
```

The above function will return true if x is a power of 2, otherwise false.
The time complexity of the above code is O(logN).

The same problem can be solved using bit manipulation. Consider a number x that we need to check for being a power for 2. Now think about the binary representation of (x-1). (x-1) will have all the bits same as x, except for the rightmost 1 in x and all the bits to the right of the rightmost 1.
Let, x = 4 = (100)<sub>2</sub><br>
x - 1 = 3 = (011)<sub>2</sub><br>
Let, x = 6 = (110)<sub>2</sub><br>
x - 1 = 5 = (101)<sub>2</sub><br>

It might not seem obvious with these examples, but binary representation of (x-1) can be obtained by simply flipping all the bits to the right of rightmost 1 in x and also including the rightmost 1.

Now think about x & (x-1). x & (x-1) will have all the bits equal to the x except for the rightmost 1 in x.

Let, x = 4 = (100)<sub>2</sub><br>
x - 1 = 3 = (011)<sub>2</sub><br>
x & (x-1) = 4 & 3 = (100)<sub>2</sub> & (011)<sub>2</sub> = (000)<sub>2</sub><br>
Let, x = 6 = (110)<sub>2</sub><br>
x - 1 = 5 = (101)<sub>2</sub><br>
x & (x-1) = 6 & 5 = (110)<sub>2</sub> & (101)<sub>2</sub> = (100)<sub>2</sub><br>

Properties for numbers which are powers of 2, is that they have one and only one bit set in their binary representation. If the number is neither zero nor a power of two, it will have 1 in more than one place. So if x is a power of 2 then x & (x-1) will be 0.

```cpp
  bool isPowerOfTwo(int x)
    {
        // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
        return (x && !(x & (x - 1)));
    }
```

###### **Count the number of ones in the binary representation of the given number**

The basic approach to evaluate the binary form of a number is to traverse on it and count the number of ones. But this approach takes log2N of time in every case.

Why log<sub>2</sub>N ?
As to get a number in its binary form, we have to divide it by 2, until it gets 0, which will take log<sub>2</sub>N of time.

With bitwise operations, we can use an algorithm whose running time depends on the number of ones present in the binary form of the given number. This algorithm is much better, as it will reach to logN, only in its worst case.
```cpp
    int count_one (int n)
        {
            while( n )
            {
            n = n&(n-1);
               count++;
            }
            return count;
    }
```
Why this algorithm works ?
As explained in the previous algorithm, the relationship between the bits of x and x-1. So as in x-1, the rightmost 1 and bits right to it are flipped, then by performing x&(x-1), and storing it in x, will reduce x to a number containing number of ones(in its binary form) less than the previous state of x, thus increasing the value of count in each iteration.

Example:
n = 23 = {10111}<sub>2</sub> .
1. Initially, count = 0.
2. Now, n will change to n&(n-1). As n-1 = 22 = {10110}<sub>2</sub> , then n&(n-1) will be {10111}<sub>2</sub> & {10110}<sub>2</sub>, which will be {10110}<sub>2</sub> which is equal to 22. Therefore n will change to 22 and count to 1.
3. As n-1 = 21 = {10101}<sub>2</sub> , then n&(n-1) will be {10110}<sub>2</sub> & {10101}<sub>2</sub>, which will be {10100}<sub>2</sub> which is equal to 20. Therefore n will change to 20 and count to 2.
4. As n-1 = 19 = {10011}<sub>2</sub> , then n&(n-1) will be {10100}<sub>2</sub> & {10011}<sub>2</sub>, which will be {10000}<sub>2</sub> which is equal to 16. Therefore n will change to 16 and count to 3.
5. As n-1 = 15 = {01111}<sub>2</sub> , then n&(n-1) will be {10000}<sub>2</sub> & {01111}<sub>2</sub>, which will be {00000}<sub>2</sub> which is equal to 0. Therefore n will change to 0 and count to 4.
6. As n = 0, the the loop will terminate and gives the result as 4.

Complexity: O(K), where K is the number of one's present in the binary form of the given number.

###### **Check if the ith bit is set in the binary form of the given number**

To check if the i<sup>th</sup> bit is set or not (1 or not), we can use AND operator. How?

Let’s say we have a number N, and to check whether it’s ith bit is set or not, we can AND it with the number 2<sup>i</sup>. The binary form of 2<sup>i</sup> contains only i<sup>th</sup> bit as set (or 1), else every bit is 0 there. When we will AND it with N, and if the i<sup>th</sup> bit of N is set, then it will return a non zero number ( 2<sup>i</sup> to be specific), else 0 will be returned.

Using Left shift operator, we can write 2<sup>i</sup> as 1 << i . Therefore:
```cpp
 bool check (int N)
    {
        if( N & (1 << i) )
            return true;
        else
            return false;
    }
```

Example:
Let’s say N = 20 = {10100}<sub>2</sub>.<br> Now let’s check if it’s 2nd bit is set or not(starting from 0).<br> For that, we have to AND it with 22 = 1 << 2 = {100}<sub>2</sub>.<br><br>
{10100}<sub>2</sub> & {100}<sub>2</sub> = {100}<sub>2</sub> = 22 = 4(non-zero number), which means it’s 2nd bit is set.

###### **How to generate all the possible subsets of a set?**

A big advantage of bit manipulation is that it can help to iterate over all the subsets of an N-element set. As we all know there are **2N** possible subsets of any given set with N elements. What if we represent each element in a subset with a bit. A bit can be either 0 or 1, thus we can use this to denote whether the corresponding element belongs to this given subset or not. So each bit pattern will represent a subset.

Consider a set A of 3 elements.
A = {a, b, c}

Now, we need 3 bits, one bit for each element. 1 represent that the corresponding element is present in the subset, whereas 0 represent the corresponding element is not in the subset. Let’s write all the possible combination of these 3 bits.

0 = (000)<sub>2</sub> = {}<br>
1 = (001)<sub>2</sub> = {c}<br>
2 = (010)<sub>2</sub> = {b}<br>
3 = (011)<sub>2</sub> = {b, c}<br>
4 = (100)<sub>2</sub> = {a}<br>
5 = (101)<sub>2</sub> = {a, c}<br>
6 = (110)<sub>2</sub> = {a, b}<br>
7 = (111)<sub>2</sub> = {a, b, c}<br>

Pseudo Code:
```python
possibleSubsets(A, N):
        for i = 0 to 2^N:
            for j = 0 to N:
                if jth bit is set in i:
                    print(A[j])
            print("\n")
```
**Implementation:**

```cpp
void possibleSubsets(char A[], int N)
{
    for(int i = 0;i < (1 << N); ++i)
    {
        for(int j = 0;j < N;++j)
             if(i & (1 << j))
                 cout << A[j] << ‘ ‘;
        cout << endl;
    }
}
```

#### **Tricks with Bits:**

###### x ^ ( x & (x-1))
Returns the rightmost 1 in binary representation of x.

As explained above, (x & (x - 1)) will have all the bits equal to the x except for the rightmost 1 in x. So if we do bitwise XOR of x and (x & (x-1)), it will simply return the rightmost 1. Let’s see an example.

x = 10 = (1010)<sub>2</sub><br>
x & (x-1) = (1010)<sub>2</sub> & (1001)<sub>2</sub> = (1000)<sub>2</sub><br>
x ^ (x & (x-1)) = (1010)<sub>2</sub> ^ (1000)<sub>2</sub> = (0010)<sub>2</sub><br>

###### x & (-x)

Returns the rightmost 1 in binary representation of x

(-x) is the two’s complement of x. (-x) will be equal to one’s complement of x plus 1.
Therefore (-x) will have all the bits flipped that are on the left of the rightmost 1 in x. So x & (-x) will return rightmost 1.

x = 10 = (1010)<sub>2</sub>
(-x) = -10 = (0110)<sub>2</sub>
x & (-x) = (1010)<sub>2</sub> & (0110)<sub>2</sub> = (0010)<sub>2</sub>

###### x | (1 << n) 

Returns the number x with the nth bit set.

(1 << n) will return a number with only nth bit set. So if we OR it with x it will set the nth bit of x.<br>
x = 10 = (1010)<sub>2</sub> <br>
n = 2<br>
1 << n = (0100)<sub>2</sub><br>
x | (1 << n) = (1010)<sub>2</sub> | (0100)<sub>2</sub> = (1110)<sub>2</sub><br>

#### Applications of bit operations

1) They are widely used in areas of graphics, especially **XOR(Exclusive OR)** operations.
2) They are widely used in the embedded systems, in situations, where we need to set/clear/toggle just one single bit of a specific register without modifying the other contents. We can do OR/AND/XOR operations with the appropriate mask for the bit position.
3) Data structure like n-bit map can be used to allocate n-size resource pool to represent the current status.
4) Bits are used in networking, framing the packets of numerous bits which is sent to another system generally through any type of serial interface.

#### Links

1) Creative use of Bitwise operators - [Link Here!](https://snook.ca/archives/javascript/creative-use-bitwise-operators)

## Primality and Sieve of Eratosthenes

This is one of the most important concepts that you'll encounter in the world of competitive programming. 

> A number is said to be prime if it's divisible only by 1 and itself. 

For example, 2,3 and 5 are some prime numbers. 
We'll now look into ways to determine whether a number is prime or not. 

One of the most naive algorithms to find out if a number n is prime of not would be to run a loop from 2 to n-1, checking if any number divides the number. If any number does divide n, it's a composite number. Else it's a prime. A simple implementation in C++ would be,

```cpp
bool isPrime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}
```

But there are ways to make this faster. This loop doesn't need to run until n-1. We can derive that there will be no factor greater than n/2(excluding itself). Hence the loop can run until n/2 and still give us the right answer.

For example, the factors of 10 are,
1 2 3 5 10

We can see that the largest factor excluding 10 is 5. The implementation in C++ would look something like,

```cpp
bool isPrime(int x)
{
    for(int i=2;i<x/2;i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}
```


We can still make this faster. Notice that both the above implementations still visit all the possible proper factors. But to test whether a number's primality, we don't need to check for all possible factors. Consider two proper factors a and b of a number n, such that,
> a*b = n

We can prove by contradiction that one of them will be lesser than sqrt(n). If 

![](http://latex2png.com/output//latex_0739b813dad718abc9cdac0fed26c883.png)

This contradicts our assumption that a*b = n. Hence one of them has to be less than sqrt(n). Using this theorem, we can reduce the loop even further to check until sqrt(n) for any possible divisors. The implementation would be,

```cpp
bool isPrime(int x)
{
    for(int i=0;i*i<=x;i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}
```

Notice that in this implementation, we hit only half the number of proper divisors.  
There are many more algorithms for primality test like Fermat's little theorem, Miller-Rabin test, Solovay-Strassen. But we will not look into these just yet.

#### The Sieve

In mathematics, the **Sieve of Eratosthenes** is a very simple algorithm of finding all prime numbers up to a given limit.

In this algorithm, we start from the number 2 and keep marking the composites which are the multiples of a prime. For example, if we were trying to find the primes below 11. Let the flag array be initialized to zero. The flag array signifies the compositeness of each number. It is set to 1 if it is a composite number, otherwise zero. 

| Iteration | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | Discovering | 
|:---------:|---|---|---|---|---|---|---|---|---|---|----|-------------|
| 1         | 1 | 1 | 0  | 0  | 1  | 0  | 1  | 0  | 1  | 0  | 1 | 2 |
| 2         | 1 | 1 | 0  | 0  | 1  | 0  | 1  | 0  | 1  | 1  |  1  | 3 |
| 3         | 1 | 1 | 0  | 0  | 1  | 0  | 1  | 0  | 1  | 1  |  1  | 4 |
| 4         | 1 | 1 | 0  | 0  | 1  | 0  | 1  | 0  | 1  | 1  |  1  | 5 |
| 5         | 1 | 1 | 0  | 0  | 1  | 0  | 1  | 0  | 1  | 1  |  1  | 6 |
| 6         | 1 | 1 | 0  | 0  | 1  | 0  | 1  | 0  | 1  | 1  |  1  | 7 |
| 7         | 1 | 1 | 0  | 0  | 1  | 0  | 1  | 0  | 1  | 1  |  1  | 8 |
| 8         | 1 | 1 | 0  | 0  | 1  | 0  | 1  | 0  | 1  | 1  |  1  | 9 |
| 9         | 1 | 1 | 0  | 0  | 1  | 0  | 1  | 0  | 1  | 1  |  1  | 10 |


As you can notice that after iteration 1, all numbers which are the multiples of 2 have been set to 1, implying that they are composite numbers. When we move to iteration 2, all multiples of 3 have been marked composite. Notice that we do not change the mark of 2 and 3, since they weren't multiples of any smaller number, thus implying that they are primes. Once all the numbers have been visited once, we loop through the flag array and filter out the numbers with flag value set to 0. This gives us all the primes in the range. For example, in this case, the primes are,

2 3 5 7

The following animation shows the marking for finding the primes within 121. 

![](https://upload.wikimedia.org/wikipedia/commons/b/b9/Sieve_of_Eratosthenes_animation.gif)

Let's look into a simple implementation of the sieve in C++.
```cpp
//Finding all primes within the range [1,n)
void sieve(int n)
{
    vector<int> flag(n,0);
    flag[0] = flag[1] = 1;              //Setting 0 and 1 as composites.
    //Finding the primes.
    for(int i=2;i<n;i++)                //Running a loop from 2 to n-1.
    {
        if(flag[i]==0)                  //Found a prime.
        {
            for(int j=2*i;j<n;j+=i)     //looping through the multiples of the prime.
                flag[j] = 1;            //Setting flag to composite.
        }
    }
    //Printing the primes.
    for(int i=0;i<n;i++)
    {
        if(flag[i]==0)
            cout << i << " ";
    }
    cout << endl;
}
```

## Modular Arithmetic

Modular Arithmetic is another important concept in the field of computer
science. For example, we use modular arithmetic to manage the problem of
overflow in data types. To fully understand modular arithmetic, we'll define a
relation on the set of integers that is compatible with operations addition,
subtraction and multiplication. The relation can be defined as,

```
a ≡ b (mod n)
```

The number n is defined as the modulus of congruence. The congruence relation
can be written as,

```
a = kn+ b,
```

b need not be the remainder of the division of a by n. More precisely, what the
above statement asserts is that a and b have the same remainder when divide by
n. That is,

```
a = pn + r,

b = qn + r,
```

Subtracting both the equations,

```
a - b = kn
```

For example,

```
38 ≡ 14 (mod 12)

```

This asserts that both 38 and 14 give us the same remainder when divided by 12.
Now that we have defined what the relation is, let's define some of the
important properties of this relation.

-   Reflexivity : In mathematics, a binary relation R over a set X is reflexive
    if it relates every element of X to itself. Formally, this may be written ∀x
    ∈ X : x R x, or as I ⊆ R where I is the identity relation on X.
-   Symmetry : An example is the relation "is equal to", because if a = b is
    true then b = a is also true. Formally, a binary relation R over a set X is
    symmetric if and only if:
    ```
    ∀a, b ∈ X(aRb ⟺ bRa)
    ```

*   Transitivity : a relation between three elements such that if it holds
    between the first and second and it also holds between the second and third
    it must necessarily hold between the first and third

Some properties to note :

1.  if a+b = c, then a (mod N) +b (mod N) ≡ c (mod N)
2.  if a ≡ b (mod N), then a + k (mod N) = b + k (mod N) for any integer k.
3.  if a = b (mod N) and c = d (mod N), then a + c ≡ b + d (mod N)
4.  if a ≡ b (mod N), then -a ≡ -b (mod N)
5.  [Modular Exponentiation](https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/)
    , you may find the derivation
    [here](https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/fast-modular-exponentiation).

## Modular Inverse

What is a modular inverse?

In modular arithmetic we do not have a division operation. However, we do have
modular inverses.

-   The modular inverse of A (mod C) is A^-1
-   (A _ A^-1) ≡ 1 (mod C) or equivalently (A _ A^-1) mod C = 1
-   Only the numbers coprime to C (numbers that share no prime factors with C)
    have a modular inverse (mod C)

How to find the modular inverse?

###### A naive method of finding a modular inverse for A (mod C) is:

step 1. Calculate A \* B mod C for B values 0 through C-1

step 2. The modular inverse of A mod C is the B value that makes A \* B mod C =
1

Note that the term B mod C can only have an integer value 0 through C-1, so
testing larger values for B is redundant.

Check out the implementation
[here](https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/)

###### A better method would be to use Fermat's little theorem

Fermat’s little theorem states that if p is a prime number, then for any integer
a, the number a^p – a is an integer multiple of p.

We can use this theorem to calculate the modular inverse,

a^(m-1) ≡ 1 (mod m)

If we multiply both sides with a^(-1), we get

a^(-1) ≡ a^(m-2) (mod m)

Check out the implementation
[here](https://www.geeksforgeeks.org/fermats-little-theorem/)

## Ad Hoc Problems

Competitive programming problems are generally divided into a number categories,
each requiring a different skill set, algorithm, or data structure to solve. One
subdivision of programming problem topics contains problems for which there
exists no general technique or algorithm, i.e. no well-studied solution. These
are known as ad-hoc problems.

Each ad-hoc problem is unique, and requires a specialized approach. Some
competitive programmers consider ad-hoc problems to be the easiest type of
problem. In reality, ad-hoc problems can be easy or hard! For beginners just
starting to code competitively, it may be useful to practice lots of these
problems.

Here is a good source of ad-hoc problems to practice
with:[Codechef](codechef.com/tags/problems/ad-hoc). For each problem, first try
to "pseudocode" (planning your solution on paper in non-code words) and solve
independently. If you find yourself stuck on a problem for longer than several
hours, it may be helpful to consult the solution in order to thoroughly
understand the general approach and then code it.

## Kadane's algorithm and prefix sum

A really common problem encountered in competitive programming can be solved
using the concept of
[prefix sum](https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/).
Given an array arr[] of size n, its prefix sum array is another array
prefixSum[] of same size such that the value of prefixSum[i] is arr[0] +
arr[1] + arr[2] … arr[i].

```
arr[] = {10, 20, 10, 5, 15}
prefixSum[] = {10, 30, 40, 45, 60}
```

This could be used to find the sum of all elements in the range [i,j] ,where
i<=j using a[j] - a[i-1] thus reducing the time complexity to O(1), whereas if
you traverse the range [i,j] everytime to find the sum that would be a linear
complexity.

Another important algorithm is Kadane's algorithm. Now this algorithm is
considered a DP algorithm but it's pretty easy to understand and is very handy
when solving problems. This is used to find the Largest Sum Contiguous Subarray
in a given array.

You can check out the code
[here](https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/)

## Further Reading

That brings to the conclusion of this tutorial. We hope you were able to learn all the topics. There is a lot more to be discovered. We are providing you with some links for further reading. And remember, practice is the most important part of Competitive Programming.

1) [Stacks](https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/tutorial/)
2) [Queues](https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/tutorial/)
3) [Graphs](https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/tutorial/)
4) [Greedy Algorithms](https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/tutorial/)
5) [Dynamic Programming](https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/tutorial/)
