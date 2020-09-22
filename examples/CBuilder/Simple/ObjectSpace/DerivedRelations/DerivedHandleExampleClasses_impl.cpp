//**********************************************************//
//                                                          //
//       Bold for Delphi Stub File                          //
//                                                          //
//       Autogenerated file for method implementations      //
//                                                          //
//**********************************************************//

// 
#include "DerivedHandleExampleClasses.hpp"

const AnsiString FIRSTNAME[] = {"John","Paul","Steve","Edward","Bill","Arthur","Scott","Michael"};
const AnsiString LASTNAME[] = {"Wilkinson","McKenzie","Anderson","Shaw","Houston","Jackson","Miller","Woods"};
const AnsiString PROJECTNAME[] = {"Skyflash","Thunderbolt","SlingShot","Trident","Capricorn","Eagle","Gemini","Liberty"};

void __fastcall TPerson::CompleteCreate(void)
{
  TBusinessClassesRoot::CompleteCreate();
  Name = FIRSTNAME[random(7)] + " " + LASTNAME[random(7)];
}

void __fastcall TProject::CompleteCreate(void)
{
  TBusinessClassesRoot::CompleteCreate();
  Name = PROJECTNAME[random(7)];
}
 