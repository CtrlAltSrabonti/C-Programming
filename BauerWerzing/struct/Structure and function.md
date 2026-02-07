# Data Structures: Passing the Structure Member as an Argument.
- Topics discussed:

 <img width="1235" height="678" alt="image" src="https://github.com/user-attachments/assets/2bda6687-cae9-4702-9815-4b18cc1c0f66" />

#  Structure and Function
## Passing variable instead of passing individual members into function

<img width="1235" height="678" alt="image" src="https://github.com/user-attachments/assets/e833e79f-2909-440b-a40a-337946a898f4" />

# Structure variable as an argument

<img width="943" height="509" alt="image" src="https://github.com/user-attachments/assets/e6773db6-7ff3-4ecc-bfd6-0d2100ef2a97" />

------------
> Instead of passing structure members individually,
it is a good practice to pass a
structure variable as an argument.
Why you're simply passing structure members individually,
when you can pass a structure variable as an argument.
And then, decode it in the other function.
Unlike arrays, name of the structure variables
are not pointers, let me tell you.
When you are passing the name of the array,
actually, you are passing the address of the first block of the array.
>---------------


> But when you are passing the name of the structure variable,
actually, you are passing the value
or copy of that variable.
So, name of the structure variables are not pointers.
Actually, what you're doing?
You are passing by value and not by reference.
Now, here is an example which helps you to understand
how to pass a structure variable as an argument.
Here, in this case, I have declared
two structure variables p1 and p2.
These two variables are initializing
these variables over here.
You can see the struct point declaration.
This struct point has two members, x and y.
Both are of same type.
This p1 variable is initializing these two members
in this way. That is, x has been initialized by 23
and y has been initialized by 45.
Similarly, p2 is also initializing these variables
with these values, that is 56 and 90.
x will receive value 56 and y will receive value 90.
Then we are calling the print function
and we are passing p1 as an argument,
which means that we are passing the whole variable
and not the individual members.
Here, you can see that we are not passing p1 dot x and p1 dot y.
> -------------------
> We are passing the whole variable.
When you are passing a variable, it is a call by value
and not call by reference.
So here, the copy will be passed.
And you can see over here, there is a variable available,
which is the parameter of this function.
It will receive the copy of p1.
And within this function, we can see,
we have a printf function which will print
all the member values associated with this p1 variable on the screen.
And then after that, we are calling this print function again.
And this time we are passing p2 variable.
Now, it is not difficult to understand
that this printf function will print the member values
associated with this variable on the screen.
So, the output of this program is 23 45 56 90.
You can understand that I'm not passing the
individual members, I'm passing the whole copy of a variable.
And this is always a good practice.
So from now on, you should try to pass variables
and not the individual members.
> ------------

<img width="1193" height="669" alt="image" src="https://github.com/user-attachments/assets/d2555fd5-2e65-48b9-9ebb-935784b72f4a" />


# Pointer to structure as an argument

<img width="1235" height="678" alt="image" src="https://github.com/user-attachments/assets/f709b7e0-3513-45f4-bbd0-5ea35a5caef0" />

<img width="943" height="509" alt="image" src="https://github.com/user-attachments/assets/8a053e9e-a41b-41f5-a2e7-f40e2103e032" />


---

> how to pass pointer to structure as argument.
So, let's get started.
If the size of the structure is very large,
then passing the copy of the whole structure
is not at all efficient.
Let me tell you that, if the size of the structure is very large,
then it is not a good practice to pass the
whole copy of the structure.
The better choice is obviously, to pass the address of the structure.
You can use the arrow operator
to access the structure members inside the called function.
In the called function, you can use this arrow operator
to access the structure members.
And here is how you can do that.
I'm considering here the example where
I am passing the addresses of p1 and p2
to this print function, one by one.
And then, I will access the members
within this print function using the pointer.
>-------


