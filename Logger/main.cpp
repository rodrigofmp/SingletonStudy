#include "Logger.h"
#include <thread>

void OpenConnection() {
	Logger& lg = Logger::Instance();
	lg.WriteLog("Attempting to open connection");
}

int main() {	

	std::thread first ([]() {
		Logger& lg = Logger::Instance();
		lg.SetTag("Tag");
		lg.WriteLog("Application has started");
	});	

	std::thread second([]() {
		Logger& lg = Logger::Instance();
		OpenConnection();
		lg.WriteLog("Application is shutting down");
	});

	first.join();
	second.join();

	
	

}