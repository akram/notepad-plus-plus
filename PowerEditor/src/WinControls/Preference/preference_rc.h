// This file is part of Notepad++ project
// Copyright (C)2021 Don HO <don.h@free.fr>

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// at your option any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#ifndef PREFERENCE_RC_H
#define PREFERENCE_RC_H

#define	IDD_PREFERENCE_BOX 6000
	#define	IDC_BUTTON_CLOSE (IDD_PREFERENCE_BOX + 1)
	#define	IDC_LIST_DLGTITLE (IDD_PREFERENCE_BOX + 2)
	

#define	IDD_PREFERENCE_SUB_GENRAL 6100 //(IDD_PREFERENCE_BOX + 100)
	#define	IDC_TOOLBAR_GB_STATIC (IDD_PREFERENCE_SUB_GENRAL + 1)
	#define	IDC_CHECK_HIDE (IDD_PREFERENCE_SUB_GENRAL + 2)
	#define	IDC_RADIO_SMALLICON (IDD_PREFERENCE_SUB_GENRAL + 3)
	#define	IDC_RADIO_BIGICON (IDD_PREFERENCE_SUB_GENRAL + 4)
	#define	IDC_RADIO_STANDARD (IDD_PREFERENCE_SUB_GENRAL + 5)
	
	#define	IDC_TABBAR_GB_STATIC (IDD_PREFERENCE_SUB_GENRAL + 6)
	#define	IDC_CHECK_REDUCE (IDD_PREFERENCE_SUB_GENRAL + 7)
	#define	IDC_CHECK_LOCK (IDD_PREFERENCE_SUB_GENRAL + 8)
	#define	IDC_CHECK_DRAWINACTIVE (IDD_PREFERENCE_SUB_GENRAL + 9)
	#define	IDC_CHECK_ORANGE (IDD_PREFERENCE_SUB_GENRAL + 10)
	#define	IDC_CHECK_SHOWSTATUSBAR (IDD_PREFERENCE_SUB_GENRAL + 11)
	#define	IDC_CHECK_ENABLETABCLOSE (IDD_PREFERENCE_SUB_GENRAL + 12)
	#define	IDC_CHECK_DBCLICK2CLOSE (IDD_PREFERENCE_SUB_GENRAL + 13)
	#define	IDC_CHECK_ENABLEDOCSWITCHER (IDD_PREFERENCE_SUB_GENRAL + 14)
	#define	IDC_CHECK_MAINTAININDENT (IDD_PREFERENCE_SUB_GENRAL + 15)
	#define	IDC_CHECK_KEEPINSAMEDIR (IDD_PREFERENCE_SUB_GENRAL + 16)
	#define	IDC_CHECK_STYLEMRU (IDD_PREFERENCE_SUB_GENRAL + 17)
	#define	IDC_CHECK_TAB_HIDE (IDD_PREFERENCE_SUB_GENRAL + 18)
	#define	IDC_CHECK_TAB_MULTILINE (IDD_PREFERENCE_SUB_GENRAL + 19)
	#define	IDC_CHECK_TAB_VERTICAL (IDD_PREFERENCE_SUB_GENRAL + 20)
	#define	IDC_CHECK_TAB_LAST_EXIT (IDD_PREFERENCE_SUB_GENRAL + 21)
	#define	IDC_CHECK_HIDEMENUBAR (IDD_PREFERENCE_SUB_GENRAL + 22)
	#define	IDC_LOCALIZATION_GB_STATIC (IDD_PREFERENCE_SUB_GENRAL + 23)
	#define	IDC_COMBO_LOCALIZATION (IDD_PREFERENCE_SUB_GENRAL + 24)
	#define	IDC_DOCSWITCH_GB_STATIC (IDD_PREFERENCE_SUB_GENRAL + 25)
	#define	IDC_CHECK_DOCSWITCH (IDD_PREFERENCE_SUB_GENRAL + 26)
	#define	IDC_CHECK_DOCSWITCH_NOEXTCOLUMN (IDD_PREFERENCE_SUB_GENRAL + 27)
	#define IDC_CHECK_TAB_ALTICONS  (IDD_PREFERENCE_SUB_GENRAL + 28)

#define	IDD_PREFERENCE_SUB_MULTIINSTANCE 6150 //(IDD_PREFERENCE_BOX + 150)
	#define	IDC_MULTIINST_GB_STATIC (IDD_PREFERENCE_SUB_MULTIINSTANCE + 1)
	#define	IDC_SESSIONININST_RADIO (IDD_PREFERENCE_SUB_MULTIINSTANCE + 2)
	#define	IDC_MULTIINST_RADIO (IDD_PREFERENCE_SUB_MULTIINSTANCE + 3)
	#define	IDC_MONOINST_RADIO (IDD_PREFERENCE_SUB_MULTIINSTANCE + 4)
	#define	IDD_STATIC_RESTARTNOTE (IDD_PREFERENCE_SUB_MULTIINSTANCE + 5)

