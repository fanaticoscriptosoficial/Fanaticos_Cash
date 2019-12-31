/* Copyright (c) 2014, Fanaticoscash Developers */
/* See LICENSE for licensing information */

/**
 * \file Fanaticoscash.h
 * \brief Headers for Fanaticoscash.cpp
 **/

#ifndef TOR_FanaticosCash_H
#define TOR_FanaticosCash_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* FanaticosCash_tor_data_directory(
    );

    char const* FanaticosCash_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

