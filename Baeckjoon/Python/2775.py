count = int(input())
for i in range(count):
      k = int(input())
      n = int(input())
      people = [j for j in range(1,n+1)]
      for x in range (k):
            for v in range(n-1):
                  people[v+1] += people[v]
      print(people[-1])
      
