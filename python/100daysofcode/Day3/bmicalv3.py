height: float = float(input())
weight: float = float(input())

bmi: float = weight / (height ** 2)

if bmi >= 35:
    print(f"you are clinically obese and your bmi is {bmi:.2f}")
elif bmi < 35 and bmi >= 30:
    print(f"you are obese and your bmi is {bmi:.2f}")
elif bmi < 30 and bmi >= 25:
    print(f"you are slightly overweight and your bmi is {bmi:.2f}")
elif bmi < 25 and bmi >= 18.5:
    print(f"your weight is normal and your bmi is {bmi:.2f}")
elif bmi < 18.5:
    print(f"you are underweight and your bmi is {bmi:.2f}")
