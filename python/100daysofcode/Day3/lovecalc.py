print("The Love Calculator is calculating your score...")
name1 = input()
name2 = input()

concname = name1 + name2
concname = concname.upper

truecount: int = 0
lovecount: int = 0
score: int = 0

for letter in concname:
    if letter in "TRUE":
        truecount = truecount + 1
    if letter in "LOVE":
        lovecount = lovecount + 1

score = truecount * 10 + lovecount
print(f"Your score is {score}")
