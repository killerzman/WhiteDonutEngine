#pragma once

#include "Core.h"

namespace WhiteDonutEngine {
	class WHITEDONUTENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	
	//To be defined in Client
	Application* CreateApplication();
}
