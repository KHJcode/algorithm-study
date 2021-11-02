def longestCommonPrefix(self, strs):
  prefix = ''

  if not strs:  return prefix

  for i in range(len(min(strs, key=len))):
    word = strs[0][i]
    for j in range(1, len(strs)):
      if strs[j][i] != word:  return prefix
    prefix += word

  return prefix
