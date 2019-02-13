#pragma once

#include "Core.h"

namespace WDE {
	class WDE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		//int Numbers();
	};
	
	//To be defined in Client
	Application* CreateApplication();
}
