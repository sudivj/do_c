#include <stdio.h>

int break_str(int pos, int count_bre, char NIC[])
{
    int n, result_1;
    n = NIC[pos - 1];
    result_1 = result_1 + n - 48;
    for (int i = pos; i < (pos + count_bre - 1); i++)
    {
        result_1 = result_1 * 10;
        n = NIC[i];
        result_1 = result_1 + n - 48;
    }

    // printf("%d", result_1);
    return result_1;
}
int main()
{
    char NIC_1[] = "771313124V";
    int res = break_str(1, 2, NIC_1);

    printf("%d\n", res);
    int sum = 411 / 100;
    printf("%d", sum);

    return 0;
}