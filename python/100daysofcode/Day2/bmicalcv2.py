bmi: int

height: int = input()
weight: int = input()

bmi = int(float(weight) / float(height) ** 2)
print(bmi)
