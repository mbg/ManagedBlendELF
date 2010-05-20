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
	public ref class Vector2f {
	private:
		elf_vec2f* vector;
	public:
		Vector2f(elf_vec2f* value)
		{
			this->vector = value;
		}

		~Vector2f()
		{
			this->!Vector2f();
		}

		elf_vec2f* GetVector()
		{
			return this->vector;
		}

		property float X
		{
			float get()
			{
			 	return this->vector->x;
			}
			void set(float value)
			{
				this->vector->x = value;
			}
		}

		property float Y
		{
			float get()
			{
			 	return this->vector->y;
			}
			void set(float value)
			{
				this->vector->y = value;
			}
		}
	protected:
		!Vector2f()
		{
			if(this->vector)
			{
				delete this->vector;
			}
		}
	};
}

/*
	End of File
*/
