import sys

print("Welcome to the Jungle!")

total_bill: float = float(input("What was the total bill? $"))
tip_percentage: int = int(input("How much tip would you like to give? 10, 12, or 15? "))
if (tip_percentage == 10 or tip_percentage == 12 or tip_percentage == 15):
    people_count: int = int(input("How many people to split the bill? "))
else:
    print("this calc is dumb please enter valid number")
    sys.exit()

result: float = (total_bill * (tip_percentage + 100) / 100) / people_count

print(f"Each person should pay: ${result:.2f}")