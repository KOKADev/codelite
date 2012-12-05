//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.h"


// Declare the bitmap loading function
extern void wxC3F25InitBitmapResources();

static bool bBitmapLoaded = false;


NewProjectDlgBaseClass::NewProjectDlgBaseClass(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC3F25InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer1);
    
    m_splitter5 = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxSP_LIVE_UPDATE|wxSP_3DSASH);
    m_splitter5->SetSashGravity(0.500000);
    m_splitter5->SetMinimumPaneSize(10);
    
    boxSizer1->Add(m_splitter5, 1, wxALL|wxEXPAND, 5);
    
    m_splitterPageRight = new wxPanel(m_splitter5, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    wxBoxSizer* boxSizer10 = new wxBoxSizer(wxVERTICAL);
    m_splitterPageRight->SetSizer(boxSizer10);
    
    m_dataviewTemplates = new wxDataViewCtrl(m_splitterPageRight, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxDV_ROW_LINES|wxDV_SINGLE);
    
    m_dataviewTemplatesModel = new DVTemplatesModel;
    m_dataviewTemplatesModel->SetColCount( 1 );
    m_dataviewTemplates->AssociateModel(m_dataviewTemplatesModel.get() );
    
    boxSizer10->Add(m_dataviewTemplates, 1, wxALL|wxEXPAND, 5);
    
    m_dataviewTemplates->AppendIconTextColumn(_("Template"), m_dataviewTemplates->GetColumnCount(), wxDATAVIEW_CELL_INERT, 300, wxALIGN_LEFT);
    m_splitterPageLeft = new wxPanel(m_splitter5, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_splitter5->SplitVertically(m_splitterPageRight, m_splitterPageLeft, -1);
    
    wxBoxSizer* boxSizer11 = new wxBoxSizer(wxVERTICAL);
    m_splitterPageLeft->SetSizer(boxSizer11);
    
    wxFlexGridSizer* flexGridSizer15 = new wxFlexGridSizer(  0, 2, 0, 0);
    flexGridSizer15->SetFlexibleDirection( wxBOTH );
    flexGridSizer15->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer15->AddGrowableCol(1);
    
    boxSizer11->Add(flexGridSizer15, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    m_staticText16 = new wxStaticText(m_splitterPageLeft, wxID_ANY, _("Project name:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer15->Add(m_staticText16, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_txtProjName = new wxTextCtrl(m_splitterPageLeft, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer15->Add(m_txtProjName, 0, wxLEFT|wxTOP|wxBOTTOM|wxEXPAND, 5);
    
    m_staticText18 = new wxStaticText(m_splitterPageLeft, wxID_ANY, _("Project path:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer15->Add(m_staticText18, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxBoxSizer* boxSizer30 = new wxBoxSizer(wxHORIZONTAL);
    
    flexGridSizer15->Add(boxSizer30, 0, wxEXPAND, 5);
    
    m_textCtrlProjectPath = new wxTextCtrl(m_splitterPageLeft, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer30->Add(m_textCtrlProjectPath, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_bmpButton33 = new wxBitmapButton(m_splitterPageLeft, wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("find-folder")), wxDefaultPosition, wxSize(40,-1), wxBU_AUTODRAW);
    
    boxSizer30->Add(m_bmpButton33, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    m_staticText21 = new wxStaticText(m_splitterPageLeft, wxID_ANY, _("Compiler:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer15->Add(m_staticText21, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_chCompilerArr;
    m_chCompiler = new wxChoice(m_splitterPageLeft, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_chCompilerArr, 0);
    
    flexGridSizer15->Add(m_chCompiler, 0, wxLEFT|wxTOP|wxBOTTOM|wxEXPAND, 5);
    
    flexGridSizer15->Add(0, 0, 0, wxALL, 5);
    
    m_cbSeparateDir = new wxCheckBox(m_splitterPageLeft, wxID_ANY, _("Create the project under a separate directory"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_cbSeparateDir->SetValue(false);
    
    flexGridSizer15->Add(m_cbSeparateDir, 0, wxALL|wxEXPAND, 5);
    
    m_stxtFullFileName = new wxStaticText(m_splitterPageLeft, wxID_ANY, _(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer11->Add(m_stxtFullFileName, 0, wxALL|wxEXPAND|wxALIGN_LEFT, 5);
    
    m_txtDescription = new wxTextCtrl(m_splitterPageLeft, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RICH2|wxTE_READONLY|wxTE_MULTILINE);
    
    boxSizer11->Add(m_txtDescription, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer1->Add(boxSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_button3 = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button3->SetDefault();
    
    boxSizer2->Add(m_button3, 0, wxALL, 5);
    
    m_button4 = new wxButton(this, wxID_CANCEL, _("Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer2->Add(m_button4, 0, wxALL, 5);
    
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_dataviewTemplates->Connect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler(NewProjectDlgBaseClass::OnItemSelected), NULL, this);
    m_txtProjName->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(NewProjectDlgBaseClass::OnProjectNameChanged), NULL, this);
    m_textCtrlProjectPath->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(NewProjectDlgBaseClass::OnProjectPathUpdated), NULL, this);
    m_bmpButton33->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(NewProjectDlgBaseClass::OnBrowseProjectPath), NULL, this);
    m_cbSeparateDir->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(NewProjectDlgBaseClass::OnProjectNameChanged), NULL, this);
    m_button3->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewProjectDlgBaseClass::OnOKUI), NULL, this);
    m_button3->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(NewProjectDlgBaseClass::OnCreate), NULL, this);
    
}

NewProjectDlgBaseClass::~NewProjectDlgBaseClass()
{
    m_dataviewTemplates->Disconnect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler(NewProjectDlgBaseClass::OnItemSelected), NULL, this);
    m_txtProjName->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(NewProjectDlgBaseClass::OnProjectNameChanged), NULL, this);
    m_textCtrlProjectPath->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(NewProjectDlgBaseClass::OnProjectPathUpdated), NULL, this);
    m_bmpButton33->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(NewProjectDlgBaseClass::OnBrowseProjectPath), NULL, this);
    m_cbSeparateDir->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(NewProjectDlgBaseClass::OnProjectNameChanged), NULL, this);
    m_button3->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewProjectDlgBaseClass::OnOKUI), NULL, this);
    m_button3->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(NewProjectDlgBaseClass::OnCreate), NULL, this);
    
}

NavBarControlBaseClass::NavBarControlBaseClass(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC3F25InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer36 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer36);
    
    m_splitter = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxSP_LIVE_UPDATE|wxSP_3DSASH|wxSP_3D);
    m_splitter->SetSashGravity(0.000000);
    m_splitter->SetMinimumPaneSize(10);
    
    boxSizer36->Add(m_splitter, 1, wxEXPAND, 5);
    
    m_splitterPage39 = new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    wxBoxSizer* boxSizer42 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage39->SetSizer(boxSizer42);
    
    wxArrayString m_scopeArr;
    m_scope = new wxChoice(m_splitterPage39, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_scopeArr, 0);
    
    boxSizer42->Add(m_scope, 0, wxLEFT|wxTOP|wxBOTTOM|wxEXPAND, 5);
    
    m_splitterPage41 = new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_splitter->SplitVertically(m_splitterPage39, m_splitterPage41, 200);
    
    wxBoxSizer* boxSizer43 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage41->SetSizer(boxSizer43);
    
    wxArrayString m_funcArr;
    m_func = new wxChoice(m_splitterPage41, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_funcArr, 0);
    
    boxSizer43->Add(m_func, 0, wxRIGHT|wxTOP|wxBOTTOM|wxEXPAND, 5);
    
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_scope->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(NavBarControlBaseClass::OnScope), NULL, this);
    m_scope->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(NavBarControlBaseClass::OnScopeListMouseDown), NULL, this);
    m_func->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(NavBarControlBaseClass::OnFunction), NULL, this);
    m_func->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(NavBarControlBaseClass::OnFuncListMouseDown), NULL, this);
    
}

