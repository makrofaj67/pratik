import random

stages = ['''
  +---+
  |   |
  O   |
 /|\  |
 / \  |
      |
=========
''', '''
  +---+
  |   |
  O   |
 /|\  |
 /    |
      |
=========
''', '''
  +---+
  |   |
  O   |
 /|\  |
      |
      |
=========
''', '''
  +---+
  |   |
  O   |
 /|   |
      |
      |
=========''', '''
  +---+
  |   |
  O   |
  |   |
      |
      |
=========
''', '''
  +---+
  |   |
  O   |
      |
      |
      |
=========
''', '''
  +---+
  |   |
      |
      |
      |
      |
=========
''']

word_list: list = ["aardvark", "baboon", "camel"]
guesslist: list = []
selectedword: str = random.choice(word_list)
lives: int = 6

for n in range(0, len(selectedword)):
	guesslist.append("_")

print(stages[lives])
print(guesslist)

print("-------------------------")

while (selectedword != ''.join(guesslist) and lives >= 0):
	guessed_char: str = input("Guess a char: ").lower()
	for n in range(0, len(selectedword)):
		if guessed_char == selectedword[n]:
			guesslist[n] = guessed_char
		else:
			lives = lives - 1

	print(guesslist)
	

