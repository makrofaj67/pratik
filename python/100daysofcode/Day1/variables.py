# There are two variables, a and b from input
a = input()
b = input()
# 🚨 Don't change the code above ☝️
####################################
# Write your code below this line 👇

c = a
a = b
b = c

# 🚨 Don't change the code below 👇
print("a: " + a)
print("b: " + b)

##python data types
##variable name: data type = value

a: str = "Hello"

b: int = 10
c: float = 10.5
d: complex = 5 + 1j

e: list = [1, 2, 3]
f: tuple = (1, 2, 3)
g: range = range(5)

h: dict = {"name": "John", "age": 36}

i: set = {1, 2, 3}
j: frozenset = frozenset({1, 2, 3})

k: bool = True

l: bytes = b"Hello"
m: bytearray = bytearray(5)
n: memoryview = memoryview(bytes(5))

o: None = None

print(type(a))
print(type(b))
print(type(c))
print(type(d))
