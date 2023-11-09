#include <stdio.h>

#include <string.h>

int main()

{

    char a[1000];

    char b[1000];

    printf("Enter the first name: ");

    scanf("%s", a);

    printf("Enter the second name: ");

    scanf("%s", b);

    int n, m;

    n = strlen(a);

    m = strlen(b);

    printf("%d %d\n", n, m);

    int count = n + m;

    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < m; j++)

        {

            if (a[i] == b[j])

            {

                count = count - 2;

                b[j] = 0;

                a[i] = 0;

                break;
            }
        }
    }

    printf("%d\n", count);

    char f[6] = "FLAMES";

    int x = count % 6;

    char g[5];

    int i = 0;

    for (int j = x; j < 6; j++)

    {

        g[i] = f[j];

        i++;
    }

    for (int j = 0; j <= (x - 2); j++)

    {

        g[i] = f[j];

        i++;
    }

    int y;

    if (count % 5 != 0)

    {

        y = count % 5;
    }

    else

    {

        y = 5;
    }

    char h[4];

    i = 0;

    for (int j = y; j < 5; j++)

    {

        h[i] = g[j];

        i++;
    }

    for (int j = 0; j <= (y - 2); j++)

    {

        h[i] = g[j];

        i++;
    }

    int z;

    if (count % 4 != 0)

    {

        z = count % 4;
    }

    else

    {

        z = 4;
    }

    char p[3];

    i = 0;

    for (int j = z; j < 4; j++)

    {

        p[i] = h[j];

        i++;
    }

    for (int j = 0; j <= (z - 2); j++)

    {

        p[i] = h[j];

        i++;
    }

    int x1;

    if (count % 3 != 0)

    {

        x1 = count % 3;
    }

    else

    {

        x1 = 3;
    }

    char g1[2];

    i = 0;

    for (int j = x1; j < 3; j++)

    {

        g1[i] = p[j];

        i++;
    }

    for (int j = 0; j <= (x1 - 2); j++)

    {

        g1[i] = p[j];

        i++;
    }

    int y1;

    if (count % 2 != 0)

    {

        y1 = count % 2;
    }

    else

    {

        y1 = 2;
    }

    char h1[1];

    i = 0;

    for (int j = y1; j < 2; j++)

    {

        h1[i] = g1[j];

        i++;
    }

    for (int j = 0; j <= (y1 - 2); j++)

    {

        h1[i] = g1[j];

        i++;
    }

    if (h1[0] == 'F')

    {

        printf("FRIENDSHIP\n");
    }

    else if (h1[0] == 'L')

    {

        printf("LOVE\n");
    }

    else if (h1[0] == 'A')

    {

        printf("AFFAIR\n");
    }

    else if (h1[0] == 'M')

    {

        printf("MARRIAGE\n");
    }

    else if (h1[0] == 'E')

    {

        printf("ENEMY\n");
    }

    else if (h1[0] == 'S')

    {

        printf("SIBLING\n");
    }

    return 0;
}