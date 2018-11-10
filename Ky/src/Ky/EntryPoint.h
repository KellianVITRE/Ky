#pragma once

#ifdef KY_PLATFORM_WINDOWS

extern Ky::Application* Ky::CreateApplication();
	
int main(int argc, char** argv)
{
	auto app = Ky::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Ky only supports Windows
#endif