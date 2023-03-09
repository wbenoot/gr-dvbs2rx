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
/* BINDTOOL_HEADER_FILE(bbdeheader_bb.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(0cd9b8a0a6f32ac47efe1d496e649197)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dvbs2rx/bbdeheader_bb.h>
// pydoc.h is automatically generated in the build directory
#include <bbdeheader_bb_pydoc.h>

void bind_bbdeheader_bb(py::module& m)
{

    using bbdeheader_bb = ::gr::dvbs2rx::bbdeheader_bb;


    py::class_<bbdeheader_bb, gr::block, gr::basic_block, std::shared_ptr<bbdeheader_bb>>(
        m, "bbdeheader_bb", D(bbdeheader_bb))

        .def(py::init(&bbdeheader_bb::make),
             py::arg("standard"),
             py::arg("framesize"),
             py::arg("rate"),
             py::arg("debug_level") = 0,
             D(bbdeheader_bb, make))

        .def("get_packet_count",
             &bbdeheader_bb::get_packet_count,
             D(bbdeheader_bb, get_packet_count))

        .def("get_error_count",
             &bbdeheader_bb::get_error_count,
             D(bbdeheader_bb, get_error_count))

        ;
}
