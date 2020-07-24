using System;
public class Program {
  public static void Main()
  {
    string[] input =  Console.ReadLine().Split();
    int[] numbers = Array.ConvertAll(input, int.Parse);
    int e = numbers[0];
    int f = numbers[1];
    int c = numbers[2];

    int bottle = (e + f) / c;
    int now = (e + f) % c + bottle;

    while (true) {
      if (now < c) break;
      bottle += now/c;
      now = now/c + now%c;
    }

    Console.WriteLine(bottle);
  }
}