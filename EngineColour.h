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

#pragma once

namespace ManagedBlendELF {
	public ref class EngineColour {
	private:
		elf_color* colour;
	public:
		EngineColour(elf_color* value)
		{
			this->colour = value;
		}

		~EngineColour()
		{
			this->!EngineColour();
		}

		elf_color* GetColour()
		{
			return this->colour;
		}

		property float Red
		{
			float get()
			{
			 	return this->colour->r;
			}
			void set(float value)
			{
				this->colour->r = value;
			}
		}

		property float Green
		{
			float get()
			{
			 	return this->colour->g;
			}
			void set(float value)
			{
				this->colour->g = value;
			}
		}

		property float Blue
		{
			float get()
			{
			 	return this->colour->b;
			}
			void set(float value)
			{
				this->colour->b = value;
			}
		}
	protected:
		!EngineColour()
		{
			if(this->colour)
			{
				delete this->colour;
			}
		}
	};
}

/*
	End of File
*/
