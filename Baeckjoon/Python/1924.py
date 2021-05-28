x, y = map(int, input().split())
week = ['MON','TUE','WED','THU','FRI','SAT','SUN']
month = [31,28,31,30,31,30,31,31,30,31,30,31]
print(week[(sum(month[i] for i in range(x-1))+y)%7-1])
