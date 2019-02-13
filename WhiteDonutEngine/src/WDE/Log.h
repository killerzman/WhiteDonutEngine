#pragma once

#include <memory>

#include "spdlog/spdlog.h"
#include "Core.h"

namespace WDE {

	class WDE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}


//Core log macros
#define WDE_CORE_TRACE(...)    ::WDE::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define WDE_CORE_INFO(...)     ::WDE::Log::GetCoreLogger()->info(__VA_ARGS__)
#define WDE_CORE_WARN(...)     ::WDE::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define WDE_CORE_ERROR(...)    ::WDE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define WDE_CORE_FATAL(...)    ::WDE::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define WDE_TRACE(...)         ::WDE::Log::GetClientLogger()->trace(__VA_ARGS__)
#define WDE_INFO(...)          ::WDE::Log::GetClientLogger()->info(__VA_ARGS__)
#define WDE_WARN(...)          ::WDE::Log::GetClientLogger()->warn(__VA_ARGS__)
#define WDE_ERROR(...)         ::WDE::Log::GetClientLogger()->error(__VA_ARGS__)
#define WDE_FATAL(...)         ::WDE::Log::GetClientLogger()->fatal(__VA_ARGS__)