##köşeli parantez ile yapılır

fruits: list = ["1", "1"]

print(fruits[0])
print(fruits[-1])
print(fruits)

fruits[0] = "2"
print(fruits)
##fruits[2] = "üzüm"
fruits.append("ananas")
print(fruits)
fruits.extend([1, 2])
print(fruits)
fruits.insert(1, "kalem")
print(fruits)
fruits.pop(1)
print(fruits)
fruits.remove(1)
print(fruits)
fruits.index(2)
fruits.count(1)
print(fruits)
fruits.reverse()
print(fruits)
fruits.clear()
print(fruits)
fruits.sort()
print(fruits)
fruits.copy()