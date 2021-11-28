bool check(string left, string right)
{
    int len = right.length();
    int n = len - 1;
    for (int i = 0; i < (len / 2); i++)
    {
        swap(right[i], right[n]);
        n = n - 1;
    }
    cout << left << endl;
    cout << right << endl;

    if (left == right)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool solution(string inputString)
{
    if (inputString.size() % 2 == 0)
    {
        string left = inputString.substr(0, inputString.size() / 2);
        string right = inputString.substr(inputString.size() / 2, inputString.size());
        return check(left, right);
    }
    else
    {
        string left = inputString.substr(0, inputString.size() / 2);
        string right = inputString.substr(inputString.size() / 2 + 1, inputString.size());
        return check(left, right);
    }
}
