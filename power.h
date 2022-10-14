#define POWER_ERROR_STATEMENT_INT    1
#define POWER_ERROR_STATEMENT_LONG   1L
#define POWER_ERROR_STATEMENT_FLOAT  1.F
#define POWER_ERROR_STATEMENT_DOUBLE 1.0

int    int_power    (int    base, int  n);
long   long_power   (long   base, long n);
float  float_power  (float  base, int  n);
double double_power (double base, int  n);

int int_power(int base, int n)
{
    if (n < 0)  return POWER_ERROR_STATEMENT_INT;
    if (n == 0) return 1;
    if (n == 1) return base;
    
    int acc = 1;

    for (int i = 0; i < n; i++) {
        acc *= n;
    }

    return acc;
}

long long_power(long base, long n)
{
    if (n < 0)  return POWER_ERROR_STATEMENT_LONG;
    if (n == 0) return 1L;
    if (n == 1) return base;
    
    long acc = 1L;

    for (long i = 0; i < n; i++) {
        acc *= n;
    }

    return acc;
}

float float_power(float base, int n)
{
    if (n < 0)  return POWER_ERROR_STATEMENT_INT;
    if (n == 0) return 1.F;
    if (n == 1) return base;
    
    float acc = 1.F;

    for (int i = 0; i < n; i++) {
        acc *= n;
    }

    return acc;
}

double double_power(double base, int n)
{
    if (n < 0)  return POWER_ERROR_STATEMENT_INT;
    if (n == 0) return 1.0;
    if (n == 1) return base;
    
    double acc = 1.0;

    for (int i = 0; i < n; i++) {
        acc *= n;
    }

    return acc;
}