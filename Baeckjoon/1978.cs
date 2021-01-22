using System;
public class Program {
  public static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string[] input = Console.ReadLine().Split(' ');
    int cnt = 0;
    int sosu = 0;
    for (int i = 0; i < n; i++) {
      cnt = 0;
      for (int j = 1; j < int.Parse(input[i])+1; j++) {
        if (int.Parse(input[i])%j == 0) cnt+=1;
      }
      if (cnt == 2) sosu+=1;
    }
    Console.WriteLine(sosu);
  }
}