inputs = [int(input()) for _ in range(5)]
day = holiday = 0

while inputs[0] != day:
  if inputs[1] <= 0 and inputs[2] <= 0:  holiday += 1;
  else:  inputs[1]-=inputs[3]; inputs[2]-=inputs[4]
  day += 1

print(holiday)