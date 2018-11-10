#pragma once

//For use by Hazel Application

#include <stdio.h>

#include "Ky/Application.h"

//Entry Point//
#include "Ky/EntryPoint.h"
// // // // //

#define KyCreateApplication(x) Ky::Application* Ky::CreateApplication() { return new x; }