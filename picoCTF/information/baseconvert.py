
import base64

with open("mayybe", "r") as file:
	line = file.readline()

print(base64.b64decode(line))