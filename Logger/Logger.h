#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <memory>

class Logger
{
	FILE* m_pStream;
	std::string m_Tag;
	Logger();
	~Logger();

public:
	Logger(const Logger&) = delete;
	Logger& operator = (const Logger&) = delete;
	static Logger& Instance();

	void WriteLog(const char* pMessage);
	void SetTag(const char* pTag);
};

