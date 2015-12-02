//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 The CodeLite Team
// File name            : editoroptionsgeneralguidespanelbase.h
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

//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: editor_options_guides.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_LITEEDITOR_EDITOR_OPTIONS_GUIDES_BASE_CLASSES_H
#define CODELITE_LITEEDITOR_EDITOR_OPTIONS_GUIDES_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/propgrid/manager.h>
#include <wx/propgrid/property.h>
#include <wx/propgrid/advprops.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class EditorOptionsGeneralGuidesPanelBase : public wxPanel
{
protected:
    wxPropertyGridManager* m_pgMgrGeneral;
    wxPGProperty* m_pgPropCategoryGeneral;
    wxPGProperty* m_pgPropDisplayLineNumbers;
    wxPGProperty* m_pgPropHighlightMatchedBrace;
    wxPGProperty* m_pgPropHideEditMargin;
    wxPGProperty* m_pgPropShowIndentGuidelines;
    wxPGProperty* m_pgPropDisableSemiColonShift;
    wxPGProperty* m_pgPropWhitespaces;
    wxPGProperty* m_pgPropWhitespaceVisibility;
    wxPGProperty* m_pgPropEOLMode;
    wxPGProperty* m_pgPropCaretLine;
    wxPGProperty* m_pgPropEnableCaretLine;
    wxPGProperty* m_pgPropCaretLineColour;
    wxPGProperty* m_pgPropCaretLineAlpha;
    wxPGProperty* m_pgPropDebuggerMarker;
    wxPGProperty* m_pgPropHighlightDebuggerMarker;
    wxPGProperty* m_pgPropDebuggerLineColour;

protected:

public:
    wxPropertyGridManager* GetPgMgrGeneral() { return m_pgMgrGeneral; }
    EditorOptionsGeneralGuidesPanelBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,500), long style = wxTAB_TRAVERSAL);
    virtual ~EditorOptionsGeneralGuidesPanelBase();
};


class EditorOptionsGeneralEditBase : public wxPanel
{
protected:
    wxPropertyGridManager* m_pgMgrEdit;
    wxPGProperty* m_pgProp8;
    wxPGProperty* m_pgPropSmartCurly;
    wxPGProperty* m_pgPropSmartParentheses;
    wxPGProperty* m_pgPropSmartQuotes;
    wxPGProperty* m_pgProp16;
    wxPGProperty* m_pgPropWrapQuotes;
    wxPGProperty* m_pgPropWrapBrackets;
    wxPGProperty* m_pgProp56;
    wxPGProperty* m_pgPropZoomUsingCtrlScroll;

protected:
    virtual void OnValueChanged(wxPropertyGridEvent& event) { event.Skip(); }

public:
    wxPropertyGridManager* GetPgMgrEdit() { return m_pgMgrEdit; }
    EditorOptionsGeneralEditBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~EditorOptionsGeneralEditBase();
};

#endif
