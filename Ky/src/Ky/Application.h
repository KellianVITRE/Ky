#pragma once

#include "Core.h"

namespace Ky {

	class KY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined by client
	Application* CreateApplication();

}