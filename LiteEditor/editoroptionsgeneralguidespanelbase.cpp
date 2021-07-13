//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: editor_options_guides.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "editoroptionsgeneralguidespanelbase.h"

// Declare the bitmap loading function
extern void wxC77E7InitBitmapResources();

static bool bBitmapLoaded = false;

EditorOptionsGeneralGuidesPanelBase::EditorOptionsGeneralGuidesPanelBase(wxWindow* parent, wxWindowID id,
                                                                         const wxPoint& pos, const wxSize& size,
                                                                         long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC77E7InitBitmapResources();
        bBitmapLoaded = true;
    }

    bSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer1);

    wxArrayString m_pgMgrGeneralArr;
    wxUnusedVar(m_pgMgrGeneralArr);
    wxArrayInt m_pgMgrGeneralIntArr;
    wxUnusedVar(m_pgMgrGeneralIntArr);
    m_pgMgrGeneral = new wxPropertyGridManager(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                               wxPG_DESCRIPTION | wxPG_SPLITTER_AUTO_CENTER | wxPG_BOLD_MODIFIED);

    bSizer1->Add(m_pgMgrGeneral, 1, wxALL | wxEXPAND, WXC_FROM_DIP(0));

    m_pgPropCategoryGeneral = m_pgMgrGeneral->Append(new wxPropertyCategory(_("General")));
    m_pgPropCategoryGeneral->SetHelpString(wxT(""));

    m_pgPropDisplayLineNumbers = m_pgMgrGeneral->AppendIn(
        m_pgPropCategoryGeneral, new wxBoolProperty(_("Show line numbers margin"), wxPG_LABEL, 1));
    m_pgPropDisplayLineNumbers->SetHelpString(_("Show line numbers margin"));

    m_pgPropRelativeLineNumbers = m_pgMgrGeneral->AppendIn(
        m_pgPropCategoryGeneral, new wxBoolProperty(_("Enable Relative line numbers"), wxPG_LABEL, 0));
    m_pgPropRelativeLineNumbers->SetHelpString(_("Enable Relative line numbers"));

    m_pgPropHiglightLineNumber = m_pgMgrGeneral->AppendIn(
        m_pgPropCategoryGeneral, new wxBoolProperty(_("Highlight the current line number"), wxPG_LABEL, 1));
    m_pgPropHiglightLineNumber->SetHelpString(_("Highlight the current line number"));

    m_pgPropHighlightMatchedBrace = m_pgMgrGeneral->AppendIn(
        m_pgPropCategoryGeneral, new wxBoolProperty(_("Highlight matched braces"), wxPG_LABEL, 1));
    m_pgPropHighlightMatchedBrace->SetHelpString(_("Highlight matched braces"));

    m_pgPropHideEditMargin =
        m_pgMgrGeneral->AppendIn(m_pgPropCategoryGeneral, new wxBoolProperty(_("Hide the edit margin"), wxPG_LABEL, 1));
    m_pgPropHideEditMargin->SetHelpString(_("Hide the edit margin ( the red/green marks when a line is modified)"));

    m_pgPropShowIndentGuidelines = m_pgMgrGeneral->AppendIn(
        m_pgPropCategoryGeneral, new wxBoolProperty(_("Show indentation guidelines"), wxPG_LABEL, 1));
    m_pgPropShowIndentGuidelines->SetHelpString(_("Show indentation guidelines (vertical lines)"));

    m_pgPropDisableSemiColonShift = m_pgMgrGeneral->AppendIn(
        m_pgPropCategoryGeneral, new wxBoolProperty(_("Disable semicolon shift"), wxPG_LABEL, 1));
    m_pgPropDisableSemiColonShift->SetHelpString(
        _("By default when typing \";\" next to a close brace \")\" CodeLite will move the \";\" to the right\nThis "
          "option enables or disables this behavior"));

    m_pgPropWhitespaces = m_pgMgrGeneral->Append(new wxPropertyCategory(_("Whitespaces")));
    m_pgPropWhitespaces->SetHelpString(wxT(""));

    m_pgMgrGeneralArr.Clear();
    m_pgMgrGeneralIntArr.Clear();
    m_pgMgrGeneralArr.Add(_("Invisible"));
    m_pgMgrGeneralArr.Add(_("Visible always"));
    m_pgMgrGeneralArr.Add(_("Visible after indentation"));
    m_pgPropWhitespaceVisibility =
        m_pgMgrGeneral->AppendIn(m_pgPropWhitespaces, new wxEnumProperty(_("Whitespace visibility"), wxPG_LABEL,
                                                                         m_pgMgrGeneralArr, m_pgMgrGeneralIntArr, 0));
    m_pgPropWhitespaceVisibility->SetHelpString(_("Whitespace visibility policy"));

    m_pgMgrGeneralArr.Clear();
    m_pgMgrGeneralIntArr.Clear();
    m_pgMgrGeneralArr.Add(_("Default"));
    m_pgMgrGeneralArr.Add(_("Mac (CR)"));
    m_pgMgrGeneralArr.Add(_("Windows (CRLF)"));
    m_pgMgrGeneralArr.Add(_("Unix (LF)"));
    m_pgPropEOLMode = m_pgMgrGeneral->AppendIn(
        m_pgPropWhitespaces, new wxEnumProperty(_("EOL Mode"), wxPG_LABEL, m_pgMgrGeneralArr, m_pgMgrGeneralIntArr, 0));
    m_pgPropEOLMode->SetHelpString(_("Set the editor's EOL mode (End Of Line)"));

    m_pgPropLineSpacing =
        m_pgMgrGeneral->AppendIn(m_pgPropWhitespaces, new wxIntProperty(_("Line spacing"), wxPG_LABEL, 0));
    m_pgPropLineSpacing->SetHelpString(_("Add extra line spacing"));

    m_pgPropCaretLine = m_pgMgrGeneral->Append(new wxPropertyCategory(_("Caret line")));
    m_pgPropCaretLine->SetHelpString(wxT(""));

    m_pgPropEnableCaretLine =
        m_pgMgrGeneral->AppendIn(m_pgPropCaretLine, new wxBoolProperty(_("Highlight caret line"), wxPG_LABEL, 0));
    m_pgPropEnableCaretLine->SetHelpString(_("Highlight caret line with a background colour"));

    m_pgPropCaretLineColour = m_pgMgrGeneral->AppendIn(
        m_pgPropCaretLine,
        new wxSystemColourProperty(_("Caret line background colour"), wxPG_LABEL, wxColour(wxT("rgb(171,222,230)"))));
    m_pgPropCaretLineColour->SetHelpString(_("Caret line background colour"));

    m_pgPropCaretLineAlpha =
        m_pgMgrGeneral->AppendIn(m_pgPropCaretLine, new wxIntProperty(_("Caret line colour alpha"), wxPG_LABEL, 30));
    m_pgPropCaretLineAlpha->SetHelpString(_(
        "Set the caret line colour transparency value. Where 0 mean complete transparent and 255 means fully opaque"));

    m_pgPropDebuggerMarker = m_pgMgrGeneral->Append(new wxPropertyCategory(_("Debugger Marker")));
    m_pgPropDebuggerMarker->SetHelpString(_("Debugger Marker"));

    m_pgPropHighlightDebuggerMarker = m_pgMgrGeneral->AppendIn(
        m_pgPropDebuggerMarker, new wxBoolProperty(_("Highlight debugger line"), wxPG_LABEL, 0));
    m_pgPropHighlightDebuggerMarker->SetHelpString(
        _("When debugging, highlight the current line with a background colour"));

    m_pgPropDebuggerLineColour = m_pgMgrGeneral->AppendIn(
        m_pgPropDebuggerMarker, new wxSystemColourProperty(_("Debugger line background colour")));
    m_pgPropDebuggerLineColour->SetValueToUnspecified();
    m_pgPropDebuggerLineColour->SetHelpString(_("Debugger line background colour"));

    SetName(wxT("EditorOptionsGeneralGuidesPanelBase"));
    SetSize(wxDLG_UNIT(this, wxSize(500, 300)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
}

EditorOptionsGeneralGuidesPanelBase::~EditorOptionsGeneralGuidesPanelBase() {}

EditorOptionsGeneralEditBase::EditorOptionsGeneralEditBase(wxWindow* parent, wxWindowID id, const wxPoint& pos,
                                                           const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC77E7InitBitmapResources();
        bBitmapLoaded = true;
    }

    boxSizer4 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer4);

    wxArrayString m_pgMgrEditArr;
    wxUnusedVar(m_pgMgrEditArr);
    wxArrayInt m_pgMgrEditIntArr;
    wxUnusedVar(m_pgMgrEditIntArr);
    m_pgMgrEdit = new wxPropertyGridManager(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                            wxPG_DESCRIPTION | wxPG_SPLITTER_AUTO_CENTER | wxPG_BOLD_MODIFIED);

    boxSizer4->Add(m_pgMgrEdit, 1, wxEXPAND, WXC_FROM_DIP(5));

    m_pgProp8 = m_pgMgrEdit->Append(new wxPropertyCategory(_("Edit")));
    m_pgProp8->SetHelpString(wxT(""));

    m_pgPropSmartCurly = m_pgMgrEdit->AppendIn(m_pgProp8, new wxBoolProperty(_("Smart curly brackets"), wxPG_LABEL, 1));
    m_pgPropSmartCurly->SetHelpString(_("When user types '{', automatically insert the closing brace"));

    m_pgPropSmartParentheses =
        m_pgMgrEdit->AppendIn(m_pgProp8, new wxBoolProperty(_("Smart brackets / parentheses"), wxPG_LABEL, 1));
    m_pgPropSmartParentheses->SetHelpString(
        _("When typing ']' or ')' next to a ']' or ')'\nMove the caret one position to the right\n"));

    m_pgPropAutoCompleteParen = m_pgMgrEdit->AppendIn(
        m_pgProp8, new wxBoolProperty(_("Auto complete closing bracket and parentheses"), wxPG_LABEL, 0));
    m_pgPropAutoCompleteParen->SetHelpString(wxT(""));

    m_pgPropSmartQuotes = m_pgMgrEdit->AppendIn(m_pgProp8, new wxBoolProperty(_("Smart quotes"), wxPG_LABEL, 0));
    m_pgPropSmartQuotes->SetHelpString(
        _("When typing \" or ', automatically add another one to the right, unless one already exists (in this case, "
          "simply move the caret one position to the right)"));

    m_pgPropCopyLineEmptySelection = m_pgMgrEdit->AppendIn(
        m_pgProp8, new wxBoolProperty(_("Copying empty selection copies caret line"), wxPG_LABEL, 1));
    m_pgPropCopyLineEmptySelection->SetHelpString(_("Whether copying an empty selection to the clipboard copies the "
                                                    "entire contents of the caret line, or nothing"));

    m_pgProp16 = m_pgMgrEdit->Append(new wxPropertyCategory(_("Typing in selection")));
    m_pgProp16->SetHelpString(wxT(""));

    m_pgPropWrapQuotes = m_pgMgrEdit->AppendIn(m_pgProp16, new wxBoolProperty(_("Wrap with quotes"), wxPG_LABEL, 1));
    m_pgPropWrapQuotes->SetHelpString(_("When typing ' or \" on a selection, instead of replacing the selection with "
                                        "the character, wrap it with quotes"));

    m_pgPropWrapBrackets =
        m_pgMgrEdit->AppendIn(m_pgProp16, new wxBoolProperty(_("Wrap with brackets"), wxPG_LABEL, 1));
    m_pgPropWrapBrackets->SetHelpString(_("When typing '(' or '[' on a selection, instead of replacing the selection "
                                          "with the character, wrap it with brackets"));

    m_pgProp56 = m_pgMgrEdit->Append(new wxPropertyCategory(_("Zoom")));
    m_pgProp56->SetHelpString(wxT(""));

    m_pgPropZoomUsingCtrlScroll =
        m_pgMgrEdit->AppendIn(m_pgProp56, new wxBoolProperty(_("Enable mouse zoom"), wxPG_LABEL, 1));
    m_pgPropZoomUsingCtrlScroll->SetHelpString(_("When holding Ctrl/CMD + scrolling with the mouse zoom the text"));

    m_pgProp565 = m_pgMgrEdit->Append(new wxPropertyCategory(_("Comments")));
    m_pgProp565->SetHelpString(wxT(""));

    m_pgPropCommentsIndented =
        m_pgMgrEdit->AppendIn(m_pgProp565, new wxBoolProperty(_("Indented line comments"), wxPG_LABEL, 0));
    m_pgPropCommentsIndented->SetHelpString(_(
        "Indent line comments (C++-style comments) according to the indentation of the selected fragmant of the text"));

    SetName(wxT("EditorOptionsGeneralEditBase"));
    SetSize(wxDLG_UNIT(this, wxSize(500, 300)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    // Connect events
    m_pgMgrEdit->Connect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(EditorOptionsGeneralEditBase::OnValueChanged),
                         NULL, this);
}

EditorOptionsGeneralEditBase::~EditorOptionsGeneralEditBase()
{
    m_pgMgrEdit->Disconnect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(EditorOptionsGeneralEditBase::OnValueChanged),
                            NULL, this);
}
