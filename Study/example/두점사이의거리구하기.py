import math

def getDistanceBetweenTwoDots(dot1, dot2):
  dist_x = math.pow(abs(dot1[0] - dot2[0]), 2)
  dist_y = math.pow(abs(dot1[1] - dot2[1]), 2)
  distance = math.sqrt(dist_x + dist_y)
  return distance

chaeyeon = (0, 0)
nayoung = (2, 2)

result = getDistanceBetweenTwoDots(chaeyeon, nayoung)
print(result)