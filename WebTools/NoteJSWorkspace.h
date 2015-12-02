//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 The CodeLite Team
// File name            : NoteJSWorkspace.h
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

#ifndef NOTEJSWORKSPACE_H
#define NOTEJSWORKSPACE_H

#include "IWorkspace.h"
#include <wx/filename.h>
#include "cl_command_event.h"
#include "NodeJSDebugger.h"
#include "TerminalEmulator.h"

class NodeJSWorkspaceView;
class NodeJSWorkspace : public IWorkspace
{
protected:
    wxFileName m_filename;
    wxArrayString m_folders;
    NodeJSWorkspaceView* m_view;
    bool m_clangOldFlag;
    bool m_dummy;
    bool m_showWelcomePage;
    NodeJSDebugger::Ptr_t m_debugger;
    TerminalEmulator m_terminal;
    static NodeJSWorkspace* ms_workspace;

protected:
    void DoClear();
    bool DoOpen(const wxFileName& filename);

    //--------------------------------------------------
    // Event handlers
    //--------------------------------------------------
    /**
     * @brief CodeLite requests to close the workspace
     */
    void OnCloseWorkspace(clCommandEvent& e);
    /**
     * @brief create new workspace (originated from the menu bar)
     */
    void OnNewWorkspace(clCommandEvent& e);

    /**
     * @brief open a workspace
     */
    void OnOpenWorkspace(clCommandEvent& event);

    /**
     * @brief all editors have been closed
     */
    void OnAllEditorsClosed(wxCommandEvent& event);

    /**
     * @brief handle save session command from CodeLite
     */
    void OnSaveSession(clCommandEvent& event);

    /**
     * @brief execute the current script
     */
    void OnExecute(clExecuteEvent& event);

    void OnStopExecute(clExecuteEvent& event);
    void OnIsExecuteInProgress(clExecuteEvent& event);
    void OnProcessOutput(clCommandEvent& event);
    void OnProcessTerminated(clCommandEvent& event);

    /**
     * @brief restore the workspace session
     */
    void RestoreSession();

    NodeJSWorkspace(); // default ctor is private

public:
    virtual void GetProjectFiles(const wxString& projectName, wxArrayString& files) const;
    virtual void GetWorkspaceFiles(wxArrayString& files) const;
    virtual wxString GetProjectFromFile(const wxFileName& filename) const;
    virtual wxString GetFilesMask() const;
    NodeJSWorkspace(bool dummy);
    virtual ~NodeJSWorkspace();

    static NodeJSWorkspace* Get();
    static void Free();

public:
    virtual bool IsBuildSupported() const;
    virtual bool IsProjectSupported() const;

    NodeJSWorkspaceView* GetView() { return m_view; }
    NodeJSDebugger::Ptr_t GetDebugger() { return m_debugger; }
    /**
     * @brief is this workspace opened?
     */
    bool IsOpen() const;

    /**
     * @brief create nodejs at the given path
     */
    bool Create(const wxFileName& filename);

    /**
     * @brief open nodejs workspace and load its view
     */
    bool Open(const wxFileName& filename);

    /**
     * @brief close the current workspace
     * this function fires the wxEVT_WORKSPACE_CLOSED event
     */
    void Close();

    /**
     * @brief save the workspace content to the file system
     */
    void Save();

    void SetFilename(const wxFileName& filename) { this->m_filename = filename; }
    const wxFileName& GetFilename() const { return m_filename; }

    void SetFolders(const wxArrayString& folders) { this->m_folders = folders; }
    const wxArrayString& GetFolders() const { return m_folders; }
    wxArrayString& GetFolders() { return m_folders; }
};

#endif // NOTEJSWORKSPACE_H