#define	IDD_PREFERENCE_WORDCHARLIST_BOX 6160 //(IDD_PREFERENCE_BOX + 150)
	#define	IDC_WORDCHARLIST_GB_STATIC (IDD_PREFERENCE_WORDCHARLIST_BOX + 1)
	#define	IDC_RADIO_WORDCHAR_DEFAULT (IDD_PREFERENCE_WORDCHARLIST_BOX + 2)
	#define	IDC_RADIO_WORDCHAR_CUSTOM (IDD_PREFERENCE_WORDCHARLIST_BOX + 3)
	#define	IDC_WORDCHAR_CUSTOM_EDIT (IDD_PREFERENCE_WORDCHARLIST_BOX + 4)
	#define	IDD_WORDCHAR_QUESTION_BUTTON (IDD_PREFERENCE_WORDCHARLIST_BOX + 5)
	#define	IDD_STATIC_WORDCHAR_WARNING (IDD_PREFERENCE_WORDCHARLIST_BOX + 6)

#define	IDD_PREFERENCE_SUB_EDITING 6200 //(IDD_PREFERENCE_BOX + 200)
	#define	IDC_FMS_GB_STATIC (IDD_PREFERENCE_SUB_EDITING + 1)
	#define	IDC_RADIO_SIMPLE (IDD_PREFERENCE_SUB_EDITING + 2)
	#define	IDC_RADIO_ARROW (IDD_PREFERENCE_SUB_EDITING + 3)
	#define	IDC_RADIO_CIRCLE (IDD_PREFERENCE_SUB_EDITING + 4)
	#define	IDC_RADIO_BOX (IDD_PREFERENCE_SUB_EDITING + 5)
	
	#define	IDC_CHECK_LINENUMBERMARGE (IDD_PREFERENCE_SUB_EDITING + 6)
	#define	IDC_CHECK_BOOKMARKMARGE (IDD_PREFERENCE_SUB_EDITING + 7)

	//#define	IDC_CHECK_SHOWVERTICALEDGE (IDD_PREFERENCE_SUB_EDITING + 8)
	//#define	IDC_NBCOLONE_STATIC (IDD_PREFERENCE_SUB_EDITING + 9)
	//#define	IDC_COLONENUMBER_STATIC (IDD_PREFERENCE_SUB_EDITING + 10)
	
	#define	IDC_VES_GB_STATIC (IDD_PREFERENCE_SUB_EDITING + 11)
	//#define	IDC_RADIO_LNMODE (IDD_PREFERENCE_SUB_EDITING + 12)
	#define	IDC_CHECK_EDGEBGMODE (IDD_PREFERENCE_SUB_EDITING + 13)
	#define	IDC_CHECK_CURRENTLINEHILITE (IDD_PREFERENCE_SUB_EDITING + 14)
	#define	IDC_CHECK_SMOOTHFONT (IDD_PREFERENCE_SUB_EDITING + 15)
	
	#define	IDC_CARETSETTING_STATIC (IDD_PREFERENCE_SUB_EDITING + 16)
	#define	IDC_WIDTH_STATIC (IDD_PREFERENCE_SUB_EDITING + 17)
	#define	IDC_WIDTH_COMBO (IDD_PREFERENCE_SUB_EDITING + 18)
	#define	IDC_BLINKRATE_STATIC (IDD_PREFERENCE_SUB_EDITING + 19)
	#define	IDC_CARETBLINKRATE_SLIDER (IDD_PREFERENCE_SUB_EDITING + 20)
	#define	IDC_CARETBLINKRATE_F_STATIC (IDD_PREFERENCE_SUB_EDITING + 21)
	#define	IDC_CARETBLINKRATE_S_STATIC (IDD_PREFERENCE_SUB_EDITING + 22)
	#define	IDC_CHECK_DOCCHANGESTATEMARGE (IDD_PREFERENCE_SUB_EDITING + 23)
	//#define	IDC_MULTISELECTION_GB_STATIC (IDD_PREFERENCE_SUB_EDITING + 24)
	#define	IDC_CHECK_MULTISELECTION (IDD_PREFERENCE_SUB_EDITING + 25)
	
	#define	IDC_RADIO_FOLDMARGENONE (IDD_PREFERENCE_SUB_EDITING + 26)
	
	#define	IDC_LW_GB_STATIC (IDD_PREFERENCE_SUB_EDITING + 27)
	#define	IDC_RADIO_LWDEF (IDD_PREFERENCE_SUB_EDITING + 28)
	#define	IDC_RADIO_LWALIGN (IDD_PREFERENCE_SUB_EDITING + 29)
	#define	IDC_RADIO_LWINDENT (IDD_PREFERENCE_SUB_EDITING + 30)
	
	#define	IDC_BORDERWIDTH_STATIC (IDD_PREFERENCE_SUB_EDITING + 31)
	#define	IDC_BORDERWIDTHVAL_STATIC (IDD_PREFERENCE_SUB_EDITING + 32)
	#define	IDC_BORDERWIDTH_SLIDER (IDD_PREFERENCE_SUB_EDITING + 33)
	#define	IDC_CHECK_DISABLEADVANCEDSCROLL (IDD_PREFERENCE_SUB_EDITING + 34)
	#define	IDC_CHECK_NOEDGE (IDD_PREFERENCE_SUB_EDITING + 35)
	#define	IDC_CHECK_SCROLLBEYONDLASTLINE (IDD_PREFERENCE_SUB_EDITING + 36)
    
	#define	IDC_STATIC_MULTILNMODE_TIP (IDD_PREFERENCE_SUB_EDITING + 37)
	#define	IDC_COLUMNPOS_EDIT (IDD_PREFERENCE_SUB_EDITING + 38)
	#define	IDC_CHECK_RIGHTCLICKKEEPSSELECTION (IDD_PREFERENCE_SUB_EDITING + 39)
	
