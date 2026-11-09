
using System;

class CombSortExample
{
    // Функция для выполнения сортировки расческой
    public static void CombSort(int[] array)
    {
        int n = array.Length;
        float gap = n;
        bool swapped;

        do
        {
            gap /= 1.3f;
            if (gap < 1)
                gap = 1;
            swapped = false;

            for (int i = 0; i + gap < n; i++)
            {
                int j = i + (int)gap;
                if (array[i] > array[j])
                {
                    // Обмен элементов
                    Swap(array, i, j);
                    swapped = true;
                }
            }

        } while (gap > 1 || swapped);
    }

    // Функция для обмена двух элементов массива
    private static void Swap(int[] array, int i, int j)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    // Пример использования сортировки расческой
    public static void Main(string[] args)
    {
        int[] data = { 5, 3, 8, 4, 2 };
        Console.WriteLine("Оригинальный массив:");
        PrintArray(data);

        CombSort(data);

        Console.WriteLine("\nОтсортированный массив:");
        PrintArray(data);
    }

    // Функция для вывода элементов массива
    private static void PrintArray(int[] array)
    {
        foreach (int item in array)
        {
            Console.Write(item + " ");
        }
        Console.WriteLine();
    }
}