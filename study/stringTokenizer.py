def stringTokenizer(string, math_word_list = ['+','-','*','/','//','(',')','{','}','%','^']):
  result = []; acmt = ''
  for s in string:
    if s in math_word_list:
      if acmt != '':  result.append(acmt);acmt = ''
      result.append(s)
    else:  acmt += s
  return result

data = "13+24*(35-46.76)"

result = stringTokenizer(data)
print(result)