NavBarControlBaseClass::~NavBarControlBaseClass()
{
    m_scope->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(NavBarControlBaseClass::OnScope), NULL, this);
    m_scope->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(NavBarControlBaseClass::OnScopeListMouseDown), NULL, this);
    m_func->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(NavBarControlBaseClass::OnFunction), NULL, this);
    m_func->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(NavBarControlBaseClass::OnFuncListMouseDown), NULL, this);
    
}

BuildTabTopPanelBaseClass::BuildTabTopPanelBaseClass(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC3F25InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer47 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer47);
    
    m_auibar48 = new wxAuiToolBar(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxAUI_TB_DEFAULT_STYLE|wxAUI_TB_VERTICAL);
    m_auibar48->SetToolBitmapSize(wxSize(16,16));
    
    boxSizer47->Add(m_auibar48, 1, wxEXPAND, 5);
    
    m_auibar48->AddTool(wxID_ANY, _("Keep pane open"), wxXmlResource::Get()->LoadBitmap(wxT("ToolPin")), wxNullBitmap, wxITEM_CHECK, wxT(""), _("Don't close this pane when an editor gets focus"), NULL);
    
    m_auibar48->AddSeparator();
    
    m_auibar48->AddTool(wxID_SAVEAS, _("Save Build Log..."), wxXmlResource::Get()->LoadBitmap(wxT("document-save")), wxNullBitmap, wxITEM_NORMAL, wxT(""), _("Save Build Log..."), NULL);
    
    m_auibar48->AddTool(wxID_CLEAR, _("Clear Build Output"), wxXmlResource::Get()->LoadBitmap(wxT("clear")), wxNullBitmap, wxITEM_NORMAL, wxT(""), _("Clear Build Output"), NULL);
    
    m_auibar48->AddTool(wxID_COPY, _("Copy"), wxXmlResource::Get()->LoadBitmap(wxT("edit-copy")), wxNullBitmap, wxITEM_NORMAL, _("Copy Build Output to Clipboard"), _("Copy Build Output to Clipboard"), NULL);
    
    m_auibar48->AddTool(wxID_PASTE, _("Paste"), wxXmlResource::Get()->LoadBitmap(wxT("edit-paste")), wxNullBitmap, wxITEM_NORMAL, _("Paste Build Output into an Empty Editor"), _("Paste Build Output into an Empty Editor"), NULL);
    m_auibar48->Realize();
    
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    this->Connect(wxID_ANY, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(BuildTabTopPanelBaseClass::OnToolPinCommandToolClicked), NULL, this);
    this->Connect(wxID_SAVEAS, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(BuildTabTopPanelBaseClass::OnSaveBuildOutput), NULL, this);
    this->Connect(wxID_SAVEAS, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildTabTopPanelBaseClass::OnSaveBuildOutputUI), NULL, this);
    this->Connect(wxID_CLEAR, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(BuildTabTopPanelBaseClass::OnClearBuildOutput), NULL, this);
    this->Connect(wxID_CLEAR, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildTabTopPanelBaseClass::OnClearBuildOutputUI), NULL, this);
    this->Connect(wxID_COPY, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(BuildTabTopPanelBaseClass::OnCopyBuildOutput), NULL, this);
    this->Connect(wxID_COPY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildTabTopPanelBaseClass::OnCopyBuildOutputUI), NULL, this);
    this->Connect(wxID_PASTE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(BuildTabTopPanelBaseClass::OnPaste), NULL, this);
    this->Connect(wxID_PASTE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildTabTopPanelBaseClass::OnPasteUI), NULL, this);
    
}

