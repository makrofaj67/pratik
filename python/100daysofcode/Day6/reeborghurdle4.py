def turn_right():
    turn_left()
    turn_left()
    turn_left()

def move_up():
    while not right_is_clear():
        move()

def move_down():
    while not right_is_clear() and front_is_clear():
        move()

def jump():
    turn_left()
    move_up()
    turn_right()
    move()
    turn_right()
    move()
    move_down()
    turn_left()

while not at_goal():
    if front_is_clear():
        move()
    else:
        jump()