> In main ()
Here, you can see I have declared p1 variable of type struct point.
This p1 variable is initializing the members
that is x and y with these values that is 23 and 45.
Similarly, p2 variable is also initializing these members
with these values that is 56 and 90.
With the first print call, I am passing the
address of p1. You can clearly see over here,
I am passing the address of p1.
And in the second print call, I am passing the address of p2.
So basically, I'm passing these addresses one by one.
These addresses will be received by pointer one by one, right?
First, the address of p1 is received by the pointer.
This pointer contains the address of p1.
Here, in this printf function, we are calling
the members associated with be p1 variable
using this arrow operator.
Because ptr contains the address of p1 initially.
So, it is the case that we are accessing
the member value associated with p1.
Obviously, this member is x.
So, we are asking for the value of x,
which is initialized by p1. Right?
And similarly here, we are asking
the value of y, which is initialized by p1.
These values will get printed on the screen using printf function.
And then after that, we are calling this print function again.
But here this time, we are passing the address of p2
and not the address of p1.
So, obviously we are asking the values of x and y initialized by p2, right?
So, the output of this program is 23 45 56 90.
Here, in this case, obviously, we are passing
the addresses and not the copies of the variables.
So, it should be well understood that
this practice is good In the case when
the structure is very large in size.
> ---

<img width="1235" height="678" alt="image" src="https://github.com/user-attachments/assets/d05cf5eb-f56b-4c40-a23b-e18240e0f840" />

# Returning a pointer to structure from the function

<img width="930" height="538" alt="image" src="https://github.com/user-attachments/assets/61eaa589-e3f3-494e-b553-c9b46fd1859a" />

---------------
> we have to start with the main function.
Just act like a compiler.
So, we know that compiler starts from the main function
no matter what the code has been written.
So, let's start with the main function.
Within this main function, you can clearly see
I have declared two pointers, ptr1 and ptr2.
You can see over here, their types are struct point.
That means, they will point to a struct point type of data, right?
So, ptr1 will point to data of type struct point
and ptr2 will also point to data of type struct point.
After this, I am calling this function fun
and here, I am passing these two arguments two and three.
> -----------------
> You can see, the definition of this function.
Here, these two variables will receive these values.
a will receive two and b will receive three.
We know that after calling the function,
control will transfer from this point to this point.
Now, let's go along with the flow.
Here, let's consider this fun function.
Within this fun function, you can see
this statement over here.
I want you to focus on the statement very carefully.
> -----------

