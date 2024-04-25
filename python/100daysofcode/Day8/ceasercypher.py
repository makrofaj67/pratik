import art

alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

def inputto():
	direction = input("Type 'encode' to encrypt, type 'decode' to decrypt:\n")
	text = input("Type your message:\n").lower()
	shift = int(input("Type the shift number:\n"))
	return (direction, text, shift)

def will_continue():
	answer = input("Type 'yes' if you want to go again. Otherwise type'no'\n").lower()
	if answer == "no":
		return False
	elif answer == "yes":
		return True
	
def encode(text, shift, alphabet):
	text = list(text)
	for i in range(0, len(text)):
		if text[i] in alphabet:
			text[i] = alphabet[(alphabet.index(text[i]) + shift) % 26]
	print(''.join(text))

def decode(text, shift, alphabet):
	text = list(text)
	for i in range(0, len(text)):
		if text[i] in alphabet:
			text[i] = alphabet[(alphabet.index(text[i]) - shift) % 26]
	print(''.join(text))


def game(direction, text, shift, alphabet):
	if direction == "encode":
		encode(text, shift, alphabet=alphabet)
	if direction == "decode":
		decode(text, shift, alphabet=alphabet)

print(art.logo)
y = inputto()
game(y[0], y[1], y[2], alphabet=alphabet)
willgo = will_continue()
while willgo:
	y = inputto()
	game(y[0], y[1], y[2], alphabet=alphabet)
	willgo = will_continue()