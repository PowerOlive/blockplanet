/*
BlockPlanet


This file is part of BlockPlanet.
Minetest
Copyright (C) 2013 celeron55, Perttu Ahola <celeron55@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef S_ENTITY_H_
#define S_ENTITY_H_

#include "cpp_api/s_base.h"
#include "irr_v3d.h"

struct ObjectProperties;
struct ToolCapabilities;

class ScriptApiEntity
		: virtual public ScriptApiBase
{
public:
	bool luaentity_Add(u16 id, const char *name);
	void luaentity_Activate(u16 id,
			const std::string &staticdata, u32 dtime_s);
	void luaentity_Remove(u16 id);
	std::string luaentity_GetStaticdata(u16 id);
	void luaentity_GetProperties(u16 id,
			ObjectProperties *prop);
	void luaentity_Step(u16 id, float dtime);
	void luaentity_Punch(u16 id,
			ServerActiveObject *puncher, float time_from_last_punch,
			const ToolCapabilities *toolcap, v3f dir);
	void luaentity_Rightclick(u16 id,
			ServerActiveObject *clicker);
};



#endif /* S_ENTITY_H_ */