BuildTabTopPanelBaseClass::~BuildTabTopPanelBaseClass()
{
    this->Disconnect(wxID_ANY, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(BuildTabTopPanelBaseClass::OnToolPinCommandToolClicked), NULL, this);
    this->Disconnect(wxID_SAVEAS, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(BuildTabTopPanelBaseClass::OnSaveBuildOutput), NULL, this);
    this->Disconnect(wxID_SAVEAS, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildTabTopPanelBaseClass::OnSaveBuildOutputUI), NULL, this);
    this->Disconnect(wxID_CLEAR, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(BuildTabTopPanelBaseClass::OnClearBuildOutput), NULL, this);
    this->Disconnect(wxID_CLEAR, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildTabTopPanelBaseClass::OnClearBuildOutputUI), NULL, this);
    this->Disconnect(wxID_COPY, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(BuildTabTopPanelBaseClass::OnCopyBuildOutput), NULL, this);
    this->Disconnect(wxID_COPY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildTabTopPanelBaseClass::OnCopyBuildOutputUI), NULL, this);
    this->Disconnect(wxID_PASTE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(BuildTabTopPanelBaseClass::OnPaste), NULL, this);
    this->Disconnect(wxID_PASTE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildTabTopPanelBaseClass::OnPasteUI), NULL, this);
    
}

NewProjImgList::NewProjImgList()
    : wxImageList(16, 16, true)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC3F25InitBitmapResources();
        bBitmapLoaded = true;
    }
    wxBitmap bmp;
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gear16"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gear16"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("qt16"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("qt16"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("wx16"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("wx16"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gtk16"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gtk16"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("console16"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("console16"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("archive16"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("archive16"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("dll16"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("dll16"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("makefile16"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("makefile16"), bmp ) );
    
    
}

NewProjImgList::~NewProjImgList()
{
}
