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

#ifndef TESTAPP_H
#define TESTAPP_H

#include <QCoreApplication>

#include "pulse-qt.h"
#include "context.h"

class TestApp : public QCoreApplication {
    
    Q_OBJECT
    
    public:
        TestApp(int argc, char** argv);
        virtual ~TestApp();
        
    public slots:
        void showSinks();
        void getSinks();
        
    private:
        Context* m_cxt;
};
#endif