#define	IDD_PREFERENCE_SUB_DELIMITER 6250 //(IDD_PREFERENCE_BOX + 250)
	#define	IDC_DELIMITERSETTINGS_GB_STATIC (IDD_PREFERENCE_SUB_DELIMITER + 1)
	#define	IDD_STATIC_OPENDELIMITER (IDD_PREFERENCE_SUB_DELIMITER + 2)
	#define	IDC_EDIT_OPENDELIMITER (IDD_PREFERENCE_SUB_DELIMITER + 3)
	#define	IDC_EDIT_CLOSEDELIMITER (IDD_PREFERENCE_SUB_DELIMITER + 4)
	#define	IDD_STATIC_CLOSEDELIMITER (IDD_PREFERENCE_SUB_DELIMITER + 5)
	#define	IDD_SEVERALLINEMODEON_CHECK (IDD_PREFERENCE_SUB_DELIMITER + 6)
	#define	IDD_STATIC_BLABLA (IDD_PREFERENCE_SUB_DELIMITER + 7)
	#define	IDD_STATIC_BLABLA2NDLINE (IDD_PREFERENCE_SUB_DELIMITER + 8)

#define	IDD_PREFERENCE_SUB_CLOUD_LINK 6260 //(IDD_PREFERENCE_BOX + 250)
	#define	IDC_SETTINGSONCLOUD_WARNING_STATIC (IDD_PREFERENCE_SUB_CLOUD_LINK + 1)
	#define	IDC_SETTINGSONCLOUD_GB_STATIC (IDD_PREFERENCE_SUB_CLOUD_LINK + 2)
	#define	IDC_NOCLOUD_RADIO (IDD_PREFERENCE_SUB_CLOUD_LINK + 3)
	#define	IDC_URISCHEMES_STATIC (IDD_PREFERENCE_SUB_CLOUD_LINK + 4)
	#define	IDC_URISCHEMES_EDIT (IDD_PREFERENCE_SUB_CLOUD_LINK + 5)
	//#define	IDC_GOOGLEDRIVE_RADIO (IDD_PREFERENCE_SUB_CLOUD_LINK + 6)
	#define	IDC_WITHCLOUD_RADIO (IDD_PREFERENCE_SUB_CLOUD_LINK + 7)
	#define	IDC_CLOUDPATH_EDIT (IDD_PREFERENCE_SUB_CLOUD_LINK + 8)
	#define	IDD_CLOUDPATH_BROWSE_BUTTON (IDD_PREFERENCE_SUB_CLOUD_LINK + 9)
	
#define	IDD_PREFERENCE_SUB_SEARCHENGINE 6270 //(IDD_PREFERENCE_BOX + 250)
	#define	IDC_SEARCHENGINES_GB_STATIC (IDD_PREFERENCE_SUB_SEARCHENGINE + 1)
	#define	IDC_SEARCHENGINE_DUCKDUCKGO_RADIO (IDD_PREFERENCE_SUB_SEARCHENGINE + 2)
	#define	IDC_SEARCHENGINE_GOOGLE_RADIO (IDD_PREFERENCE_SUB_SEARCHENGINE + 3)
	#define	IDC_SEARCHENGINE_BING_RADIO (IDD_PREFERENCE_SUB_SEARCHENGINE + 4)
	#define	IDC_SEARCHENGINE_YAHOO_RADIO (IDD_PREFERENCE_SUB_SEARCHENGINE + 5)
	#define	IDC_SEARCHENGINE_CUSTOM_RADIO (IDD_PREFERENCE_SUB_SEARCHENGINE + 6)
	#define	IDC_SEARCHENGINE_EDIT (IDD_PREFERENCE_SUB_SEARCHENGINE + 7)
	#define	IDD_SEARCHENGINE_NOTE_STATIC (IDD_PREFERENCE_SUB_SEARCHENGINE + 8)
	#define	IDC_SEARCHENGINE_STACKOVERFLOW_RADIO (IDD_PREFERENCE_SUB_SEARCHENGINE + 9)

