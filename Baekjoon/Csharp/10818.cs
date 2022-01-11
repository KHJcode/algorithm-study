using System;
public class Program {
  public static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string[] input = Console.ReadLine().Split();
    int[] numbers = Array.ConvertAll(input, int.Parse);

    int max = numbers[0];
    int min = numbers[0];
    foreach (int number in numbers) {
      if (max < number) max = number;
      else if (min > number) min = number;
    }

    Console.WriteLine(min+" "+max);
  }
}