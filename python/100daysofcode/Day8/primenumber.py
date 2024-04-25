def prime_checker(number):
	
	if number == 1:
		print("its not prime")
		return 0
	if number == 2:
		print("it is prime")
		return 1
	i = 2
	while (i * i <= number):
		if number % i == 0:
			print("its not prime")
			return 0
		i = i + 1
	print("it is prime")


number = int(input()) # Check this number
prime_checker(number=number)