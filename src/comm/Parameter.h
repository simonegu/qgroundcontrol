/*=====================================================================

QGroundControl Open Source Ground Control Station

(c) 2009, 2010 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>

This file is part of the QGROUNDCONTROL project

    QGROUNDCONTROL is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QGROUNDCONTROL is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with QGROUNDCONTROL. If not, see <http://www.gnu.org/licenses/>.

======================================================================*/

#ifndef PARAMETER_H
#define PARAMETER_H

#include <QString>
#include "mavlink_types.h"
#include "QGCParamID.h"

namespace OpalRT
{
class Parameter
{
public:
    Parameter(char *simulinkPath = "",
              char *simulinkName = "",
              uint8_t componentID = 0,
              QGCParamID paramID = QGCParamID(),
              unsigned short opalID = 0);
    /// \todo Implement copy constructor
    Parameter(const Parameter& other);
    ~Parameter();

    QGCParamID getParamID() {return *paramID;}
    void setOpalID(unsigned short opalID) {this->opalID = opalID;}
    const QString& getSimulinkPath() {return *simulinkPath;}
    const QString& getSimulinkName() {return *simulinkName;}
protected:
    QString *simulinkPath;
    QString *simulinkName;
    uint8_t componentID;
    QGCParamID *paramID;
    unsigned short opalID;
};
}

#endif // PARAMETER_H
