import sys

line1 = ["⬜️","️⬜️","️⬜️"]
line2 = ["⬜️","⬜️","️⬜️"]
line3 = ["⬜️️","⬜️️","⬜️️"]
map = [line1, line2, line3]
print("Hiding your treasure! X marks the spot.")
position = input() # Where do you want to put the treasure?
# 🚨 Don't change the code above 👆
# Write your code below this row 👇
##B3

if len(position) != 2:
    print("enter valid position")
    sys.exit()
if position[0] not in "ABC":
    print("enter valid position")
    sys.exit()
if position[1] not in "123":
    print("enter valid position")
    sys.exit()

x_coordinate = int(position[1]) - 1
y_coordinate = ord(position[0]) - 64 - 1

map[x_coordinate][y_coordinate] = "X"
# Write your code above this row 👆
# 🚨 Don't change the code below 👇
print(f"{line1}\n{line2}\n{line3}")