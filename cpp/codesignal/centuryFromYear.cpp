int solution(int year)
{
    int first = year / 1000 % 10;
    int second = year / 100 % 10;
    int last = year % 10;
    ostringstream oss;

    oss << first << second;

    istringstream iss(oss.str());
    int century;

    iss >> century;
    if (last == 0)
    {
        return century;
    }
    else
    {
        return century + 1;
    }
}