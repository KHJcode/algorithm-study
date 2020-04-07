word = input().upper()  # 대문자화
lang = list(set(word))
score = []
for i in lang:
      score.append(0)

for j in word:
       for v in range(len(lang)):
             if (lang[v] == j):
                   score[v] += 1

if score.count(max(score)) == 1:
      print(lang[score.index(max(score))])
else:
      print('?');
      
      
      
