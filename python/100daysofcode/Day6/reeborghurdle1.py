def turn_right():
    turn_left()
    turn_left()
    turn_left()

while not at_goal():
    if front_is_clear() and not right_is_clear():
        move()
    elif front_is_clear() and right_is_clear():
        turn_right()
        move()
        turn_right()
        move()
        turn_left()
    else:
        turn_left()