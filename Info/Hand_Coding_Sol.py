# 해당 Solution은 참고용이며, 이것만 답안으로 인정되는 것은 아닙니다.
# 본인 스타일로 import 사용 없이 문제 조건에 맞는 코드를 구현하시면, 그것 또한 정답이에요.

==============================================

Q1) Convert Two Floats to Integers and Compute Sum and Difference
Write a program that takes two floating-point numbers as input, converts them to integers, and then prints their sum and difference.
• Input: Two real numbers separated by a space (e.g., "4.7 3.2")
• Output: The sum and difference of the converted integers

# Q1 Sol) 
input_str = "4.7 3.2"
parts = split_space(input_str)

a = to_float(parts[0])
b = to_float(parts[1])

a_int = float_to_int(a)
b_int = float_to_int(b)

sum_result = a_int + b_int
diff_result = a_int - b_int

print(sum_result, diff_result)

==============================================

Q2) Check Even or Odd Number
Write a program that takes an integer as input and determines whether it is even or odd.
• Input: A single integer (e.g., "9")
• Output: "Even" or "Odd"

# Q2 Sol)
input_str = "9"
num = to_int(input_str)

if num % 2 == 0:
    print("Even")
else:
    print("Odd")

==============================================

Q3) Sum of Five Integers in a List
Write a program that takes five integers as input, stores them in a list, and prints the sum of all elements.
• Input: Five integers separated by spaces (e.g., "2 5 7 3 6")
• Output: The sum of the list elements

# Q3 Sol)
input_str = "2 5 7 3 6"
parts = split_space(input_str)

numbers = []
for p in parts:
    numbers = numbers + [to_int(p)]

total = 0
for x in numbers:
    total += x

print(total)

==============================================

Q4) Solve a Quadratic Equation
Write a program that takes three coefficients (a, b, c) of a quadratic equation ax² + bx + c = 0 as input and prints the real roots.
• Input: Three coefficients separated by spaces (e.g., "1 -3 2")
• Conditions: If a == 0, print "Not a quadratic equation"
If there are no real roots, print "No real roots"

# Q4 Sol)
input_str = "1 -3 2"
parts = split_space(input_str)

a = to_float(parts[0])
b = to_float(parts[1])
c = to_float(parts[2])

if a == 0:
    print("Not a quadratic equation")
else:
    d = b * b - 4 * a * c

    if d < 0:
        print("No real roots")
    elif d == 0:
        print(-b / (2 * a))
    else:
        root1 = (-b + d ** 0.5) / (2 * a)
        root2 = (-b - d ** 0.5) / (2 * a)
        print(root1, root2)
        
==============================================

Q5) Compute GCD and LCM
Write a program that takes two integers as input and computes both their Greatest Common Divisor (GCD) and Least Common Multiple (LCM).
• Input: Two integers separated by a space (e.g., "12 18")
• Output: "GCD: value", "LCM: value"

# Q5 Sol)
input_str = "12 18"
parts = split_space(input_str)

x = to_int(parts[0])
y = to_int(parts[1])

gcd_value = gcd_manual(x, y)
lcm_value = (x * y) // gcd_value

print("GCD:", gcd_value)
print("LCM:", lcm_value)

==============================================

Q6) Find Maximum and Minimum in a List
Write a program that takes multiple integers as input, stores them in a list, and prints the maximum and minimum values.
• Input: Several integers separated by spaces (e.g., "7 2 9 5 1 8")
• Output: "Max: value, Min: value"

# Q6 Sol)
input_str = "7 2 9 5 1 8"
parts = split_space(input_str)

numbers = []
for p in parts:
    numbers = numbers + [to_int(p)]

max_value = numbers[0]
min_value = numbers[0]

i = 1
while i < list_len(numbers):
    if numbers[i] > max_value:
        max_value = numbers[i]
    if numbers[i] < min_value:
        min_value = numbers[i]
    i += 1

print("Max:", max_value, ", Min:", min_value)

==============================================

Q7) Check if a Number is Prime
Write a program that takes an integer as input and determines whether it is a prime number.
• Input: A single integer (e.g., "17")
• Output: "N is a prime number." if the number is prime
"N is not a prime number." otherwise

# Q7 Sol)
input_str = "17"
n = to_int(input_str)

if n < 2:
    print(n, "is not a prime number.")
else:
    is_prime = 1
    i = 2

    while i * i <= n:
        if n % i == 0:
            is_prime = 0
            break
        i += 1

    if is_prime == 1:
        print(n, "is a prime number.")
    else:
        print(n, "is not a prime number.")

==============================================

Q8) Sum of Numbers Divisible by 3
Write a program that takes an integer N as input and computes:
• The sum of numbers from 1 to N that are divisible by 3
• The sum of numbers where remainder is 1 when divided by 3
• The sum of numbers where remainder is 2 when divided by 3
• Input: A single integer N (e.g., "10")
• Output: Print each sum separately

# Q8 Sol)
input_str = "10"
N = to_int(input_str)

sum_3 = 0
sum_1 = 0
sum_2 = 0

x = 1
while x <= N:
    if x % 3 == 0:
        sum_3 += x
    elif x % 3 == 1:
        sum_1 += x
    else:
        sum_2 += x
    x += 1

print(sum_3, sum_1, sum_2)

==============================================

Q9) Remove Duplicates and Sort a List
Write a program that takes multiple integers as input, removes duplicate values, and prints the sorted unique list.
• Input: Several integers separated by spaces (e.g., "5 3 8 3 1 8 9 2")
• Output: "Sorted unique list: [sorted_list]"

# Q9 Sol)
input_str = "5 3 8 3 1 8 9 2"
parts = split_space(input_str)

numbers = []
for p in parts:
    numbers = numbers + [to_int(p)]

unique_numbers = []
for x in numbers:
    if contains(unique_numbers, x) == 0:
        unique_numbers = unique_numbers + [x]

unique_numbers = bubble_sort(unique_numbers)

print("Sorted unique list:", unique_numbers)

==============================================

Q10) Generate Fibonacci Sequence
Write a program that takes an integer N (1 ≤ N ≤ 20) as input and prints the first N Fibonacci numbers as a list.
• Input: A single integer N (e.g., "7")
• Condition: If N is out of range, print "Invalid input"
• Output: Fibonacci sequence as a list

# Q10 Sol) 
input_str = "7"
N = to_int(input_str)

if N < 1 or N > 20:
    print("Invalid input")
else:
    fibonacci = []

    if N >= 1:
        fibonacci = fibonacci + [0]
    if N >= 2:
        fibonacci = fibonacci + [1]

    i = 2
    while i < N:
        next_value = fibonacci[i - 1] + fibonacci[i - 2]
        fibonacci = fibonacci + [next_value]
        i += 1

    print(fibonacci)

==============================================
