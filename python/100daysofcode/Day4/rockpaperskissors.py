import random
import sys

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

handlist = [rock, paper, scissors]

print("What do you choose? Type 0 for Rock, 1 for Paper or 2 for Scissors.")
user_choice = int(input())
if user_choice not in [0, 1, 2]:
    print("Please give valid input")
    sys.exit()
print(handlist[user_choice])
print("Computer chose:")
computer_choice = random.randint(0, 2)
print(handlist[computer_choice])

if user_choice == 0 and computer_choice == 2:
    print("You win")
elif user_choice == 2 and computer_choice == 1:
    print("You win")
elif user_choice == 1 and computer_choice == 0:
    print("You win")
elif user_choice == computer_choice:
    print("It's draw")
else:
    print("You lose")  
    
