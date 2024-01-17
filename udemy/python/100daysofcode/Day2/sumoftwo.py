two_digit_number = input("sayı giriniz: \n")

numberlist = list(two_digit_number)

toplam = 0

for sayi in numberlist:
    toplam = toplam + int(sayi)

print(toplam)