import random
import hangmanart
import hangmanwords
import os
stages = hangmanart.stages
word_list: list = hangmanwords.word_list
guesslist: list = []
selectedword: str = random.choice(word_list)
guessedchars:list = []
lives: int = 6

for n in range(0, len(selectedword)):
	guesslist.append("_")


print(f"{hangmanart.logo}")
print(f"                   \n            remaining lives: {lives}{stages[lives]}Lately guessed: {guessedchars}")
print(guesslist)
print("-------------------------")

while (selectedword != ''.join(guesslist) and lives >= 1):
	guessed_char: str = input("\nGuess a char: ").lower()
	if guessed_char not in guessedchars:
		guessedchars.append(guessed_char)
	for n in range(0, len(selectedword)):
		if guessed_char == selectedword[n]:
			guesslist[n] = guessed_char
	if guessed_char not in selectedword or guessed_char in guesslist:
		lives = lives - 1
	os.system('clear')
	print(f"{hangmanart.logo}")
	print(f"                   \n            remaining lives: {lives}{stages[lives]}Lately guessed: {guessedchars}")
	print(f"{guesslist}")
	print("-------------------------")

if "_" in guesslist:
	print(f"You loose, word was \"{selectedword}\"")
else:
	print("You win")

	


#TODO-1: - Create a variable called 'lives' to keep track of the number of lives left. 
#Set 'lives' to equal 6.
#TODO-2: - If guess is not a letter in the chosen_word,
#Then reduce 'lives' by 1. 
#If lives goes down to 0 then the game should stop and it should print "You lose."
#TODO-3: - print the ASCII art from 'stages' that corresponds to the current number of 'lives' the user has remaining.