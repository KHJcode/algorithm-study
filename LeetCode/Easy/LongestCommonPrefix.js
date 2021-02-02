var longestCommonPrefix = function(strs) {
  let prefix = '';

  if (strs.length > 0) {
    let minLength = strs[0].length;
      
    for (let n = 1; n < prefix.length; n++) {
      if (minLength > strs[n].length)  minLength = strs[n].length;
    }
  
    out: for (let i = 0; i < minLength; i++) {
      word = strs[0][i];
      for (let j = 1; j < strs.length; j++) {
        if (strs[j][i] != word) break out;
      }
      prefix += word;
    }
  }

  return prefix;
};