> You might be wondering, why I am calling this malloc function.
malloc function is used to allocate memory at heap.
Why we want to allocate memory at heap?
You will understand that in a moment.
But let me tell you, this is very important step.
I am allocating here memory at heap.
You can see over here, the parameter
that has been passed to this malloc is
sizeof struct point. This means that,
I am asking malloc to allocate the memory
of size equivalent to the size of this struct point.
You can see over here, this is struct point
which consists of two members x and y.
I want the malloc to allocate memory
of size equivalent to the size of struct point.
After allocating the memory, malloc will return
a pointer, right? And that pointer is basically a void pointer.
But, I need to typecast it to a correct type.
That is why, this typecasting is required here.
struct point star. Now what does it mean?
malloc is returning a void pointer. Right?
As the data we want to store
in that memory is of type struct point,
that is why, the pointer must be typecasted to struct point type.
This is very important because,
that pointer will point to a struct point type of data
which has been allocated at heap.
That is why, that pointer must be of type struct point.
And here you can see, the ptr will receive
the address of the first byte of the memory.
And obviously, as it is pointing to a
struct point type of data, that is why,
it's type must be struct point.
So, this step is very very important.
You can understand that what is our requirement
and why we are typecasting it in this way.
> -----------
> Now, let's see the second step over here.
This is ptr arrow operator x equal to a.
And this is ptr arrow operator y equal to b plus five.
Now. this is interesting.
Here, with the help of ptr
we are calling the members of this struct point.
We can do that because ptr is the pointer
which can point to struct point type of data.
So, here we can see struct point consists of
two members x and y and with the help of
arrow operator we can access these members
very easily by using this ptr pointer.
And here what we are trying,
We are trying to store the values stored in these variables a and b.
a contains two and b contains three.
That is the initial case, right?
We are calling this fun function, we are passing two and three to it.
So obviously, a contains two and b contains three.
Two has been passed to x and
three plus five has been passed to y
which means that, after these two steps
x contains two and y contains eight, as simple as that.
Here you can clearly see, this time
the values has been stored in the heap, right?
Because ptr is a pointer which is pointing to
a heap memory and not a stack memory.
So, it should be very clear that here
we are passing the values to the heap memory.
And what I am doing here?
I am returning the pointer.
And you can see over here the return type is also struct point star. Right?
Obviously, we are returning a pointer of type struct point.
So, it should be struct point star.
Now, this is the point where we should understand
why this malloc function has been called.
Why we are allocating memory at heap?
Here, we are returning a pointer. Right?
The simple justification that why I'm using
malloc over here is that, heap memory is fixed.
As simple as that.
The memory allocated at heap remains fixed.
We have to explicitly deallocate it, remember that.
Stack memory automatically gets deallocated
but heap memory will not, it will remain intact.
So, the memory allocated at heap will remain
as it is and that is why we can easily
return the address of the first byte of that memory without any problem.
Because that memory is fixed,
and even after the function finishes its execution,
the memory remains intact,
it will remain in its place. Okay.
That is why, it is very important to allocate memory at heap.
You should understand the end goal.
We want to return a pointer,
which means we want to return the address of some memory.
We know that, the stack memory
automatically gets deallocated. We can understand that
these two variables get automatically deleted
after the function finishes its execution.
Because, these two variables are local to this function.
They have been allocated stack memory.
When the function finishes its execution,
these variables get automatically deleted.
This is the reason why, we have to use the heap memory
because we want to return the pointer.
In that case the, memory should remain intact
and this is not possible with stack memory.
That is why, we are taking the help of heap memory.
After returning the address,
this address will get stored within this ptr1.
Now you can understand that
ptr1 also has the capability to access
these variables x and y.
Note the data type of this ptr1.
It is struct point star. You can understand that,
ptr1 can also access these members x and y
which contains value two and eight.
So, here ptr1 is nothing but pointing to a heap memory
which contains two values two and eight.
And they are the values of x and y.
Now, after this we are calling fun function again.
And this time we are passing different values
to these variables a and b. There is no problem at all.
A new memory has been allocated by malloc
and here in these x and y variables
we will store six and nine plus five which is 14 respectively.
And after that, we can simply return the address
and that address, will be stored within this ptr2.
Now, the ptr2 is capable of accessing
the variables x and y which contains the values six and 14.
> ---------
> And you can see over here, I am calling
this print function and here I'm passing ptr1.
And within this print function, we are calling
the printf function and we are accessing the values of x and y.
You know the values of x and y.
These values are two and eight.
Because, we are passing ptr1 and not ptr2.
So, the output in this case will be two and eight.
Again we are calling print function.
And this time we are passing ptr2
and we know the values of x and y associated
with ptr2 they are six and 14.
And after that you can clearly see I am calling this free function
which means I am deallocating the memory.
That is why, I am saying when we allocate memory
at heap it is our responsibility to
deallocate the memory.
So, the output of this program is obviously
two eight six and14.
> --------------------
<img width="1223" height="681" alt="image" src="https://github.com/user-attachments/assets/fa140aaa-eaa6-4b9a-b95c-0eaef9af645c" />


# Returning structure variable from a function
Returning a structure variable from a function is similar to returning a variable from a function
> Note: Since we are passing in edit() parameter of struct point, so we are returning 'struct point'

<img width="998" height="529" alt="image" src="https://github.com/user-attachments/assets/c56e4b48-4701-4f0a-931f-b08ffcd40317" />


# Passing Array of Structures as Argument

<img width="930" height="538" alt="image" src="https://github.com/user-attachments/assets/1ee71a06-9167-4aa4-bcfe-aa6eea5c7237" />

