//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 The CodeLite Team
// File name            : EclipseCMakeThemeImporter.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#ifndef ECLIPSECMAKETHEMEIMPORTER_H
#define ECLIPSECMAKETHEMEIMPORTER_H

#include "EclipseThemeImporterBase.h" // Base class: EclipseThemeImporterBase
#include "codelite_exports.h"

class WXDLLIMPEXP_SDK EclipseCMakeThemeImporter : public EclipseThemeImporterBase
{
public:
    EclipseCMakeThemeImporter();
    virtual ~EclipseCMakeThemeImporter();
    
    virtual LexerConf::Ptr_t Import(const wxFileName& eclipseXmlFile);
};

#endif // ECLIPSECMAKETHEMEIMPORTER_H
