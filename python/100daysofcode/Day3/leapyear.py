yeartocheck: int = int(input())

if yeartocheck % 4 != 0:
    print("it's not leap year")
else:
    if yeartocheck % 100 != 0:
        print("its leap")
    else:
        if yeartocheck % 400 == 0:
            print("its leap")
        else:
            print("its not leap")

#yeartocheck: int = int(input())
#if yeartocheck % 4 == 0:
#    if yeartocheck % 100 == 0:
#        if yeartocheck % 400 == 0:
#            print("It's a leap year.")
#        else:
#            print("It's not a leap year.")
#    else:
#        print("It's a leap year.")
#else:
#    print("It's not a leap year.")