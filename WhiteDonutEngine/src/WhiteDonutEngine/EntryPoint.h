#pragma once

#ifdef WDE_PLATFORM_WINDOWS

extern WhiteDonutEngine::Application* WhiteDonutEngine::CreateApplication();

int main(int argc, char** argv) {

	auto app = WhiteDonutEngine::CreateApplication();
	app->Run();
	delete app;
}


#endif