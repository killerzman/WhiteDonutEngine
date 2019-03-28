#pragma once

#include "Core.h"

#include "Window.h"
#include "WDE/LayerStack.h"
#include "WDE/Events/Event.h"
#include "WDE/Events/ApplicationEvent.h"

namespace WDE {
	class WDE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	//To be defined in Client
	Application* CreateApplication();
}
