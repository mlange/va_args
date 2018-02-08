
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void VTrace(char *format, va_list args)
{
    vprintf(format, args);
}

void Trace(char *format, ...)
{
    va_list args;

    va_start(args, format);

    printf("Fmt: %p %s Args: %p\n", format, format, args);

    VTrace(format, args);

    va_end(args);
}

int main(int argc, char *arv[])
{
    Trace("Test %s %s", "foo", "bar");

    exit(0);
}
