/*
 * Copyright 2021 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(pdu_add_meta.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(5616773612a078dc68cc90cf7423e56a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <satellites/pdu_add_meta.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_add_meta_pydoc.h>

void bind_pdu_add_meta(py::module& m)
{

    using pdu_add_meta = ::gr::satellites::pdu_add_meta;


    py::class_<pdu_add_meta, gr::block, gr::basic_block, std::shared_ptr<pdu_add_meta>>(
        m, "pdu_add_meta", D(pdu_add_meta))

        .def(py::init(&pdu_add_meta::make), py::arg("meta"), D(pdu_add_meta, make))


        ;
}