-----------------------
> how to pass array of structures as argument.
So without any delay, let's get started.
Here, you can see that I have declared one structure
struct abc which consists of two members a and b.
Data type of a is int, which means it's an integer variable.
And data type of b is char,
which means this is a character variable.
Now, here have declared one array,
which consists of two elements and
the data type of these two elements is struct abc.
Okay. So, this means that I have declared an array of structures, right?
To be precise, this is an array of two structures.
And here you can see these two structures.
Okay, you can think of them as variables of type struct ABC.
Okay, these two are variables of type struct abc.
Obviously, they are combined together, forming up an array.
So here, this variable -- I'm imagining this as a variable.
This variable is of type struct abc,
which means that it can access the members of this struct abc.
And here, with the help of this variable,
I'm initializing these members.
That means one has been given to a
and capital A, this letter has been given to this variable b.
Now here, I have another variable
which does the job of initializing these members as well.
Two has been given to a and
capital B has been given to this variable b.
Right?
Now, here is one important point I would like to emphasize on.
Compiler will allocate contiguous block of memory
for the data members of the structure.
It should be well noted that, compiler will allocate
contiguous block of memory, okay.
It is not the case, it is allocating memory anywhere it wants.
It's basically allocating contiguous block of memory
for the data members of the structure.
If you have any confusion regarding how the
compiler will allocate memory for struct abc,
you should watch our lectures of C Programming.
There, everything will be clear. Okay.
Now, here I am considering one simple example.
Here in this main function, I have declared
an array of type struct point.
Let me tell you, that this is an array
which consists of two elements and each element
is having a type struct point.
And here you can see, the initialization has been done.
This is the struct point declaration, which consists
of two members x and y. Both are having the same type
that is int, which means that these are the two integer variables.
And here I'm initializing them one by one.
This is the first variable and this is the second variable.
Think of them as variables only, if you have any confusion.
Now, this first variable is initializing
these members with these values.
And this variable is initializing these members with these values, right?
After that, I'm simply calling this print function.
And here I'm passing this array -- complete array.
When you are passing the name of the array,
actually are passing the address of that array, right?
And here I am receiving this array over here, right?
This is the print function definition,
which is receiving the array.
Obviously, the type of this array must be struct point.
It should be well noted.
Inside this print function, we have this for loop,
which runs from zero to one.
As this is i less than two, so loop runs from zero to one,
which means this loop runs two times.
And with the help of printf function,
we are basically printing the values of x and y
of each of these variables.
When i is zero, we are basically calling our first variable
and we are accessing the members of this variable.
That is, here this is arr[0].x
which means we are accessing this value, that is one.
And arr[0].y which means, we accessing this value two.
Similarly, when this becomes one,
then this is arr[1].x which means
we are accessing this value three.
And when this is arr[1].y we are accessing this value four.
That's it.
In this way, we would be able to print all the values on the screen.
And the output must be one two three four.
This is how this program works. It's very simple.
Here, this array is of no difference let me tell you.
The only difference is that this array
consists of two elements of type struct point
which we haven't seen before, right?
We have seen array of integers, characters,
floats, but we haven't seen something like this before
and there is no difference, let me tell you.
You have created an array of two structures in this case.
That is the only difference.
It is just like declaring an array
of two integers. As simple as that.
You can easily call the members of this array.
If you use arr[0], it means that
you are calling the first member of this array.
That means the first structure.
When this is arr[1],
you are calling the second structure. As simple as that.
Treat them as individual members, okay.
And then, you can go inside and access the members.
As it is indicated over here,
when I put here, dot x, it means that
I'm calling the first member of the first structure.
Obviously, i must be zero in this case.
arr[0] means that you are calling the first structure
and dot x means you are accessing the first member of the first structure,
which means this member, right?
Because x is the first member of this structure.
And y is the second member of this structure.
> ------------------
<img width="1223" height="681" alt="image" src="https://github.com/user-attachments/assets/0f60271e-a377-47e3-83fc-721d2baed045" />
