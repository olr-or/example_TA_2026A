#1
a = 15
b = 4
result = a / b
print(result)
print(type(result))

#2
a = 15
b = 4
result = a // b
print(result)
print(type(result))

#3
x = 2
y = 3
z = x ** y ** 2
print(z)
print(type(z))

#4
x = (2 ** 3) ** 2
print(x)
print(type(x))

#5
a = 10
b = 3
c = a % b * 2
print(c)
print(type(c))

#6
a = 10
b = 3
c = a % (b * 2)
print(c)
print(type(c))

#7
text = "Data"
num = 3
result = text * num + str(num)
print(result)
print(type(result))

#8
value = True + 5 * False
print(value)
print(type(value))

#9
value = (True + 5) * False
print(value)
print(type(value))

#10
a = 7
b = 2
result = a / b == a // b
print(result)
print(type(result))

#11
nums = [1, 2, 3]
result = nums * 2 + [4]
print(result)
print(type(result))

#12
t = (1, 2)
result = t * 2 + (3,)
print(result)
print(type(result))

#13
s = {1, 2, 3}
result = s | {3, 4} & {4, 5}
print(result)
print(type(result))

#14
s = {1, 2, 3}
result = (s | {3, 4}) & {4, 5}
print(result)
print(type(result))

#15
a = 3
b = 4
result = a > 2 and b < 5 or False
print(result)
print(type(result))

#16
a = 3
b = 4
result = a > 2 and (b < 5 or False)
print(result)
print(type(result))

#17
text = "Python"
result = text[1:5][1]
print(result)
print(type(result))

#18
text = "Python"
result = text[-3:] + text[:2]
print(result)
print(type(result))

#19
d = {"a": 10, "b": 20}
result = d["a"] + d["b"] > 25
print(result)
print(type(result))

#20
d = {"x": 3}
result = d["x"] ** 2 // 2
print(result)
print(type(result))

#21
value = int("10") + float("2.5")
print(value)
print(type(value))

#22
value = str(int("5") * 2) + "0"
print(value)
print(type(value))

#23
value = bool("False")
print(value)
print(type(value))

#24
value = bool("")
print(value)
print(type(value))

#25
a = 5
b = 2
result = a + b * 3 > 10 == False
print(result)
print(type(result))

#26
a = 5
b = 2
result = (a + b * 3 > 10) == False
print(result)
print(type(result))

#27
nums = [1, 2, 3, 4]
result = nums[1:3] * 2
print(result)
print(type(result))

#28
nums = [1, 2, 3, 4]
result = nums[1:3][0] ** 2
print(result)
print(type(result))

#29
t = (5, 6, 7)
result = t[0] + t[-1] * 2
print(result)
print(type(result))

#30
s = {1, 2, 3}
result = 2 in s and 5 not in s
print(result)
print(type(result))

#31
value = 4 ** 1 / 2
print(value)
print(type(value))

#32
value = 4 ** (1 / 2)
print(value)
print(type(value))

#33
a = 9
b = 3
result = a / b * b == a
print(result)
print(type(result))

#34
a = 9
b = 3
result = a // b * b == a
print(result)
print(type(result))

#35
text = "AB"
result = text * 2 == "ABAB"
print(result)
print(type(result))

#36
nums = [1, 2]
result = nums * 2 == [1,2,1,2]
print(result)
print(type(result))

#37
t = (1, 2)
result = t + (3, 4)[1:]
print(result)
print(type(result))

#38
s = {1,2,3}
result = len(s | {3,4}) - len(s & {3,4})
print(result)
print(type(result))

#39
value = complex(1,2) + complex(2,3)
print(value)
print(type(value))

#40
value = complex(1,2) * 2
print(value)
print(type(value))

#41
a = 5
result = a > 3 and 10 / 2 > 4
print(result)
print(type(result))

#42
a = 5
result = a < 3 and 10 / 0 > 4
print(result)
print(type(result))

#43
value = 10 % 4 ** 2
print(value)
print(type(value))

#44
value = (10 % 4) ** 2
print(value)
print(type(value))

#45
text = "123"
result = int(text[0]) + int(text[1])
print(result)
print(type(result))

#46
nums = [1,2,3]
result = len(nums) + nums[0] * nums[-1]
print(result)
print(type(result))

#47
d = {"a":1,"b":2}
result = len(d) + d["a"] * d["b"]
print(result)
print(type(result))

#48
s = {1,2,3}
result = len(s - {2}) * 2
print(result)
print(type(result))

#49
value = True * 10 + False * 5
print(value)
print(type(value))

#50
a = 3
b = 2
result = (a ** b > 8) or (a + b == 5)
print(result)
print(type(result))
