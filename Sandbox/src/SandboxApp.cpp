#include <WDE.h>

class ExampleLayer : public WDE::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		WDE_INFO("ExampleLayer::Update");
	}

	void OnEvent(WDE::Event& event) override
	{
		WDE_TRACE("{0}", event);
	}

};

class Sandbox : public WDE::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}

};

WDE::Application* WDE::CreateApplication()
{
	return new Sandbox();
}