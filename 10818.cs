using System;
public class Program {
  public static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string[] input = Console.ReadLine().Split(' ');
    int[] numbers = new int[n];
    for (int i = 0; i < n; i++) numbers[i] = int.Parse(input[i]);

    int max = -1000001;
    int min = 1000001;
    foreach (int number in numbers) {
      if (max < number) max = number;
      else if (min > number) min = number;
    }

    Console.WriteLine($"{min} {max}");
  }
}