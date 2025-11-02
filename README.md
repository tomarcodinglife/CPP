# CPP (C++) Language 
"Hello, my name is Sujit Tomar. I first learned C++ in 2021, and I'm still learning it today because I believe that continuous practice and staying updated with new knowledge are essential for growth."

## CPP Boilerplate Code

```cpp

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    return 0;
}

```

## Data Type

Summary of C++ Data Types

| Data Type     | Description                                  |  Size (Typical)        | Example                         | 
| ------------- |:--------------------------------------------:| ----------------------:| -------------------------------:|
| int           | Integer value (whole numbers)                | 4 bytes                | int a = 10;                     |   
| short         | Smaller integer                              | 2 bytes                | short b = 5;                    | 
| long          | Larger integer                               | 4 or 8 bytes           | long c = 100000;                | 
| long long     | Very large integer                           | 8 bytes                | long long d = 100000000000LL;   | 
| unsigned      | Non-negative integer (used with any integer) | Depends on type        | unsigned int e = 25;            |
| float         | Floating-point number (decimal)              | 4 bytes                | float f = 3.14f;                | 
| double        | Double-precision floating-point number       | 8 bytes                | double g = 3.14159;             | 
| long double   | Extended precision floating-point number     | 10 or 12 bytes         | long double h = 2.718281828459; | 
| char          | Single character                             | 1 byte                 | char i = 'A';                   | 
| unsigned char | Non-negative character                       | 1 byte                 | unsigned char j = 'B';          | 
| signed char   | Signed character                             | 1 byte                 | signed char k = 'C';            | 
| bool          | Boolean value (true or false)                | 1 byte                 | bool l = true;                  | 
| std::string   | Sequence of characters (C++ string class)    | Depends on size        | std::string m = "Hello";        | 
| void          | No value or unknown type                     | -                      | void print() {}                 | 
| Pointer       | Holds memory address of a variable           | Depends on system      | int* ptr = &num;                | 
---

### Key Differences Between long and long long
| Feature           | long                                         |  long double                                         |
| ----------------- |:--------------------------------------------:| ----------------------------------------------------:|
|   Size         |Typically 4 bytes (32-bit) or 8 bytes (64-bit) depending on the system.| Always at least 8 bytes (64-bit)    |
|   Range         |Depends on the system (on 32-bit systems: -2^31 to 2^31-1, on 64-bit systems: -2^63 to 2^63-1). | Always from -2^63 to 2^63-1 for signed, 0 to 2^64-1 for unsigned.   |
|   Purpose         | Used for larger integers than int, but may not be large enough on some systems. |  Used for integers requiring guaranteed 64-bit size. |
|   Guarantee        |Not guaranteed to be 64-bit on all platforms. | Always guaranteed to be at least 64-bit. |
|   When to use?         |Use when you need a larger range than int, but not as large as long long.  | Use when you need guaranteed 64-bit precision. |

### Example long and long long

```cpp
#include <iostream>
using namespace std;

int main() {
    long num1 = 2147483647;          // maximum value for signed 32-bit long (on 32-bit systems)
    long long num2 = 9223372036854775807;  // maximum value for signed 64-bit long long
    
    cout << "Value of num1 (long): " << num1 << endl;
    cout << "Value of num2 (long long): " << num2 << endl;
    
    return 0;
}
```


### Key Differences Between double and long double

| Feature       | double                                       |  long double                                             |
| ------------- |:--------------------------------------------:| --------------------------------------------------------:|
|  Size         | Typically 8 bytes (64 bits)                  | Typically 8 bytes (MSVC) or 16 bytes (GCC)               |            
|  Precision    | Around 15-16 decimal digits                  | Around 18-19 decimal digits or more                      |
|  Range        | ~ ±1.7 × 10³⁰                                | Larger than double, depending on the system              |
|  Use Case     |  General-purpose floating-point values       | Higher precision required (e.g., scientific calculations)|
|  Memory       |  Less memory usage compared to long double   | Uses more memory (if 16 bytes)                           |
---

#### double Example 

```cpp
#include <iostream>
using namespace std;

int main() {
    double num1 = 3.141592653589793;
    cout << "Value of num1: " << num1 << endl;
    return 0;
}
```

#### long double Example 
```cpp
#include <iostream>
using namespace std;

int main() {
    long double num2 = 3.14159265358979323846264338327950288419716939937510L;
    cout << "Value of num2: " << num2 << endl;
    return 0;
}
```


