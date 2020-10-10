#include "../clogger.h"

void main() {
    Clogger_Error("I am an error\n");
    Clogger_Warn("I am a warning\n");
    Clogger_Info("I am an info log\n");
    Clogger_Debug("I am a debug log\n");
}