/*
	ManagedBlendELF
	-----------------------------------------------------------
	 Copyright (C) 2010 Michael Gale

  	This software is provided 'as-is', without any express or implied
  	warranty.  In no event will the authors be held liable for any damages
  	arising from the use of this software.

  	Permission is granted to anyone to use this software for any purpose,
  	including commercial applications, and to alter it and redistribute it
  	freely, subject to the following restrictions:

  	1. The origin of this software must not be misrepresented; you must not
       claim that you wrote the original software. If you use this software
       in a product, an acknowledgment in the product documentation would be
       appreciated but is not required.
  	2. Altered source versions must be plainly marked as such, and must not be
       misrepresented as being the original software.
  	3. This notice may not be removed or altered from any source distribution.
*/

#include "Stdafx.h"

using namespace ManagedBlendELF;

EngineHandle::EngineHandle(elf_handle* handle)
{
	this->unmanagedHandle = handle;
}

EngineHandle::~EngineHandle()
{
	this->!EngineHandle();
}

elf_handle* EngineHandle::GetHandle()
{
	return this->unmanagedHandle;
}

EngineHandle::!EngineHandle()
{
	if(this->unmanagedHandle)
	{
		delete this->unmanagedHandle;
	}
}

bool EngineHandle::IsValid()
{
	return elfIsObject(*this->unmanagedHandle);
}

ObjectType EngineHandle::Type::get()
{
	return (ObjectType)elfGetObjectType(*this->unmanagedHandle);
}

/*
	End of File
*/