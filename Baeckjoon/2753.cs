using System;
public class Program {
  public static void Main()
  {
    int input = int.Parse(Console.ReadLine());
    if (input % 4 == 0 && (input % 100 != 0 || input % 400 == 0)) Console.WriteLine(1);
    else Console.WriteLine(0);
  }
}