student_heights = input().split()
for n in range(0, len(student_heights)):
	student_heights[n] = int(student_heights[n])

count: int = 0
total: int = 0
for height in student_heights:
	count += 1
	total = height + total

print(total / count)