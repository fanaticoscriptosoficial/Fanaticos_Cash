// Copyright (c) 2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include "clientversion.h"
#include <string>

//
// client versioning
//

static const int CLIENT_VERSION =
                           1000000 * CLIENT_VERSION_MAJOR
                         +   10000 * CLIENT_VERSION_MINOR
                         +     100 * CLIENT_VERSION_REVISION
                         +       1 * CLIENT_VERSION_BUILD;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

//
// database format versioning
//
static const int DATABASE_VERSION = 70508;

//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 800002; // Versão de Protocolo - Francis

// Versions prior to May 2020 will not be supported and will be disconnected
static const int MIN_PROTO_VERSION = 800002; //Procotolo Mínimo Aceito - Francis

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 800001; //Versão Mínima para aceitação de Blocos - Francis
static const int NOBLKS_VERSION_END = 800001; //Versão Máxima para aceitação de Blocos - Francis

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 800000;

// "mempool" command, enhanced "getdata" behavior starts with this version:
static const int MEMPOOL_GD_VERSION = 800000;

#endif
