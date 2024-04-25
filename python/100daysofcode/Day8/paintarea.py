def paint_calc(height, width, cover):
	result = height * width / cover
	print(f"You'll need {result} cans of paint")

test_h = int(input())
test_w = int(input()) 
coverage = 5
paint_calc(height=test_h, width=test_w, cover=coverage)