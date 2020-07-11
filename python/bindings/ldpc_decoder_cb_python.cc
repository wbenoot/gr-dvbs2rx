/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(ldpc_decoder_cb.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(e99acbab38e0df47903cc6f72b05592a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <dvbs2rx/ldpc_decoder_cb.h>
// pydoc.h is automatically generated in the build directory
#include <ldpc_decoder_cb_pydoc.h>

void bind_ldpc_decoder_cb(py::module& m)
{

    using ldpc_decoder_cb    = ::gr::dvbs2rx::ldpc_decoder_cb;


    py::class_<ldpc_decoder_cb, gr::block, gr::basic_block,
        std::shared_ptr<ldpc_decoder_cb>>(m, "ldpc_decoder_cb", D(ldpc_decoder_cb))

        .def(py::init(&ldpc_decoder_cb::make),
           py::arg("standard"),
           py::arg("framesize"),
           py::arg("rate"),
           py::arg("constellation"),
           py::arg("outputmode"),
           py::arg("infomode"),
           D(ldpc_decoder_cb,make)
        )
        



        ;




}







