target = int(input())

result = 0
for n in range(0, target + 1):
	if n % 2 == 0:
		result = result + n

print(result)

result = 0
for n in range(0, target + 1, 2):
	if n % 2 == 0:
		result = result + n

print(result)