/**
* Copyright (C) 2009 Trever Fischer <wm161@wm161.net>
*
* This file is part of PulseAudio-Qt.
*
*  Glovebox is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  Glovebox is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with PulseAudio-Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "mainloop.h"


Mainloop::Mainloop()
{
    m_loop = pa_glib_mainloop_new(NULL);
}

Mainloop::~Mainloop()
{
    pa_glib_mainloop_free(m_loop);
}

pa_mainloop_api*
Mainloop::api() const
{
    return pa_glib_mainloop_get_api(m_loop);
}