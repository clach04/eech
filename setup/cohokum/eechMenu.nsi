;NSIS Modern User Interface
;EECH setup exe script, by gotcha jan 2005

;--------------------------------
;Include Modern UI

  !include "MUI.nsh"

;--------------------------------
;General
  
  ;define these variable 
  !define VERSION "161W4"
  
  ;Name and file
  Name "EECH Dev release ${VERSION}"
  OutFile "eechsetup${VERSION}.exe"

  ;Default installation folder
  InstallDir "c:\razorworks\"
  
  ;Get installation folder from registry if available
  InstallDirRegKey HKLM "Software\Razorworks\Comanche Hokum\" "INSTALLATION PATH"

;--------------------------------
;Interface Settings

  !define MUI_ABORTWARNING

;--------------------------------
;Pages
		!define MUI_ICON eech.ico
  		!define MUI_WELCOMEFINISHPAGE_BITMAP enemyengagedlogo.bmp
  		!define MUI_WELCOMEFINISHPAGE_BITMAP_NOSTRETCH

  !insertmacro MUI_PAGE_LICENSE licenceeech.txt
		!define MUI_COMPONENTSPAGE_TEXT_TOP "Check/Uncheck the components you want to install. CAREFUL: files will be overwritten!"
  !insertmacro MUI_PAGE_COMPONENTS  	
  		!define MUI_DIRECTORYPAGE_TEXT_TOP "Please select the Razorworks root folder. This installer will place the files in the correct directories."
  !insertmacro MUI_PAGE_DIRECTORY
  !insertmacro MUI_PAGE_INSTFILES
	   !define MUI_FINISHPAGE_NOAUTOCLOSE
  		!define MUI_FINISHPAGE_SHOWREADME "$INSTDIR\cohokum\readme.html"
  !insertmacro MUI_PAGE_FINISH
  
;--------------------------------
;Languages
 
  !insertmacro MUI_LANGUAGE "English"

;--------------------------------
;Installer Sections


Section "cohokum.exe" SectionExe

  SetOutPath "$INSTDIR\cohokum"
  
  ;ADD YOUR OWN FILES HERE...
  File "..\..\aphavoc\cohokum.exe"
  File readme.html
  File motd.txt

  SetOutPath "$INSTDIR\common\data\language\"
  File ..\common\data\language\tlate6.dat

  SetOutPath "$INSTDIR\cohokum\graphics\ui\cohokum\Map"
  File graphics\ui\cohokum\Map\PayAh6.psd
  File graphics\ui\cohokum\Map\PayBla.psd
  File graphics\ui\cohokum\Map\PayHin.psd
  File graphics\ui\cohokum\Map\PayKa5.psd
 
SectionEnd

Section "WUT files" SecGWUT

  SetOutPath "$INSTDIR\cohokum"
  
  ;ADD YOUR OWN FILES HERE...
  File GWUT146X.csv
  File GWUT151D.csv
  File GWUT1613H.csv  

SectionEnd

;--------------------------------
;Descriptions

  ;Language strings
  LangString DESC_SectionExe ${LANG_ENGLISH} "Install cohokum.exe, readme.html, additional payload screens, motd.txt and tlate6.dat language file"
  LangString DESC_SecGWUT ${LANG_ENGLISH} "Weapons and Units Tweaker files"

  ;Assign language strings to sections
  !insertmacro MUI_FUNCTION_DESCRIPTION_BEGIN
    !insertmacro MUI_DESCRIPTION_TEXT ${SectionExe} $(DESC_SectionExe)
    !insertmacro MUI_DESCRIPTION_TEXT ${SecGWUT} $(DESC_SecGWUT)
  !insertmacro MUI_FUNCTION_DESCRIPTION_END
;--------------------------------