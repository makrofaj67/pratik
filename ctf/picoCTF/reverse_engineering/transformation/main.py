with open("enc.1", "r") as file:
	flag = file.readline()

decrypted_flag = ''.join([chr(ord(c) >> 8) + chr(ord(c) % 256) for c in flag])
#''.join([chr((ord(flag[i]) << 8) + ord(flag[i + 1])) for i in range(0, len(flag), 2)])
print(decrypted_flag)