## Operator in CPP
+ Arithmetic Operators :- " +, -, *, /, % "
- Assignment Operators :- " +=, -=, *=, /=, %= "
+ Relational Operators :- " > , >=, <, <= "
- Logical Operators :- " >> && and || "
+ **Bitwise Operators :- "(AND) &, (OR) |, (XOR) ^,  (NOT) ~, (Left shift) <<, (Right shift) >>"
- Increment Operators :- " Prefix: ++x, Postfix: x++ "
+ Decrement Operators :- " Prefix: --x, Postfix: x--"

## Conditionals Statement
"In C++, a conditional statement is a way to make decisions in a program. It allows the program to execute different blocks of code based on whether a certain condition is true or false. These conditions are usually based on comparing values., such as checking if a number is greater than another number or if a certain condition is met.

In simple terms, conditional statements help your program decide what to do next based on certain situations."
### if Statement

#### syntax
```cpp
if (condition) {
    // code to be executed if condition is true
}
```
#### example

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;

    if (x > 5) {
        cout << "x is greater than 5" << endl;
    }

    return 0;
}

```

### if else Statement

#### syntax
```cpp
if (condition) {
    // Block of code that executes if condition is true
} else {
    // Block of code that executes if condition is false
}
```

#### example
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;

    if (x > 5) {
        cout << "x is greater than 5" << endl;
    } else {
        cout << "x is 5 or less" << endl;
    }

    return 0;
}

```

### else if Statement

#### syntax
```cpp
if (condition1) {
    // Code block executed if condition1 is true
} else if (condition2) {
    // Code block executed if condition2 is true
} else if (condition3) {
    // Code block executed if condition3 is true
} else {
    // Code block executed if none of the conditions are true
}

```
#### example
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 7;

    if (x > 10) {
        cout << "x is greater than 10" << endl;
    } else if (x > 5) {
        cout << "x is greater than 5 but less than or equal to 10" << endl;
    } else if (x > 0) {
        cout << "x is greater than 0 but less than or equal to 5" << endl;
    } else {
        cout << "x is less than or equal to 0" << endl;
    }

    return 0;
}


```

### Switch Statement

#### syntax
```cpp
switch (expression) {
    case value1:
        // Code block executed if expression == value1
        break;

    case value2:
        // Code block executed if expression == value2
        break;

    case value3:
        // Code block executed if expression == value3
        break;

    // Optionally, more cases...

    default:
        // Code block executed if no case matches the expression
        break;
}

```
#### example
```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 3;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
            break;
    }

    return 0;
}


```

### Tarnary Operator
#### syntax
```cpp
    condition ? value_if_true : value_if_false;
```
#### example
```cpp

#include <iostream>
using namespace std;

int main() {
    int age = 20;
    
    string result = (age >= 18) ? "Adult" : "Minor";
    cout << "You are an " << result << "." << endl;

    return 0;
}

```

## Loop in cpp 
In C++, there are several types of loops that allow you to repeat a block of code multiple times based on certain conditions. The main types of loops are:

### for loop
The for loop is typically used when you know beforehand how many times you want to repeat a block of code.
#### syntax
```cpp

for (initialization; condition; increment/decrement) {
    // Code to be executed
}

```
#### example
```cpp

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "i = " << i << endl;
    }
    return 0;
}

```

#### output
```cpp
i = 1
i = 2
i = 3
i = 4
i = 5

```

### while loop
The while loop is used when you want to repeat a block of code an unknown number of times, as long as a condition is true. It checks the condition before executing the loop body.

#### syntax
```cpp
while (condition) {
    // Code to be executed
}

```
#### example
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << "i = " << i << endl;
        i++;
    }
    return 0;
}
```

#### output
```cpp
i = 1
i = 2
i = 3
i = 4
i = 5

```

### do-while loop
The do-while loop is similar to the while loop, but it checks the condition after executing the loop body. This guarantees that the loop body is executed at least once.

#### syntax
```cpp
do {
    // Code to be executed
} while (condition);

```

#### example
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "i = " << i << endl;
        i++;
    } while (i <= 5);
    return 0;
}

```

#### output
```cpp
i = 1
i = 2
i = 3
i = 4
i = 5

```

### Range Base for loop with std::vector
#### example
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    for (int val : vec) {
        cout << "Value: " << val << endl;
    }
    return 0;
}

```

#### output
```cpp

Value: 10
Value: 20
Value: 30
Value: 40
Value: 50

```
## Function in cpp
In C++, a function is a block of code that performs a specific task. Functions help in breaking down the code into smaller, reusable pieces, improving modularity and readability.

### syntax
```cpp

return_type function_name(parameter_list)
{
    // function body
    // perform operations
    return value;  // optional, depending on the return_type
}

```