#define	IDD_PREFERENCE_SUB_MARGING_BORDER_EDGE 6290 //(IDD_PREFERENCE_BOX + 290)
	#define	IDC_LINENUMBERMARGE_GB_STATIC (IDD_PREFERENCE_SUB_MARGING_BORDER_EDGE + 1)
	#define	IDC_RADIO_DYNAMIC (IDD_PREFERENCE_SUB_MARGING_BORDER_EDGE + 2)
	#define	IDC_RADIO_CONSTANT (IDD_PREFERENCE_SUB_MARGING_BORDER_EDGE + 3)

#define	IDD_PREFERENCE_SUB_MISC 6300 //(IDD_PREFERENCE_BOX + 300)
	#define	IDC_TABSETTING_GB_STATIC (IDD_PREFERENCE_SUB_MISC + 1)
	#define	IDC_CHECK_REPLACEBYSPACE (IDD_PREFERENCE_SUB_MISC + 2)
	#define	IDC_TABSIZE_STATIC (IDD_PREFERENCE_SUB_MISC + 3)
	#define	IDC_HISTORY_GB_STATIC (IDD_PREFERENCE_SUB_MISC + 4)
	#define	IDC_CHECK_DONTCHECKHISTORY (IDD_PREFERENCE_SUB_MISC + 5)
	#define	IDC_MAXNBFILE_STATIC (IDD_PREFERENCE_SUB_MISC + 6)
	#define	IDC_CHECK_MIN2SYSTRAY (IDD_PREFERENCE_SUB_MISC + 8)
	#define	IDC_CHECK_REMEMBERSESSION (IDD_PREFERENCE_SUB_MISC + 9)
	#define	IDC_TABSIZEVAL_STATIC (IDD_PREFERENCE_SUB_MISC + 10)
	#define	IDC_MAXNBFILEVAL_STATIC (IDD_PREFERENCE_SUB_MISC + 11)
	#define	IDC_FILEAUTODETECTION_STATIC (IDD_PREFERENCE_SUB_MISC + 12)
	#define	IDC_CHECK_UPDATESILENTLY (IDD_PREFERENCE_SUB_MISC + 13)
	#define	IDC_RADIO_BKNONE (IDD_PREFERENCE_SUB_MISC + 15)
	#define	IDC_RADIO_BKSIMPLE (IDD_PREFERENCE_SUB_MISC + 16)
	#define	IDC_RADIO_BKVERBOSE (IDD_PREFERENCE_SUB_MISC + 17)
	#define	IDC_CLICKABLELINK_STATIC (IDD_PREFERENCE_SUB_MISC + 18)
	#define	IDC_CHECK_CLICKABLELINK_ENABLE (IDD_PREFERENCE_SUB_MISC + 19)
	#define	IDC_CHECK_CLICKABLELINK_NOUNDERLINE (IDD_PREFERENCE_SUB_MISC + 20)
	#define	IDC_EDIT_SESSIONFILEEXT (IDD_PREFERENCE_SUB_MISC + 21)
	#define	IDC_SESSIONFILEEXT_STATIC (IDD_PREFERENCE_SUB_MISC + 22)
	#define	IDC_CHECK_AUTOUPDATE (IDD_PREFERENCE_SUB_MISC + 23)
	#define	IDC_DOCUMENTSWITCHER_STATIC (IDD_PREFERENCE_SUB_MISC + 24)
	#define	IDC_CHECK_UPDATEGOTOEOF (IDD_PREFERENCE_SUB_MISC + 25)
	#define	IDC_CHECK_ENABLSMARTHILITE (IDD_PREFERENCE_SUB_MISC + 26)
	#define	IDC_CHECK_ENABLTAGSMATCHHILITE (IDD_PREFERENCE_SUB_MISC + 27)
	#define	IDC_CHECK_ENABLTAGATTRHILITE (IDD_PREFERENCE_SUB_MISC + 28)
	#define	IDC_TAGMATCHEDHILITE_STATIC (IDD_PREFERENCE_SUB_MISC + 29)
	#define	IDC_CHECK_HIGHLITENONEHTMLZONE (IDD_PREFERENCE_SUB_MISC + 30)
	#define	IDC_CHECK_SHORTTITLE (IDD_PREFERENCE_SUB_MISC + 31)
	#define IDC_CHECK_SMARTHILITECASESENSITIVE (IDD_PREFERENCE_SUB_MISC + 32)
	#define IDC_SMARTHILITING_STATIC (IDD_PREFERENCE_SUB_MISC + 33)
	#define	IDC_CHECK_DETECTENCODING (IDD_PREFERENCE_SUB_MISC + 34)
	#define IDC_CHECK_BACKSLASHISESCAPECHARACTERFORSQL (IDD_PREFERENCE_SUB_MISC + 35)
	#define	IDC_EDIT_WORKSPACEFILEEXT (IDD_PREFERENCE_SUB_MISC + 36)
	#define	IDC_WORKSPACEFILEEXT_STATIC (IDD_PREFERENCE_SUB_MISC + 37)
	#define IDC_CHECK_SMARTHILITEWHOLEWORDONLY (IDD_PREFERENCE_SUB_MISC + 38)
	#define IDC_CHECK_SMARTHILITEUSEFINDSETTINGS (IDD_PREFERENCE_SUB_MISC + 39)
	#define IDC_CHECK_SMARTHILITEANOTHERRVIEW (IDD_PREFERENCE_SUB_MISC + 40)
	#define	IDC_CHECK_SAVEDLGEXTFILTALLTYPES (IDD_PREFERENCE_SUB_MISC + 51)

    //-- xFileEditViewHistoryParameterGUI: Additional Checkbox for enabling the history for restoring the edit view per file.
	#define	IDC_CHECK_REMEMBEREDITVIEWPERFILE (IDD_PREFERENCE_SUB_MISC + 41)
	#define	IDC_REMEMBEREDITVIEWPERFILE_STATIC (IDD_PREFERENCE_SUB_MISC + 42)
	#define	IDC_EDIT_REMEMBEREDITVIEWPERFILE (IDD_PREFERENCE_SUB_MISC + 43)
	
	#define	IDC_DOCUMENTPEEK_STATIC (IDD_PREFERENCE_SUB_MISC + 44)
	#define	IDC_CHECK_ENABLEDOCPEEKER (IDD_PREFERENCE_SUB_MISC + 45)
	#define	IDC_CHECK_ENABLEDOCPEEKONMAP (IDD_PREFERENCE_SUB_MISC + 46)
	#define	IDC_COMBO_FILEUPDATECHOICE (IDD_PREFERENCE_SUB_MISC + 47)
	#define	IDC_CHECK_DIRECTWRITE_ENABLE (IDD_PREFERENCE_SUB_MISC + 49)
	#define	IDC_CHECK_CLICKABLELINK_FULLBOXMODE (IDD_PREFERENCE_SUB_MISC + 50)
	#define	IDC_CHECK_MUTE_SOUNDS (IDD_PREFERENCE_SUB_MISC + 60)
	
