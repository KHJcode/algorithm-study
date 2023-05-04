rat_map = {'A+': 4.5, 'A0': 4.0, 'B+': 3.5, 'B0': 3.0, 'C+': 2.5, 'C0': 2.0, 'D+': 1.5, 'D0': 1.0, 'F': 0.0}
sco_rat = 0
sco_sum = 0

for _ in range(20):
    _subject, score, rating = map(str, input().split())
    if rating == 'P':
        continue
    score = float(score)
    sco_sum += score
    sco_rat += score * rat_map[rating]

print(sco_rat / sco_sum)
