#include <iostream>

int main (void)
{
    int a, b, c, d, l;
    for (;;)
    {
        std::cin >> a >> b >> c >> d >> l;
        if (a == 0 && b == 0 && c == 0 && d == 0 && l == 0)
            return 0;

        int count = 0;
        //f(i)
        for (int i = 0; i <= l; i++)
        {
            int tmp = i * i;
            int sum = tmp * a;
            sum += b * i;
            sum += c;
            if ((sum%d) == 0)
                ++count;
        }
        std::cout << count << std::endl;
    }
    return 0;
}