// gtasajs.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "gtasajs.h"
#include "ScriptRuntime.h"



ScriptRuntime *runtime;


void gtasajs::Init()
{
	runtime = ScriptRuntime::CreateRuntime();
}


void gtasajs::Main()
{
}


void gtasajs::Close()
{
	delete runtime;
}
