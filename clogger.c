#include <stdarg.h>
#include <stdio.h>

static void Clogger_Print(const char* format, va_list args)
{
    vprintf(format, args);
}

void Clogger_Debug(const char* format, ...)
{
#if (CLOGGER_VERBOSITY >= 3)
    va_list args;
    va_start(args, format);
    Clogger_Print(format, args);
    va_end(args);
#endif
}

void Clogger_Info(const char* format, ...)
{
#if (CLOGGER_VERBOSITY >= 2)
    va_list args;
    va_start(args, format);
    Clogger_Print(format, args);
    va_end(args);
#endif
}

void Clogger_Warn(const char* format, ...)
{
#if (CLOGGER_VERBOSITY >= 1)
    va_list args;
    va_start(args, format);
    Clogger_Print(format, args);
    va_end(args);
#endif
}

void Clogger_Error(const char* format, ...)
{
#if (CLOGGER_VERBOSITY >= 0)
    va_list args;
    va_start(args, format);
    Clogger_Print(format, args);
    va_end(args);
#endif
}