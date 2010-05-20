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
	public ref class Vector2i {
	private:
		elf_vec2i* vector;
	public:
		Vector2i(elf_vec2i* value)
		{
			this->vector = value;
		}

		~Vector2i()
		{
			this->!Vector2i();
		}

		elf_vec2i* GetVector()
		{
			return this->vector;
		}

		property int X
		{
			int get()
			{
			 	return this->vector->x;
			}
			void set(int value)
			{
				this->vector->x = value;
			}
		}

		property int Y
		{
			int get()
			{
			 	return this->vector->y;
			}
			void set(int value)
			{
				this->vector->y = value;
			}
		}
	protected:
		!Vector2i()
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
