int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
//get console size (windows)
GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;