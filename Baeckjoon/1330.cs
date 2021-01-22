using System;
public class Program {
  public static void Main()
  {
    string[] input = Console.ReadLine().Split(' ');
    int a = int.Parse(input[0]);
    int b = int.Parse(input[1]);

    if (a >b) Console.WriteLine(">");
    else if (a == b) Console.WriteLine("==");
    else Console.WriteLine("<");
  }
}