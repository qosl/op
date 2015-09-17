#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstdarg>

#define ABS(a, b) ((a)>(b) ? (a)-(b) : (b)-(a))

using namespace std;

void eatline() {
    while (getchar() != '\n')
        continue;
}

void show_array(const double * ar, int n, int index = 0) {
    for (int i = 0; i < n; i++) {
        if (index != 0 && i == index)
            putchar('\n');
        printf("%.2lf ", ar[i]);
    }
    putchar('\n');
}

int mycomp(const void * p1, const void * p2) {
    const double * a1 = (const double *) p1;
    const double * a2 = (const double *) p2;

    if (*a1 > *a2)
        return -1;
    else if (*a1 == *a2)
        return 0;
    else
        return 1;
}

double split(int lim, ...) {
    double ar[lim], left[lim], right[lim];  // arrays to hold values
    double m = 0, m_l = 0, m_r = 0;         // mass of beginning heap, 'left' and 'right' heap
    va_list ap;                             // declare object to hold arguments
    va_start(ap, lim);                      // initialize ap to argument list
    for (int i = 0; i < lim; i++) {
        ar[i] = va_arg(ap, double);         // write each item from argument list to array
        m += ar[i];                         // calculate mass of 'beginning' heap
    }

    puts("\nInput:");

    show_array(ar, lim);

    double diff = m;                        // difference between kuchkas is also beginning heap

    qsort(ar, lim, sizeof(double), mycomp); // sort array in ascending order (left to right)

    puts("Output:");

    for (int i = 0; i <= lim; i++) {
        if (m_l <= m_r)
            m_l += ar[i];
        else
            m_r += ar[i];
    }

    diff = ABS(m_l, m_r);
    va_end(ap);                             // clean up
    return diff;
}

int main(void) {
    puts("Igor Mayorov, IP 44, var. 8, level V.");
    puts("Press any key to start program or Enter to exit.");
    double t;
    while(getchar() != '\n') {
        system("clear");
        puts("Igor Mayorov, IP 44, var. 8, level V.");
        puts("Press any key to start program or Enter to exit.");
        t = split(3, 1.0, 2.0, 3.0);
        printf("Difference is %g\n", t);
        eatline();
    }
    return 0;
}

