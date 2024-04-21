import random

names_string = "Angela, Ben, Jenny, Michael, Chloe"
names = names_string.split(", ") ##liste verir

who: str = names[random.randint(len(names) - 1)] ##len fonksiyonu uzunluğu verir

print(who)