#include "Logger.h"

void OpenConnection() {
	Logger& lg = Logger::Instance();
	lg.WriteLog("Attempting to open connection");
}

int main() {
	Logger& lg = Logger::Instance();
	lg.SetTag("Tag");
	lg.WriteLog("Application has started");
	OpenConnection();
	lg.WriteLog("Application is shutting down");
}