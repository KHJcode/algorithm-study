X = int(input())
stage = first_x = 1
while (stage + first_x) <= X:
      first_x += stage
      stage += 1
step = X-first_x
if stage %2 == 0:
      print('{}/{}'.format(step+1, stage-step))
else:
      print('{}/{}'.format(stage-step, step+1))
