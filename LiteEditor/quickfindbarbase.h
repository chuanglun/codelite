//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 The CodeLite Team
// File name            : quickfindbarbase.h
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
// wxCrafter project file: quickfindbarbase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_LITEEDITOR_QUICKFINDBARBASE_BASE_CLASSES_H
#define CODELITE_LITEEDITOR_QUICKFINDBARBASE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/popupwin.h>
#include <wx/checkbox.h>
#include <wx/imaglist.h>
#include <wx/bitmap.h>
#include <map>
#include <wx/icon.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class QuickFindBarBase : public wxPanel
{
protected:

protected:

public:
    QuickFindBarBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(400,-1), long style = wxTAB_TRAVERSAL|wxTRANSPARENT_WINDOW);
    virtual ~QuickFindBarBase();
};


class QuickFindBarOptionsMenuBase : public wxPopupTransientWindow
{
protected:
    wxPanel* m_panel71;
    wxCheckBox* m_checkBoxCase;
    wxCheckBox* m_checkBoxRegex;
    wxCheckBox* m_checkBoxWord;
    wxCheckBox* m_checkBoxWildcard;
    wxCheckBox* m_checkBoxMultipleSelections;

protected:
    virtual void OnCheckBoxRegex(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCheckWild(wxCommandEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetCheckBoxCase() { return m_checkBoxCase; }
    wxCheckBox* GetCheckBoxRegex() { return m_checkBoxRegex; }
    wxCheckBox* GetCheckBoxWord() { return m_checkBoxWord; }
    wxCheckBox* GetCheckBoxWildcard() { return m_checkBoxWildcard; }
    wxCheckBox* GetCheckBoxMultipleSelections() { return m_checkBoxMultipleSelections; }
    wxPanel* GetPanel71() { return m_panel71; }
    QuickFindBarOptionsMenuBase(wxWindow* parent, long style = wxBORDER_NONE);
    virtual ~QuickFindBarOptionsMenuBase();
};


class QuickFindBarImages : public wxImageList
{
protected:
    // Maintain a map of all bitmaps representd by their name
    std::map<wxString, wxBitmap> m_bitmaps;


protected:

public:
    QuickFindBarImages();
    const wxBitmap& Bitmap(const wxString &name) const {
        if ( !m_bitmaps.count(name) )
            return wxNullBitmap;
        return m_bitmaps.find(name)->second;
    }
    virtual ~QuickFindBarImages();
};

#endif
