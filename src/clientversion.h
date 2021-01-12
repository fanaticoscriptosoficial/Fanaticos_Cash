#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

//
// client versioning
//

// These need to be macros, as version.cpp's and bitcoin-qt.rc's voodoo requires it
#define CLIENT_VERSION_MAJOR       3 //Versão Maior - Francis
#define CLIENT_VERSION_MINOR       0 //Versão Menor - Francis
#define CLIENT_VERSION_REVISION    0 //Versão de Revisão - Francis
#define CLIENT_VERSION_BUILD       1 //Versão de Build - Francis

// Converts the parameter X to a string after macro replacement on X has been performed.
// Don't merge these into one macro!
#define STRINGIZE(X) DO_STRINGIZE(X)
#define DO_STRINGIZE(X) #X

#endif // CLIENTVERSION_H