#define	IDD_PREFERENCE_SUB_NEWDOCUMENT 6400 //(IDD_PREFERENCE_BOX + 400)
	#define	IDC_FORMAT_GB_STATIC (IDD_PREFERENCE_SUB_NEWDOCUMENT + 1)
	#define	IDC_RADIO_F_WIN (IDD_PREFERENCE_SUB_NEWDOCUMENT + 2)
	#define	IDC_RADIO_F_UNIX (IDD_PREFERENCE_SUB_NEWDOCUMENT + 3)
	#define	IDC_RADIO_F_MAC (IDD_PREFERENCE_SUB_NEWDOCUMENT + 4)
	#define	IDC_ENCODING_STATIC (IDD_PREFERENCE_SUB_NEWDOCUMENT + 5)
	#define	IDC_RADIO_ANSI (IDD_PREFERENCE_SUB_NEWDOCUMENT + 6)
	#define	IDC_RADIO_UTF8SANSBOM (IDD_PREFERENCE_SUB_NEWDOCUMENT + 7)
	#define	IDC_RADIO_UTF8 (IDD_PREFERENCE_SUB_NEWDOCUMENT + 8)
	#define	IDC_RADIO_UTF16BIG (IDD_PREFERENCE_SUB_NEWDOCUMENT + 9)
	#define	IDC_RADIO_UTF16SMALL (IDD_PREFERENCE_SUB_NEWDOCUMENT + 10)
	#define	IDC_DEFAULTLANG_STATIC (IDD_PREFERENCE_SUB_NEWDOCUMENT + 11)
	#define	IDC_COMBO_DEFAULTLANG (IDD_PREFERENCE_SUB_NEWDOCUMENT + 12)
	#define	IDC_OPENSAVEDIR_GR_STATIC (IDD_PREFERENCE_SUB_NEWDOCUMENT + 13)
	#define	IDC_OPENSAVEDIR_FOLLOWCURRENT_RADIO (IDD_PREFERENCE_SUB_NEWDOCUMENT + 14)
	#define	IDC_OPENSAVEDIR_REMEMBERLAST_RADIO (IDD_PREFERENCE_SUB_NEWDOCUMENT + 15)
	#define	IDC_OPENSAVEDIR_ALWAYSON_RADIO (IDD_PREFERENCE_SUB_NEWDOCUMENT + 16)
	#define	IDC_OPENSAVEDIR_ALWAYSON_EDIT (IDD_PREFERENCE_SUB_NEWDOCUMENT + 17)
	#define	IDD_OPENSAVEDIR_ALWAYSON_BROWSE_BUTTON (IDD_PREFERENCE_SUB_NEWDOCUMENT + 18)
	#define	IDC_NEWDOCUMENT_GR_STATIC (IDD_PREFERENCE_SUB_NEWDOCUMENT + 19)
	#define	IDC_CHECK_OPENANSIASUTF8 (IDD_PREFERENCE_SUB_NEWDOCUMENT + 20)
	#define	IDC_RADIO_OTHERCP (IDD_PREFERENCE_SUB_NEWDOCUMENT + 21)
	#define	IDC_COMBO_OTHERCP (IDD_PREFERENCE_SUB_NEWDOCUMENT + 22)
	#define	IDC_GP_STATIC_RECENTFILES (IDD_PREFERENCE_SUB_NEWDOCUMENT + 23)
	#define	IDC_CHECK_INSUBMENU (IDD_PREFERENCE_SUB_NEWDOCUMENT + 24)
	#define	IDC_RADIO_ONLYFILENAME (IDD_PREFERENCE_SUB_NEWDOCUMENT + 25)
	#define	IDC_RADIO_FULLFILENAMEPATH (IDD_PREFERENCE_SUB_NEWDOCUMENT + 26)
	#define	IDC_RADIO_CUSTOMIZELENTH (IDD_PREFERENCE_SUB_NEWDOCUMENT + 27)
	#define	IDC_CUSTOMIZELENGTHVAL_STATIC (IDD_PREFERENCE_SUB_NEWDOCUMENT + 28)
	#define IDC_DISPLAY_STATIC (IDD_PREFERENCE_SUB_NEWDOCUMENT + 29)
	#define IDC_OPENSAVEDIR_CHECK_DRROPFOLDEROPENFILES (IDD_PREFERENCE_SUB_NEWDOCUMENT + 31)
	
