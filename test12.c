int read(int number1, int number2, char string[])
{
    int current, c;
    c = string[number1 - 1];
    current = current + (c - 48);
    for (int i = number1; i < number2; i++)
    {
        current *= 10;
        c = string[i];
        current += c - 48;
    }
    int result = current;

    return result;
}