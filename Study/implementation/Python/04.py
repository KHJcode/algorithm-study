alphabet, number = [], []

scan = input()

for s in scan:
  if s.isalpha():
    alphabet.append(s)
    continue
  number.append(int(s))

for i in range(len(alphabet)):
  for j in range(len(alphabet) - 1):
    if ord(alphabet[j]) > ord(alphabet[j + 1]):
      alphabet[j], alphabet[j + 1] = alphabet[j + 1], alphabet[j]

print(''.join(alphabet) + str(sum(number)) if len(number) != 0 else '')
