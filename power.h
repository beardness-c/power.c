#define POWER_ERROR_STATEMENT_INT    1
#define POWER_ERROR_STATEMENT_LONG   1L
#define POWER_ERROR_STATEMENT_FLOAT  1.F
#define POWER_ERROR_STATEMENT_DOUBLE 1.0

int    int_power    (int    base, int  n);
long   long_power   (long   base, long n);
float  float_power  (float  base, int  n);
double double_power (double base, int  n);

/*
    Power fot INT

    result = base ** n
    result = base ^ n

    Params :
        int base - base of power
        int n    - head of power
    
    Return :
        int result - power b with head n
*/
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

/*
    Power fot LONG

    result = base ** n
    result = base ^ n

    Params :
        long base - base of power
        long n    - head of power
    
    Return :
        long result - power b with head n
*/
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

/*
    Power fot FLOAT

    result = base ** n
    result = base ^ n

    Params :
        float base - base of power
        float n    - head of power
    
    Return :
        float result - power b with head n
*/
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

/*
    Power fot DOUBLE

    result = base ** n
    result = base ^ n

    Params :
        double base - base of power
        double n    - head of power
    
    Return :
        double result - power b with head n
*/
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