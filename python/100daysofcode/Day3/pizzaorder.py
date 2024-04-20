#Small pizza (S): $15
#Medium pizza (M): $20
#Large pizza (L): $25
#Add pepperoni for small pizza (Y or N): +$2
#Add pepperoni for medium or large pizza (Y or N): +$3
#Add extra cheese for any size pizza (Y or N): +$1

print("Thank you for choosing Python Pizza Deliveries!")

size = input(f"What size pizza do you want? S, M, or L")
add_pepperoni = input(f"Do you want pepperoni? Y or N")
extra_cheese = input(f"Do you want extra cheese? Y or N")

result: int = 0

if size == "S":
    result += 15
elif size == "M":
    result += 20
elif size == "L":
    result += 25

if add_pepperoni == "Y":
    if size == "S":
        result += 2
    else:
        result += 3

if extra_cheese == "Y":
    result += 1

print(f"Your final bill is: ${result}.")

