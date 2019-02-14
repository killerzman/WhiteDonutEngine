#include "wdepch.h"
#include "Application.h"

#include "WDE/Events/ApplicationEvent.h"
#include "WDE/Log.h"

namespace WDE {

	Application::Application()
	{
	}


	Application::~Application()
	{
	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			WDE_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			WDE_TRACE(e);
		}
	}

}