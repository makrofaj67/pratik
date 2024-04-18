print("Welcome to the Tip calculator.")
totalbill = input("What was the total bill? $")
percentage = input("What percentage tip would you like to give? 10, 12 or 15? ")
howmanypeople = input("How many people to split the bill? ")

shouldpay = float(totalbill) * (float(percentage) + 100) / 100 / float(howmanypeople)

print(f"Each person should pay: ${shouldpay:.2f}")