#define	IDD_PREFERENCE_SUB_DEFAULTDIRECTORY 6450 //(IDD_PREFERENCE_BOX + 400)
#define	IDD_PREFERENCE_SUB_RECENTFILESHISTORY 6460 //(IDD_PREFERENCE_BOX + 400)
	
#define	IDD_PREFERENCE_SUB_LANGUAGE 6500 //(IDD_PREFERENCE_BOX + 500)
	#define	IDC_LIST_ENABLEDLANG (IDD_PREFERENCE_SUB_LANGUAGE + 1)
	#define	IDC_LIST_DISABLEDLANG (IDD_PREFERENCE_SUB_LANGUAGE + 2)
	#define	IDC_BUTTON_REMOVE (IDD_PREFERENCE_SUB_LANGUAGE + 3)
	#define	IDC_BUTTON_RESTORE (IDD_PREFERENCE_SUB_LANGUAGE + 4)
	#define	IDC_ENABLEDITEMS_STATIC (IDD_PREFERENCE_SUB_LANGUAGE + 5)
	#define	IDC_DISABLEDITEMS_STATIC (IDD_PREFERENCE_SUB_LANGUAGE + 6)
	#define	IDC_CHECK_LANGMENUCOMPACT (IDD_PREFERENCE_SUB_LANGUAGE + 7)
	#define	IDC_CHECK_LANGMENU_GR_STATIC (IDD_PREFERENCE_SUB_LANGUAGE + 8)
	#define	IDC_LIST_TABSETTNG (IDD_PREFERENCE_SUB_LANGUAGE + 9)
	#define	IDC_CHECK_DEFAULTTABVALUE (IDD_PREFERENCE_SUB_LANGUAGE + 10)
	#define	IDC_GR_TABVALUE_STATIC (IDD_PREFERENCE_SUB_LANGUAGE + 11)
	#define	IDC_TABSIZEVAL_DISABLE_STATIC (IDD_PREFERENCE_SUB_LANGUAGE + 12)
#define	IDD_PREFERENCE_SUB_HIGHLIGHTING 6550 //(IDD_PREFERENCE_BOX + 500)

