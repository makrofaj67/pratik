import base64

with open("flag", "r") as file:
	flaglist = file.readlines()

for i in range(len(flaglist)):
	flaglist[i] = chr(int(flaglist[i]))

print(''.join(flaglist))