### example 
```cpp
#include <iostream>
using namespace std;

// Function to add two integers and return the result
int add(int a, int b) {
    return a + b;  // return the sum of a and b
}

int main() {
    int result = add(5, 3);  // calling the function with arguments 5 and 3
    cout << "The sum is: " << result << endl;
    return 0;
}

```

### output
```cpp

    The sum is: 8

```
### Type of Function
In C++, functions can be categorized into different types based on their return types, parameters, and other features. The major types of functions in C++ are:
#### Standard Functions (or Built-in Functions)
##### Example
```cpp

#include <iostream>
#include <cmath>  // for math functions

int main() {
    double x = 16.0;
    double result = sqrt(x);  // sqrt is a standard function to compute square root
    std::cout << "Square root of " << x << " is: " << result << std::endl;
    return 0;
}


```

##### output 
``` cpp
 Square root of 16 is: 4

```
#### User-defined Functions
##### Function with No Arguments
###### synax
```cpp

void functionName() {
    // Code
}

```
##### example
``` cpp

#include <iostream>

void greet() {
    std::cout << "Hello, welcome to C++!" << std::endl;
}

int main() {
    greet();  // Calling the function
    return 0;
}

```
##### output
``` cpp

Hello, welcome to C++!


```

##### Function with Arguments
###### syntax 
```cpp

return_type functionName(parameter1, parameter2, ...) {
    // Code
}

```
###### example
```cpp

#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(5, 3);  // Calling the function with arguments
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

```
###### output
```cpp

Sum: 8


```
##### Function with Return Value
###### syntax 
```cpp
return_type functionName(parameters) {
    // Code
    return value;
}

```
###### example
```cpp
#include <iostream>

float divide(float a, float b) {
    return a / b;
}

int main() {
    float result = divide(10.0, 2.0);  // Calling the function with arguments
    std::cout << "Division Result: " << result << std::endl;
    return 0;
}

```
###### output
```cpp

Division Result: 5

```

##### Functions with default arguments
###### syntax 
```cpp
return_type functionName(parameter1, parameter2 = default_value) {
    // Code
}

```
###### example
```cpp
#include <iostream>

int multiply(int a, int b = 2) {
    return a * b;
}

int main() {
    std::cout << multiply(4, 5) << std::endl;  // Uses both arguments
    std::cout << multiply(4) << std::endl;     // Uses default value for b
    return 0;
}

```
###### output
```cpp
20
8

```
### Inline Functions
An inline function is a function where the compiler replaces the function call with the actual code of the function, thereby potentially improving performance by avoiding the overhead of function calls. Inline functions are typically small, and the keyword inline is used to define them.
###### syntax 
```cpp
inline return_type functionName(parameters) {
    // Code
}

```
###### Example
```cpp
#include <iostream>

inline int square(int x) {
    return x * x;
}

int main() {
    std::cout << "Square of 5: " << square(5) << std::endl;
    return 0;
}

```
###### output
```cpp
Square of 5: 25

```
### Recursive Functions
A recursive function is a function that calls itself. Recursion is often used for problems that can be broken down into smaller subproblems, such as calculating factorials or Fibonacci numbers.
###### syntax 
```cpp
return_type functionName(parameters) {
    if (base_condition) {
        return base_value;
    }
    return functionName(new_parameters);  // Recursive call
}

```
###### example
```cpp
#include <iostream>

int factorial(int n) {
    if (n == 0)  // Base condition
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num = 5;
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
    return 0;
}

```
###### output
```cpp
Factorial of 5 is: 120

```
### Friend Functions
A friend function is a function that is not a member of a class but has access to the class's private and protected members. This is useful when you need to perform operations that involve more than one class but need access to the private data.
###### syntax 
```cpp
class MyClass {
private:
    int data;
public:
    MyClass(int val) : data(val) {}
    friend void displayData(MyClass obj);  // Friend function declaration
};

void displayData(MyClass obj) {
    std::cout << "Data: " << obj.data << std::endl;  // Accessing private member
}

int main() {
    MyClass obj(10);
    displayData(obj);  // Calling the friend function
    return 0;
}

```

###### output
```cpp
Data: 10

```
### Virtual Functions
A virtual function is a function that is declared in the base class and overridden in the derived class. It allows you to use polymorphism, where the function that gets called depends on the type of the object, not the reference.
###### syntax 
```cpp
class Base {
public:
    virtual void show() {
        std::cout << "Base class show function" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class show function" << std::endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;
    ptr->show();  // Will call Derived class's show()
    return 0;
}

```
###### output
```cpp
Derived class show function

```



----------------------------------------------------------------------------
update soon for more content " Thank You " <br>
Sujit Tomar
-----------------------------------------------------------------------------