#define	IDD_PREFERENCE_SUB_PRINT 6600 //(IDD_PREFERENCE_BOX + 600)
	#define	IDC_CHECK_PRINTLINENUM	(IDD_PREFERENCE_SUB_PRINT + 1)
	#define	IDC_COLOUROPT_STATIC	(IDD_PREFERENCE_SUB_PRINT + 2)
	#define	IDC_RADIO_WYSIWYG		(IDD_PREFERENCE_SUB_PRINT + 3)
	#define	IDC_RADIO_INVERT		(IDD_PREFERENCE_SUB_PRINT + 4)
	#define	IDC_RADIO_BW			(IDD_PREFERENCE_SUB_PRINT + 5)
	#define	IDC_RADIO_NOBG			(IDD_PREFERENCE_SUB_PRINT + 6)
	#define IDC_MARGESETTINGS_STATIC  (IDD_PREFERENCE_SUB_PRINT + 7)
	#define IDC_EDIT_ML               (IDD_PREFERENCE_SUB_PRINT + 8)
	#define IDC_EDIT_MT               (IDD_PREFERENCE_SUB_PRINT + 9)
	#define IDC_EDIT_MR               (IDD_PREFERENCE_SUB_PRINT + 10)
	#define IDC_EDIT_MB               (IDD_PREFERENCE_SUB_PRINT + 11)
	#define IDC_ML_STATIC             (IDD_PREFERENCE_SUB_PRINT + 12)
	#define IDC_MT_STATIC             (IDD_PREFERENCE_SUB_PRINT + 13)
	#define IDC_MR_STATIC             (IDD_PREFERENCE_SUB_PRINT + 14)
	#define IDC_MB_STATIC             (IDD_PREFERENCE_SUB_PRINT + 15)
	
#define	IDD_PREFERENCE_PRINT2_BOX 6700 //(IDD_PREFERENCE_BOX + 700)
	#define	IDC_EDIT_HLEFT		(IDD_PREFERENCE_PRINT2_BOX + 1)
	#define	IDC_EDIT_HMIDDLE		(IDD_PREFERENCE_PRINT2_BOX + 2)
	#define	IDC_EDIT_HRIGHT		(IDD_PREFERENCE_PRINT2_BOX + 3)
	#define	IDC_COMBO_HFONTNAME	(IDD_PREFERENCE_PRINT2_BOX + 4)
	#define	IDC_COMBO_HFONTSIZE	(IDD_PREFERENCE_PRINT2_BOX + 5)
	#define	IDC_CHECK_HBOLD	(IDD_PREFERENCE_PRINT2_BOX + 6)
	#define	IDC_CHECK_HITALIC (IDD_PREFERENCE_PRINT2_BOX + 7)
	#define	IDC_HGB_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 8)
	#define	IDC_HL_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 9)
	#define	IDC_HM_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 10)
	#define	IDC_HR_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 11)
	#define	IDC_EDIT_FLEFT	(IDD_PREFERENCE_PRINT2_BOX + 12)
	#define	IDC_EDIT_FMIDDLE	(IDD_PREFERENCE_PRINT2_BOX + 13)
	#define	IDC_EDIT_FRIGHT	(IDD_PREFERENCE_PRINT2_BOX + 14)
	#define	IDC_COMBO_FFONTNAME	(IDD_PREFERENCE_PRINT2_BOX + 15)
	#define	IDC_COMBO_FFONTSIZE	(IDD_PREFERENCE_PRINT2_BOX + 16)
	#define	IDC_CHECK_FBOLD	(IDD_PREFERENCE_PRINT2_BOX + 17)
	#define	IDC_CHECK_FITALIC	(IDD_PREFERENCE_PRINT2_BOX + 18)
	#define	IDC_FGB_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 19)
	#define	IDC_FL_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 20)
	#define	IDC_FM_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 21)
	#define	IDC_FR_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 22)
	#define IDC_BUTTON_ADDVAR  (IDD_PREFERENCE_PRINT2_BOX + 23)
	#define IDC_COMBO_VARLIST  (IDD_PREFERENCE_PRINT2_BOX + 24)
	#define IDC_VAR_STATIC    (IDD_PREFERENCE_PRINT2_BOX + 25)
	#define IDC_VIEWPANEL_STATIC  (IDD_PREFERENCE_PRINT2_BOX + 26)
	#define IDC_WHICHPART_STATIC  (IDD_PREFERENCE_PRINT2_BOX + 27)
	#define IDC_HEADERFPPTER_GR_STATIC  (IDD_PREFERENCE_PRINT2_BOX + 28)


