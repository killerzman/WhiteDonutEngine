#pragma once

#ifdef WDE_PLATFORM_WINDOWS

extern WDE::Application* WDE::CreateApplication();

#include <iostream>

int main(int argc, char** argv) {

	WDE::Log::Init();
	WDE_CORE_WARN("Initialized Log!");
	WDE_INFO("Hello! Var={0}" , 5);

	auto app = WDE::CreateApplication();
	//std::cout << app->Numbers();
	app->Run();
	delete app;
}


#endif