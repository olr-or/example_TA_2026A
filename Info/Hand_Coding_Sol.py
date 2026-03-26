# 해당 Solution은 참고용이며, 이것만 답안으로 인정되는 것은 아닙니다.
# 본인 스타일로 import 사용 없이 문제 조건에 맞는 코드를 구현하시면, 그것 또한 정답이에요.

==============================================

Q1) Convert Two Floats to Integers and Compute Sum and Difference
Write a program that takes two floating-point numbers as input, converts them to integers, and then prints their sum and difference.
• Input: Two real numbers separated by a space (e.g., "4.7 3.2")
• Output: The sum and difference of the converted integers

# Q1 Sol) 
a, b = map(float, ”4.7 3.2”.split())
a_int = int(a)
b_int = int(b)
sum_result = a_int + b_int
diff_result = a_int – b_int
print(sum_result, diff_result)

==============================================

Q2) Check Even or Odd Number
Write a program that takes an integer as input and determines whether it is even or odd.
• Input: A single integer (e.g., "9")
• Output: "Even" or "Odd"

# Q2 Sol)
num = int(“9”)
if num % 2 == 0:
   print(“Even”)
else:
   print(“Odd”)

==============================================

Q3) Sum of Five Integers in a List
Write a program that takes five integers as input, stores them in a list, and prints the sum of all elements.
• Input: Five integers separated by spaces (e.g., "2 5 7 3 6")
• Output: The sum of the list elements

# Q3 Sol)
numbers = list(map(int, “2 5 7 3 6“).split()))
print(sum(numbers))

==============================================

Q4) Solve a Quadratic Equation
Write a program that takes three coefficients (a, b, c) of a quadratic equation ax² + bx + c = 0 as input and prints the real roots.
• Input: Three coefficients separated by spaces (e.g., "1 -3 2")
• Conditions: If a == 0, print "Not a quadratic equation"
If there are no real roots, print "No real roots"

# Q4 Sol)
a, b, c = map(float, "1 -3 2".split())

if a == 0:
    print("Not a quadratic equation")
else:
    d = b**2 - 4*a*c

    if d < 0:
        print("No real roots")
    elif d == 0:
        print(-b / (2*a))
    else:
        root1 = (-b + d**0.5) / (2*a)
        root2 = (-b - d**0.5) / (2*a)
        print(root1, root2)

==============================================

Q5) Compute GCD and LCM
Write a program that takes two integers as input and computes both their Greatest Common Divisor (GCD) and Least Common Multiple (LCM).
• Input: Two integers separated by a space (e.g., "12 18")
• Output: "GCD: value", "LCM: value"

# Q5 Sol)
x, y = map(int, "12 18".split())

a, b = x, y
while b != 0:
    a, b = b, a % b
gcd_value = a

lcm_value = (x * y) // gcd_value

print(f"GCD: {gcd_value}")
print(f"LCM: {lcm_value}")

==============================================

Q6) Find Maximum and Minimum in a List
Write a program that takes multiple integers as input, stores them in a list, and prints the maximum and minimum values.
• Input: Several integers separated by spaces (e.g., "7 2 9 5 1 8")
• Output: "Max: value, Min: value"

# Q6 Sol)
numbers = list(map(int, "7 2 9 5 1 8".split()))
print(f"Max: {max(numbers)}, Min: {min(numbers)}")

==============================================

Q7) Check if a Number is Prime
Write a program that takes an integer as input and determines whether it is a prime number.
• Input: A single integer (e.g., "17")
• Output: "N is a prime number." if the number is prime
"N is not a prime number." otherwise

# Q7 Sol)
n = int("17")
if n < 2:
    print(f"{n} is not a prime number.")
else:
    is_prime = True
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            is_prime = False
            break
    if is_prime:
        print(f"{n} is a prime number.")
    else:
        print(f"{n} is not a prime number.")

==============================================

Q8) Sum of Numbers Divisible by 3
Write a program that takes an integer N as input and computes:
• The sum of numbers from 1 to N that are divisible by 3
• The sum of numbers where remainder is 1 when divided by 3
• The sum of numbers where remainder is 2 when divided by 3
• Input: A single integer N (e.g., "10")
• Output: Print each sum separately

# Q8 Sol)
N = int("10")
sum_3 = sum(x for x in range(1, N+1) if x % 3 == 0)
sum_1 = sum(x for x in range(1, N+1) if x % 3 == 1)
sum_2 = sum(x for x in range(1, N+1) if x % 3 == 2)
print(sum_3, sum_1, sum_2)

==============================================

Q9) Remove Duplicates and Sort a List
Write a program that takes multiple integers as input, removes duplicate values, and prints the sorted unique list.
• Input: Several integers separated by spaces (e.g., "5 3 8 3 1 8 9 2")
• Output: "Sorted unique list: [sorted_list]"

# Q9 Sol)
numbers = list(map(int, "5 3 8 3 1 8 9 2".split()))
unique_sorted = sorted(set(numbers))
print(f"Sorted unique list: {unique_sorted}")

==============================================

Q10) Generate Fibonacci Sequence
Write a program that takes an integer N (1 ≤ N ≤ 20) as input and prints the first N Fibonacci numbers as a list.
• Input: A single integer N (e.g., "7")
• Condition: If N is out of range, print "Invalid input"
• Output: Fibonacci sequence as a list

# Q10 Sol) 
N = int("7")
if N < 1 or N > 20:
    print("Invalid input")
else:
    fibonacci = [0, 1]
    for i in range(2, N):
        fibonacci.append(fibonacci[-1] + fibonacci[-2])
    print(fibonacci[:N])

==============================================