#define	IDD_PREFERENCE_SUB_BACKUP 6800 //(IDD_PREFERENCE_BOX + 800)
	#define IDC_BACKUPDIR_GRP_STATIC  (IDD_PREFERENCE_SUB_BACKUP + 1)
	#define IDC_BACKUPDIR_CHECK  (IDD_PREFERENCE_SUB_BACKUP + 2)
	#define IDD_BACKUPDIR_STATIC  (IDD_PREFERENCE_SUB_BACKUP + 3)
	#define IDC_BACKUPDIR_USERCUSTOMDIR_GRPSTATIC  (IDD_PREFERENCE_SUB_BACKUP + 4)
	#define IDC_BACKUPDIR_EDIT  (IDD_PREFERENCE_SUB_BACKUP + 5)
	#define IDD_BACKUPDIR_BROWSE_BUTTON  (IDD_PREFERENCE_SUB_BACKUP + 6)
	#define IDD_AUTOC_GRPSTATIC  (IDD_PREFERENCE_SUB_BACKUP + 7)
	#define IDD_AUTOC_ENABLECHECK  (IDD_PREFERENCE_SUB_BACKUP + 8)
	#define IDD_AUTOC_FUNCRADIO  (IDD_PREFERENCE_SUB_BACKUP + 9)
	#define IDD_AUTOC_WORDRADIO  (IDD_PREFERENCE_SUB_BACKUP + 10)
	#define IDD_AUTOC_STATIC_FROM  (IDD_PREFERENCE_SUB_BACKUP + 11)
	#define IDD_AUTOC_STATIC_N  (IDD_PREFERENCE_SUB_BACKUP + 12)
	#define IDD_AUTOC_STATIC_CHAR  (IDD_PREFERENCE_SUB_BACKUP + 13)
	#define IDD_AUTOC_STATIC_NOTE  (IDD_PREFERENCE_SUB_BACKUP + 14)
	#define IDD_FUNC_CHECK         (IDD_PREFERENCE_SUB_BACKUP + 15)
	#define IDD_AUTOC_BOTHRADIO  (IDD_PREFERENCE_SUB_BACKUP + 16)
	#define IDC_BACKUPDIR_RESTORESESSION_GRP_STATIC  (IDD_PREFERENCE_SUB_BACKUP + 17)
	#define IDC_BACKUPDIR_RESTORESESSION_CHECK  (IDD_PREFERENCE_SUB_BACKUP + 18)
	#define IDD_BACKUPDIR_RESTORESESSION_STATIC1  (IDD_PREFERENCE_SUB_BACKUP + 19)
	#define IDC_BACKUPDIR_RESTORESESSION_EDIT  (IDD_PREFERENCE_SUB_BACKUP + 20)
	#define IDD_BACKUPDIR_RESTORESESSION_STATIC2  (IDD_PREFERENCE_SUB_BACKUP + 21)
	#define IDD_BACKUPDIR_RESTORESESSION_PATHLABEL_STATIC  (IDD_PREFERENCE_SUB_BACKUP + 22)
	#define IDD_BACKUPDIR_RESTORESESSION_PATH_EDIT  (IDD_PREFERENCE_SUB_BACKUP + 23)
	#define IDD_AUTOC_IGNORENUMBERS  (IDD_PREFERENCE_SUB_BACKUP + 24)

#define	IDD_PREFERENCE_SUB_AUTOCOMPLETION 6850 //(IDD_PREFERENCE_BOX + 850)
	#define IDD_AUTOCINSERT_GRPSTATIC (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 1)
	#define IDD_AUTOCPARENTHESES_CHECK (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 2)
	#define IDD_AUTOCBRACKET_CHECK (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 3)
	#define IDD_AUTOCCURLYBRACKET_CHECK (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 4)
	#define IDD_AUTOC_DOUBLEQUOTESCHECK (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 5)
	#define IDD_AUTOC_QUOTESCHECK (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 6)
	#define IDD_AUTOCTAG_CHECK (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 7)
	#define IDC_MACHEDPAIROPEN_STATIC (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 8)
	#define IDC_MACHEDPAIRCLOSE_STATIC (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 9)
	#define IDC_MACHEDPAIR_STATIC1 (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 10)
	#define IDC_MACHEDPAIROPEN_EDIT1 (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 11)
	#define IDC_MACHEDPAIRCLOSE_EDIT1 (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 12)
	#define IDC_MACHEDPAIR_STATIC2 (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 13)
	#define IDC_MACHEDPAIROPEN_EDIT2 (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 14)
	#define IDC_MACHEDPAIRCLOSE_EDIT2 (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 15)
	#define IDC_MACHEDPAIR_STATIC3 (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 16)
	#define IDC_MACHEDPAIROPEN_EDIT3 (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 17)
	#define IDC_MACHEDPAIRCLOSE_EDIT3 (IDD_PREFERENCE_SUB_AUTOCOMPLETION + 18)

#define IDD_PREFERENCE_SUB_SEARCHING 6900 //(IDD_PREFERENCE_BOX + 900)
	#define IDC_CHECK_STOPFILLINGFINDFIELD (IDD_PREFERENCE_SUB_SEARCHING + 1)
	#define IDC_CHECK_MONOSPACEDFONT_FINDDLG (IDD_PREFERENCE_SUB_SEARCHING + 2)
	#define IDC_CHECK_FINDDLG_ALWAYS_VISIBLE (IDD_PREFERENCE_SUB_SEARCHING + 3)
	#define IDC_CHECK_CONFIRMREPLOPENDOCS (IDD_PREFERENCE_SUB_SEARCHING + 4)

#endif //PREFERENCE_RC_H
