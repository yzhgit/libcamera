#pragma once

#include <QList>
#include <QString>

#include "GlobalDefines.h"

class CAMERAPLUGINS_EXPORT CameraInfo
{
public:
    virtual ~CameraInfo() = 0;

    virtual QString description() const = 0;
    virtual QString deviceName() const = 0;
};

CAMERAPLUGINS_EXPORT QList<CameraInfo> availableCameras();
