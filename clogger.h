/**
 * Enable logs by compiling with CLOGGER_VERBOSITY=level
 *
 * where level =
 *   0 for Error
 *   1 for Warnings and Errors
 *   2 for Info, Warnings, and Errors
 *   3 for Debug, Info, Warnings, and Errors
 */


void Clogger_Error(const char* format, ...);
void Clogger_Warn(const char* format, ...);
void Clogger_Info(const char* format, ...);
void Clogger_Debug(const char* format, ...);
