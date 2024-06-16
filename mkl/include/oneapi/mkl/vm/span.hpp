/* -== file: span.hpp ==- */
/*******************************************************************************
* Copyright 2019-2023 Intel Corporation.
*
* This software and the related documents are Intel copyrighted  materials,  and
* your use of  them is  governed by the  express license  under which  they were
* provided to you (License).  Unless the License provides otherwise, you may not
* use, modify, copy, publish, distribute,  disclose or transmit this software or
* the related documents without Intel's prior written permission.
*
* This software and the related documents  are provided as  is,  with no express
* or implied  warranties,  other  than those  that are  expressly stated  in the
* License.
*******************************************************************************/

#ifndef ONEAPI_MKL_VM_SPAN_HPP
#define ONEAPI_MKL_VM_SPAN_HPP 1

#include <complex>
#include <cstdint>

#include <sycl/sycl.hpp>

#include "oneapi/mkl/types.hpp"

#include "oneapi/mkl/vm/decls.hpp"

namespace oneapi::mkl::vm {

// function abs
ONEAPI_MKL_VM_EXPORT sycl::event
abs(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
abs(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
abs(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
abs(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<float> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
abs(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
abs(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<double> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
abs(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    sycl::span<float> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
abs(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    oneapi::mkl::slice sa, sycl::span<float> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
abs(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    sycl::span<double> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
abs(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    oneapi::mkl::slice sa, sycl::span<double> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function acos
ONEAPI_MKL_VM_EXPORT sycl::event
acos(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acos(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
acos(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acos(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
acos(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acos(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
acos(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     sycl::span<std::complex<float>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acos(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
acos(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     sycl::span<std::complex<double>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acos(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function acosh
ONEAPI_MKL_VM_EXPORT sycl::event
acosh(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acosh(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
acosh(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acosh(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
acosh(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acosh(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
acosh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
      sycl::span<std::complex<float>> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acosh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
      oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
acosh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
      sycl::span<std::complex<double>> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acosh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
      oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function acospi
ONEAPI_MKL_VM_EXPORT sycl::event
acospi(sycl::queue& queue, sycl::span<const sycl::half> a,
       sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acospi(sycl::queue& queue, sycl::span<const sycl::half> a,
       oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
acospi(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acospi(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
       sycl::span<float> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
acospi(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
acospi(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
       sycl::span<double> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});

// function add
ONEAPI_MKL_VM_EXPORT sycl::event
add(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
add(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
add(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
    sycl::span<float> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
add(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
add(sycl::queue& queue, sycl::span<const double> a, sycl::span<const double> b,
    sycl::span<double> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
add(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
add(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    sycl::span<const std::complex<float>> b, sycl::span<std::complex<float>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
add(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    oneapi::mkl::slice sa, sycl::span<const std::complex<float>> b,
    oneapi::mkl::slice sb, sycl::span<std::complex<float>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
add(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    sycl::span<const std::complex<double>> b,
    sycl::span<std::complex<double>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
add(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    oneapi::mkl::slice sa, sycl::span<const std::complex<double>> b,
    oneapi::mkl::slice sb, sycl::span<std::complex<double>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function arg
ONEAPI_MKL_VM_EXPORT sycl::event
arg(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    sycl::span<float> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
arg(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    oneapi::mkl::slice sa, sycl::span<float> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
arg(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    sycl::span<double> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
arg(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    oneapi::mkl::slice sa, sycl::span<double> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function asin
ONEAPI_MKL_VM_EXPORT sycl::event
asin(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
asin(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
asin(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
asin(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
asin(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
asin(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
asin(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     sycl::span<std::complex<float>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
asin(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
asin(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     sycl::span<std::complex<double>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
asin(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function asinh
ONEAPI_MKL_VM_EXPORT sycl::event
asinh(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
asinh(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
asinh(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
asinh(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
asinh(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
asinh(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
asinh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
      sycl::span<std::complex<float>> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
asinh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
      oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
asinh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
      sycl::span<std::complex<double>> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
asinh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
      oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function asinpi
ONEAPI_MKL_VM_EXPORT sycl::event
asinpi(sycl::queue& queue, sycl::span<const sycl::half> a,
       sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
asinpi(sycl::queue& queue, sycl::span<const sycl::half> a,
       oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
asinpi(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
asinpi(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
       sycl::span<float> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
asinpi(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
asinpi(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
       sycl::span<double> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});

// function atan
ONEAPI_MKL_VM_EXPORT sycl::event
atan(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atan(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
atan(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atan(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
atan(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atan(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
atan(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     sycl::span<std::complex<float>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atan(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
atan(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     sycl::span<std::complex<double>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atan(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function atan2
ONEAPI_MKL_VM_EXPORT sycl::event
atan2(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atan2(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
atan2(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
      sycl::span<float> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atan2(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
atan2(sycl::queue& queue, sycl::span<const double> a,
      sycl::span<const double> b, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atan2(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function atan2pi
ONEAPI_MKL_VM_EXPORT sycl::event
atan2pi(sycl::queue& queue, sycl::span<const sycl::half> a,
        sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atan2pi(sycl::queue& queue, sycl::span<const sycl::half> a,
        oneapi::mkl::slice sa, sycl::span<const sycl::half> b,
        oneapi::mkl::slice sb, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
atan2pi(sycl::queue& queue, sycl::span<const float> a,
        sycl::span<const float> b, sycl::span<float> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atan2pi(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
        sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
        oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
atan2pi(sycl::queue& queue, sycl::span<const double> a,
        sycl::span<const double> b, sycl::span<double> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atan2pi(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
        sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
        oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function atanh
ONEAPI_MKL_VM_EXPORT sycl::event
atanh(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
atanh(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
atanh(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
atanh(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
atanh(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
atanh(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
atanh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
      sycl::span<std::complex<float>> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
atanh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
      oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
atanh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
      sycl::span<std::complex<double>> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
atanh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
      oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function atanpi
ONEAPI_MKL_VM_EXPORT sycl::event
atanpi(sycl::queue& queue, sycl::span<const sycl::half> a,
       sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atanpi(sycl::queue& queue, sycl::span<const sycl::half> a,
       oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
atanpi(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atanpi(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
       sycl::span<float> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
atanpi(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
atanpi(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
       sycl::span<double> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function cbrt
ONEAPI_MKL_VM_EXPORT sycl::event
cbrt(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
cbrt(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
cbrt(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
cbrt(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
cbrt(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
cbrt(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function cdfnorm
ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorm(sycl::queue& queue, sycl::span<const sycl::half> a,
        sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorm(sycl::queue& queue, sycl::span<const sycl::half> a,
        oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorm(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorm(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
        sycl::span<float> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorm(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorm(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
        sycl::span<double> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<double> const& eh = {});

// function cdfnorminv
ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorminv(sycl::queue& queue, sycl::span<const sycl::half> a,
           sycl::span<sycl::half> y,
           std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorminv(sycl::queue& queue, sycl::span<const sycl::half> a,
           oneapi::mkl::slice sa, sycl::span<sycl::half> y,
           oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorminv(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
           std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorminv(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
           sycl::span<float> y, oneapi::mkl::slice sy,
           std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorminv(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
           std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cdfnorminv(sycl::queue& queue, sycl::span<const double> a,
           oneapi::mkl::slice sa, sycl::span<double> y, oneapi::mkl::slice sy,
           std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<double> const& eh = {});

// function ceil
ONEAPI_MKL_VM_EXPORT sycl::event
ceil(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
ceil(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
ceil(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
ceil(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
ceil(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
ceil(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function cis
ONEAPI_MKL_VM_EXPORT sycl::event
cis(sycl::queue& queue, sycl::span<const float> a,
    sycl::span<std::complex<float>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cis(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<std::complex<float>> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cis(sycl::queue& queue, sycl::span<const double> a,
    sycl::span<std::complex<double>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cis(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<std::complex<double>> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function conj
ONEAPI_MKL_VM_EXPORT sycl::event
conj(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     sycl::span<std::complex<float>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
conj(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
conj(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     sycl::span<std::complex<double>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
conj(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function copysign
ONEAPI_MKL_VM_EXPORT sycl::event
copysign(sycl::queue& queue, sycl::span<const sycl::half> a,
         sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
         std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
copysign(sycl::queue& queue, sycl::span<const sycl::half> a,
         oneapi::mkl::slice sa, sycl::span<const sycl::half> b,
         oneapi::mkl::slice sb, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
         std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
copysign(sycl::queue& queue, sycl::span<const float> a,
         sycl::span<const float> b, sycl::span<float> y,
         std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
copysign(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
         sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
         oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
copysign(sycl::queue& queue, sycl::span<const double> a,
         sycl::span<const double> b, sycl::span<double> y,
         std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
copysign(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
         sycl::span<const double> b, oneapi::mkl::slice sb,
         sycl::span<double> y, oneapi::mkl::slice sy,
         std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function cos
ONEAPI_MKL_VM_EXPORT sycl::event
cos(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cos(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cos(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cos(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<float> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cos(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cos(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<double> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cos(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    sycl::span<std::complex<float>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cos(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cos(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    sycl::span<std::complex<double>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cos(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function cosd
ONEAPI_MKL_VM_EXPORT sycl::event
cosd(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cosd(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cosd(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cosd(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cosd(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cosd(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

// function cosh
ONEAPI_MKL_VM_EXPORT sycl::event
cosh(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cosh(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cosh(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cosh(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cosh(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cosh(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cosh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     sycl::span<std::complex<float>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cosh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cosh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     sycl::span<std::complex<double>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cosh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function cospi
ONEAPI_MKL_VM_EXPORT sycl::event
cospi(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cospi(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cospi(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cospi(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
cospi(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
cospi(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});

// function div
ONEAPI_MKL_VM_EXPORT sycl::event
div(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
div(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
div(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
    sycl::span<float> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
div(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
div(sycl::queue& queue, sycl::span<const double> a, sycl::span<const double> b,
    sycl::span<double> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
div(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
div(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    sycl::span<const std::complex<float>> b, sycl::span<std::complex<float>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
div(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    oneapi::mkl::slice sa, sycl::span<const std::complex<float>> b,
    oneapi::mkl::slice sb, sycl::span<std::complex<float>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
div(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    sycl::span<const std::complex<double>> b,
    sycl::span<std::complex<double>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
div(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    oneapi::mkl::slice sa, sycl::span<const std::complex<double>> b,
    oneapi::mkl::slice sb, sycl::span<std::complex<double>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function erf
ONEAPI_MKL_VM_EXPORT sycl::event
erf(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
erf(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
erf(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
erf(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<float> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
erf(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
erf(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<double> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function erfc
ONEAPI_MKL_VM_EXPORT sycl::event
erfc(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
erfc(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
erfc(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
erfc(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
erfc(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
erfc(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

// function erfcinv
ONEAPI_MKL_VM_EXPORT sycl::event
erfcinv(sycl::queue& queue, sycl::span<const sycl::half> a,
        sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
erfcinv(sycl::queue& queue, sycl::span<const sycl::half> a,
        oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
erfcinv(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
erfcinv(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
        sycl::span<float> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
erfcinv(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
erfcinv(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
        sycl::span<double> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<double> const& eh = {});

// function erfcx
ONEAPI_MKL_VM_EXPORT sycl::event
erfcx(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
erfcx(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
erfcx(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
erfcx(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
erfcx(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
erfcx(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function erfinv
ONEAPI_MKL_VM_EXPORT sycl::event
erfinv(sycl::queue& queue, sycl::span<const sycl::half> a,
       sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
erfinv(sycl::queue& queue, sycl::span<const sycl::half> a,
       oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
erfinv(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
erfinv(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
       sycl::span<float> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
erfinv(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
erfinv(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
       sycl::span<double> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});

// function exp
ONEAPI_MKL_VM_EXPORT sycl::event
exp(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
exp(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
exp(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
exp(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<float> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
exp(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
exp(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<double> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
exp(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    sycl::span<std::complex<float>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
exp(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
exp(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    sycl::span<std::complex<double>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
exp(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function exp10
ONEAPI_MKL_VM_EXPORT sycl::event
exp10(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
exp10(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
exp10(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
exp10(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
exp10(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
exp10(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});

// function exp2
ONEAPI_MKL_VM_EXPORT sycl::event
exp2(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
exp2(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
exp2(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
exp2(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
exp2(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
exp2(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

// function expint1
ONEAPI_MKL_VM_EXPORT sycl::event
expint1(sycl::queue& queue, sycl::span<const sycl::half> a,
        sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
expint1(sycl::queue& queue, sycl::span<const sycl::half> a,
        oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
expint1(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
expint1(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
        sycl::span<float> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
expint1(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
expint1(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
        sycl::span<double> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<double> const& eh = {});

// function expm1
ONEAPI_MKL_VM_EXPORT sycl::event
expm1(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
expm1(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
expm1(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
expm1(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
expm1(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
expm1(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});

// function fdim
ONEAPI_MKL_VM_EXPORT sycl::event
fdim(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
fdim(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
fdim(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
     sycl::span<float> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
fdim(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
fdim(sycl::queue& queue, sycl::span<const double> a, sycl::span<const double> b,
     sycl::span<double> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
fdim(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function floor
ONEAPI_MKL_VM_EXPORT sycl::event
floor(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
floor(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
floor(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
floor(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
floor(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
floor(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function fmax
ONEAPI_MKL_VM_EXPORT sycl::event
fmax(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
fmax(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
fmax(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
     sycl::span<float> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
fmax(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
fmax(sycl::queue& queue, sycl::span<const double> a, sycl::span<const double> b,
     sycl::span<double> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
fmax(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function fmin
ONEAPI_MKL_VM_EXPORT sycl::event
fmin(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
fmin(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
fmin(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
     sycl::span<float> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
fmin(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
fmin(sycl::queue& queue, sycl::span<const double> a, sycl::span<const double> b,
     sycl::span<double> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
fmin(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function fmod
ONEAPI_MKL_VM_EXPORT sycl::event
fmod(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
fmod(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
fmod(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
     sycl::span<float> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
fmod(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
fmod(sycl::queue& queue, sycl::span<const double> a, sycl::span<const double> b,
     sycl::span<double> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
fmod(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

// function frac
ONEAPI_MKL_VM_EXPORT sycl::event
frac(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
frac(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
frac(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
frac(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
frac(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
frac(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function hypot
ONEAPI_MKL_VM_EXPORT sycl::event
hypot(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
hypot(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
hypot(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
      sycl::span<float> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
hypot(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
hypot(sycl::queue& queue, sycl::span<const double> a,
      sycl::span<const double> b, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
hypot(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function i0
ONEAPI_MKL_VM_EXPORT sycl::event
i0(sycl::queue& queue, sycl::span<const sycl::half> a, sycl::span<sycl::half> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
i0(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
   sycl::span<sycl::half> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
i0(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
i0(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
   sycl::span<float> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
i0(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
i0(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
   sycl::span<double> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function i1
ONEAPI_MKL_VM_EXPORT sycl::event
i1(sycl::queue& queue, sycl::span<const sycl::half> a, sycl::span<sycl::half> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
i1(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
   sycl::span<sycl::half> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
i1(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
i1(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
   sycl::span<float> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
i1(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
i1(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
   sycl::span<double> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function inv
ONEAPI_MKL_VM_EXPORT sycl::event
inv(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
inv(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
inv(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
inv(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<float> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
inv(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
inv(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<double> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});

// function invcbrt
ONEAPI_MKL_VM_EXPORT sycl::event
invcbrt(sycl::queue& queue, sycl::span<const sycl::half> a,
        sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
invcbrt(sycl::queue& queue, sycl::span<const sycl::half> a,
        oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
invcbrt(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
invcbrt(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
        sycl::span<float> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
invcbrt(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
invcbrt(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
        sycl::span<double> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<double> const& eh = {});

// function invsqrt
ONEAPI_MKL_VM_EXPORT sycl::event
invsqrt(sycl::queue& queue, sycl::span<const sycl::half> a,
        sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
invsqrt(sycl::queue& queue, sycl::span<const sycl::half> a,
        oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
invsqrt(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
invsqrt(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
        sycl::span<float> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
invsqrt(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
invsqrt(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
        sycl::span<double> y, oneapi::mkl::slice sy,
        std::vector<sycl::event> const& depends = {},
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
        oneapi::mkl::vm::error_handler<double> const& eh = {});

// function j0
ONEAPI_MKL_VM_EXPORT sycl::event
j0(sycl::queue& queue, sycl::span<const sycl::half> a, sycl::span<sycl::half> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
j0(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
   sycl::span<sycl::half> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
j0(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
j0(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
   sycl::span<float> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
j0(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
j0(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
   sycl::span<double> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function j1
ONEAPI_MKL_VM_EXPORT sycl::event
j1(sycl::queue& queue, sycl::span<const sycl::half> a, sycl::span<sycl::half> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
j1(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
   sycl::span<sycl::half> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
j1(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
j1(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
   sycl::span<float> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
j1(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
j1(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
   sycl::span<double> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function lgamma
ONEAPI_MKL_VM_EXPORT sycl::event
lgamma(sycl::queue& queue, sycl::span<const sycl::half> a,
       sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
lgamma(sycl::queue& queue, sycl::span<const sycl::half> a,
       oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
lgamma(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
lgamma(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
       sycl::span<float> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
lgamma(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
lgamma(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
       sycl::span<double> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});

// function linearfrac
ONEAPI_MKL_VM_EXPORT sycl::event
linearfrac(sycl::queue& queue, sycl::span<const sycl::half> a,
           sycl::span<const sycl::half> b, sycl::half c, sycl::half d,
           sycl::half e, sycl::half f, sycl::span<sycl::half> y,
           std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
linearfrac(sycl::queue& queue, sycl::span<const sycl::half> a,
           oneapi::mkl::slice sa, sycl::span<const sycl::half> b,
           oneapi::mkl::slice sb, sycl::half c, sycl::half d, sycl::half e,
           sycl::half f, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
           std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
linearfrac(sycl::queue& queue, sycl::span<const float> a,
           sycl::span<const float> b, float c, float d, float e, float f,
           sycl::span<float> y, std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
linearfrac(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
           sycl::span<const float> b, oneapi::mkl::slice sb, float c, float d,
           float e, float f, sycl::span<float> y, oneapi::mkl::slice sy,
           std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
linearfrac(sycl::queue& queue, sycl::span<const double> a,
           sycl::span<const double> b, double c, double d, double e, double f,
           sycl::span<double> y, std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
linearfrac(sycl::queue& queue, sycl::span<const double> a,
           oneapi::mkl::slice sa, sycl::span<const double> b,
           oneapi::mkl::slice sb, double c, double d, double e, double f,
           sycl::span<double> y, oneapi::mkl::slice sy,
           std::vector<sycl::event> const& depends = {},
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
           oneapi::mkl::vm::error_handler<double> const& eh = {});

// function ln
ONEAPI_MKL_VM_EXPORT sycl::event
ln(sycl::queue& queue, sycl::span<const sycl::half> a, sycl::span<sycl::half> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
   oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
ln(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
   sycl::span<sycl::half> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
   oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
ln(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
   oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
ln(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
   sycl::span<float> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
   oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
ln(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
   oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
ln(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
   sycl::span<double> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
   oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
ln(sycl::queue& queue, sycl::span<const std::complex<float>> a,
   sycl::span<std::complex<float>> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
   oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
ln(sycl::queue& queue, sycl::span<const std::complex<float>> a,
   oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
   oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
   oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
ln(sycl::queue& queue, sycl::span<const std::complex<double>> a,
   sycl::span<std::complex<double>> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
   oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
ln(sycl::queue& queue, sycl::span<const std::complex<double>> a,
   oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
   oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
   oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function log10
ONEAPI_MKL_VM_EXPORT sycl::event
log10(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
log10(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
log10(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
log10(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
log10(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
log10(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
log10(sycl::queue& queue, sycl::span<const std::complex<float>> a,
      sycl::span<std::complex<float>> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
log10(sycl::queue& queue, sycl::span<const std::complex<float>> a,
      oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
log10(sycl::queue& queue, sycl::span<const std::complex<double>> a,
      sycl::span<std::complex<double>> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
log10(sycl::queue& queue, sycl::span<const std::complex<double>> a,
      oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
      oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function log1p
ONEAPI_MKL_VM_EXPORT sycl::event
log1p(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
log1p(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
log1p(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
log1p(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
log1p(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
log1p(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});

// function log2
ONEAPI_MKL_VM_EXPORT sycl::event
log2(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
log2(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
log2(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
log2(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
log2(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
log2(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

// function logb
ONEAPI_MKL_VM_EXPORT sycl::event
logb(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
logb(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
logb(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
logb(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
logb(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
logb(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

// function maxmag
ONEAPI_MKL_VM_EXPORT sycl::event
maxmag(sycl::queue& queue, sycl::span<const sycl::half> a,
       sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
maxmag(sycl::queue& queue, sycl::span<const sycl::half> a,
       oneapi::mkl::slice sa, sycl::span<const sycl::half> b,
       oneapi::mkl::slice sb, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
maxmag(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
       sycl::span<float> y, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
maxmag(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
       sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
       oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
maxmag(sycl::queue& queue, sycl::span<const double> a,
       sycl::span<const double> b, sycl::span<double> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
maxmag(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
       sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
       oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function minmag
ONEAPI_MKL_VM_EXPORT sycl::event
minmag(sycl::queue& queue, sycl::span<const sycl::half> a,
       sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
minmag(sycl::queue& queue, sycl::span<const sycl::half> a,
       oneapi::mkl::slice sa, sycl::span<const sycl::half> b,
       oneapi::mkl::slice sb, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
minmag(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
       sycl::span<float> y, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
minmag(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
       sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
       oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
minmag(sycl::queue& queue, sycl::span<const double> a,
       sycl::span<const double> b, sycl::span<double> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
minmag(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
       sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
       oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function modf
ONEAPI_MKL_VM_EXPORT sycl::event
modf(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, sycl::span<sycl::half> z,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
modf(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy, sycl::span<sycl::half> z,
     oneapi::mkl::slice sz, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
modf(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     sycl::span<float> z, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
modf(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy, sycl::span<float> z,
     oneapi::mkl::slice sz, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
modf(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     sycl::span<double> z, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
modf(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy, sycl::span<double> z,
     oneapi::mkl::slice sz, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function mul
ONEAPI_MKL_VM_EXPORT sycl::event
mul(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
mul(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
mul(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
    sycl::span<float> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
mul(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
mul(sycl::queue& queue, sycl::span<const double> a, sycl::span<const double> b,
    sycl::span<double> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
mul(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
mul(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    sycl::span<const std::complex<float>> b, sycl::span<std::complex<float>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
mul(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    oneapi::mkl::slice sa, sycl::span<const std::complex<float>> b,
    oneapi::mkl::slice sb, sycl::span<std::complex<float>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
mul(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    sycl::span<const std::complex<double>> b,
    sycl::span<std::complex<double>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
mul(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    oneapi::mkl::slice sa, sycl::span<const std::complex<double>> b,
    oneapi::mkl::slice sb, sycl::span<std::complex<double>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function mulbyconj
ONEAPI_MKL_VM_EXPORT sycl::event
mulbyconj(sycl::queue& queue, sycl::span<const std::complex<float>> a,
          sycl::span<const std::complex<float>> b,
          sycl::span<std::complex<float>> y,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
mulbyconj(sycl::queue& queue, sycl::span<const std::complex<float>> a,
          oneapi::mkl::slice sa, sycl::span<const std::complex<float>> b,
          oneapi::mkl::slice sb, sycl::span<std::complex<float>> y,
          oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
mulbyconj(sycl::queue& queue, sycl::span<const std::complex<double>> a,
          sycl::span<const std::complex<double>> b,
          sycl::span<std::complex<double>> y,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
mulbyconj(sycl::queue& queue, sycl::span<const std::complex<double>> a,
          oneapi::mkl::slice sa, sycl::span<const std::complex<double>> b,
          oneapi::mkl::slice sb, sycl::span<std::complex<double>> y,
          oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function nearbyint
ONEAPI_MKL_VM_EXPORT sycl::event
nearbyint(sycl::queue& queue, sycl::span<const sycl::half> a,
          sycl::span<sycl::half> y,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
nearbyint(sycl::queue& queue, sycl::span<const sycl::half> a,
          oneapi::mkl::slice sa, sycl::span<sycl::half> y,
          oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
nearbyint(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
nearbyint(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
          sycl::span<float> y, oneapi::mkl::slice sy,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
nearbyint(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
nearbyint(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
          sycl::span<double> y, oneapi::mkl::slice sy,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function nextafter
ONEAPI_MKL_VM_EXPORT sycl::event
nextafter(sycl::queue& queue, sycl::span<const sycl::half> a,
          sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
nextafter(sycl::queue& queue, sycl::span<const sycl::half> a,
          oneapi::mkl::slice sa, sycl::span<const sycl::half> b,
          oneapi::mkl::slice sb, sycl::span<sycl::half> y,
          oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
nextafter(sycl::queue& queue, sycl::span<const float> a,
          sycl::span<const float> b, sycl::span<float> y,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
nextafter(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
          sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
          oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
nextafter(sycl::queue& queue, sycl::span<const double> a,
          sycl::span<const double> b, sycl::span<double> y,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
nextafter(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
          sycl::span<const double> b, oneapi::mkl::slice sb,
          sycl::span<double> y, oneapi::mkl::slice sy,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<double> const& eh = {});

// function pow
ONEAPI_MKL_VM_EXPORT sycl::event
pow(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
pow(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
pow(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
    sycl::span<float> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
pow(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
pow(sycl::queue& queue, sycl::span<const double> a, sycl::span<const double> b,
    sycl::span<double> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
pow(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
pow(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    sycl::span<const std::complex<float>> b, sycl::span<std::complex<float>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
pow(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    oneapi::mkl::slice sa, sycl::span<const std::complex<float>> b,
    oneapi::mkl::slice sb, sycl::span<std::complex<float>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
pow(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    sycl::span<const std::complex<double>> b,
    sycl::span<std::complex<double>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
pow(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    oneapi::mkl::slice sa, sycl::span<const std::complex<double>> b,
    oneapi::mkl::slice sb, sycl::span<std::complex<double>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function pow2o3
ONEAPI_MKL_VM_EXPORT sycl::event
pow2o3(sycl::queue& queue, sycl::span<const sycl::half> a,
       sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
pow2o3(sycl::queue& queue, sycl::span<const sycl::half> a,
       oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
pow2o3(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
pow2o3(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
       sycl::span<float> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
pow2o3(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
pow2o3(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
       sycl::span<double> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function pow3o2
ONEAPI_MKL_VM_EXPORT sycl::event
pow3o2(sycl::queue& queue, sycl::span<const sycl::half> a,
       sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
pow3o2(sycl::queue& queue, sycl::span<const sycl::half> a,
       oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
pow3o2(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
pow3o2(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
       sycl::span<float> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
pow3o2(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
pow3o2(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
       sycl::span<double> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});

// function powr
ONEAPI_MKL_VM_EXPORT sycl::event
powr(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
powr(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
powr(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
     sycl::span<float> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
powr(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
powr(sycl::queue& queue, sycl::span<const double> a, sycl::span<const double> b,
     sycl::span<double> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
powr(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

// function powx
ONEAPI_MKL_VM_EXPORT sycl::event
powx(sycl::queue& queue, sycl::span<const sycl::half> a, sycl::half b,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
powx(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::half b, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
powx(sycl::queue& queue, sycl::span<const float> a, float b,
     sycl::span<float> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
powx(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     float b, sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
powx(sycl::queue& queue, sycl::span<const double> a, double b,
     sycl::span<double> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
powx(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     double b, sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
powx(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     std::complex<float> b, sycl::span<std::complex<float>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
powx(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     oneapi::mkl::slice sa, std::complex<float> b,
     sycl::span<std::complex<float>> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
powx(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     std::complex<double> b, sycl::span<std::complex<double>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
powx(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     oneapi::mkl::slice sa, std::complex<double> b,
     sycl::span<std::complex<double>> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function remainder
ONEAPI_MKL_VM_EXPORT sycl::event
remainder(sycl::queue& queue, sycl::span<const sycl::half> a,
          sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
remainder(sycl::queue& queue, sycl::span<const sycl::half> a,
          oneapi::mkl::slice sa, sycl::span<const sycl::half> b,
          oneapi::mkl::slice sb, sycl::span<sycl::half> y,
          oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
remainder(sycl::queue& queue, sycl::span<const float> a,
          sycl::span<const float> b, sycl::span<float> y,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
remainder(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
          sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
          oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
remainder(sycl::queue& queue, sycl::span<const double> a,
          sycl::span<const double> b, sycl::span<double> y,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
remainder(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
          sycl::span<const double> b, oneapi::mkl::slice sb,
          sycl::span<double> y, oneapi::mkl::slice sy,
          std::vector<sycl::event> const& depends = {},
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
          oneapi::mkl::vm::error_handler<double> const& eh = {});

// function rint
ONEAPI_MKL_VM_EXPORT sycl::event
rint(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
rint(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
rint(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
rint(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
rint(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
rint(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function round
ONEAPI_MKL_VM_EXPORT sycl::event
round(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
round(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
round(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
round(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
round(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
round(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function sin
ONEAPI_MKL_VM_EXPORT sycl::event
sin(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sin(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sin(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sin(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<float> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sin(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sin(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<double> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sin(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    sycl::span<std::complex<float>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sin(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sin(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    sycl::span<std::complex<double>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sin(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function sincos
ONEAPI_MKL_VM_EXPORT sycl::event
sincos(sycl::queue& queue, sycl::span<const sycl::half> a,
       sycl::span<sycl::half> y, sycl::span<sycl::half> z,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sincos(sycl::queue& queue, sycl::span<const sycl::half> a,
       oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
       sycl::span<sycl::half> z, oneapi::mkl::slice sz,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sincos(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
       sycl::span<float> z, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sincos(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
       sycl::span<float> y, oneapi::mkl::slice sy, sycl::span<float> z,
       oneapi::mkl::slice sz, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sincos(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
       sycl::span<double> z, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sincos(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
       sycl::span<double> y, oneapi::mkl::slice sy, sycl::span<double> z,
       oneapi::mkl::slice sz, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});

// function sincospi
ONEAPI_MKL_VM_EXPORT sycl::event
sincospi(sycl::queue& queue, sycl::span<const sycl::half> a,
         sycl::span<sycl::half> y, sycl::span<sycl::half> z,
         std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
         oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sincospi(sycl::queue& queue, sycl::span<const sycl::half> a,
         oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
         sycl::span<sycl::half> z, oneapi::mkl::slice sz,
         std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
         oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sincospi(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
         sycl::span<float> z, std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
         oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sincospi(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
         sycl::span<float> y, oneapi::mkl::slice sy, sycl::span<float> z,
         oneapi::mkl::slice sz, std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
         oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sincospi(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
         sycl::span<double> z, std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
         oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sincospi(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
         sycl::span<double> y, oneapi::mkl::slice sy, sycl::span<double> z,
         oneapi::mkl::slice sz, std::vector<sycl::event> const& depends = {},
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
         oneapi::mkl::vm::error_handler<double> const& eh = {});

// function sind
ONEAPI_MKL_VM_EXPORT sycl::event
sind(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sind(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sind(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sind(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sind(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sind(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

// function sinh
ONEAPI_MKL_VM_EXPORT sycl::event
sinh(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sinh(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sinh(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sinh(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sinh(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sinh(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sinh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     sycl::span<std::complex<float>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sinh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sinh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     sycl::span<std::complex<double>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sinh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function sinpi
ONEAPI_MKL_VM_EXPORT sycl::event
sinpi(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sinpi(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sinpi(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sinpi(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sinpi(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sinpi(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});

// function sqr
ONEAPI_MKL_VM_EXPORT sycl::event
sqr(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
sqr(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
sqr(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
sqr(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<float> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
sqr(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
sqr(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<double> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function sqrt
ONEAPI_MKL_VM_EXPORT sycl::event
sqrt(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sqrt(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sqrt(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sqrt(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sqrt(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sqrt(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sqrt(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     sycl::span<std::complex<float>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sqrt(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sqrt(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     sycl::span<std::complex<double>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sqrt(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function sub
ONEAPI_MKL_VM_EXPORT sycl::event
sub(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<const sycl::half> b, sycl::span<sycl::half> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sub(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<const sycl::half> b, oneapi::mkl::slice sb,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sub(sycl::queue& queue, sycl::span<const float> a, sycl::span<const float> b,
    sycl::span<float> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sub(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<const float> b, oneapi::mkl::slice sb, sycl::span<float> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sub(sycl::queue& queue, sycl::span<const double> a, sycl::span<const double> b,
    sycl::span<double> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sub(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<const double> b, oneapi::mkl::slice sb, sycl::span<double> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sub(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    sycl::span<const std::complex<float>> b, sycl::span<std::complex<float>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sub(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    oneapi::mkl::slice sa, sycl::span<const std::complex<float>> b,
    oneapi::mkl::slice sb, sycl::span<std::complex<float>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
sub(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    sycl::span<const std::complex<double>> b,
    sycl::span<std::complex<double>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
sub(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    oneapi::mkl::slice sa, sycl::span<const std::complex<double>> b,
    oneapi::mkl::slice sb, sycl::span<std::complex<double>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function tan
ONEAPI_MKL_VM_EXPORT sycl::event
tan(sycl::queue& queue, sycl::span<const sycl::half> a,
    sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tan(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
    sycl::span<sycl::half> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
tan(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tan(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
    sycl::span<float> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
tan(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tan(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
    sycl::span<double> y, oneapi::mkl::slice sy,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<double> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
tan(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    sycl::span<std::complex<float>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tan(sycl::queue& queue, sycl::span<const std::complex<float>> a,
    oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<float>> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
tan(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    sycl::span<std::complex<double>> y,
    std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tan(sycl::queue& queue, sycl::span<const std::complex<double>> a,
    oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
    oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
    oneapi::mkl::vm::error_handler<std::complex<double>> const& eh = {});

// function tand
ONEAPI_MKL_VM_EXPORT sycl::event
tand(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tand(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
tand(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tand(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
tand(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tand(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
     oneapi::mkl::vm::error_handler<double> const& eh = {});

// function tanh
ONEAPI_MKL_VM_EXPORT sycl::event
tanh(sycl::queue& queue, sycl::span<const sycl::half> a,
     sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
tanh(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
     sycl::span<sycl::half> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
tanh(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
tanh(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
     sycl::span<float> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
tanh(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
tanh(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
     sycl::span<double> y, oneapi::mkl::slice sy,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
tanh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     sycl::span<std::complex<float>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
tanh(sycl::queue& queue, sycl::span<const std::complex<float>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<float>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
tanh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     sycl::span<std::complex<double>> y,
     std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
tanh(sycl::queue& queue, sycl::span<const std::complex<double>> a,
     oneapi::mkl::slice sa, sycl::span<std::complex<double>> y,
     oneapi::mkl::slice sy, std::vector<sycl::event> const& depends = {},
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function tanpi
ONEAPI_MKL_VM_EXPORT sycl::event
tanpi(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tanpi(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
tanpi(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tanpi(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
tanpi(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tanpi(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
      oneapi::mkl::vm::error_handler<double> const& eh = {});

// function tgamma
ONEAPI_MKL_VM_EXPORT sycl::event
tgamma(sycl::queue& queue, sycl::span<const sycl::half> a,
       sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tgamma(sycl::queue& queue, sycl::span<const sycl::half> a,
       oneapi::mkl::slice sa, sycl::span<sycl::half> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<sycl::half> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
tgamma(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tgamma(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
       sycl::span<float> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<float> const& eh = {});

ONEAPI_MKL_VM_EXPORT sycl::event
tgamma(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});
ONEAPI_MKL_VM_EXPORT sycl::event
tgamma(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
       sycl::span<double> y, oneapi::mkl::slice sy,
       std::vector<sycl::event> const& depends = {},
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined,
       oneapi::mkl::vm::error_handler<double> const& eh = {});

// function trunc
ONEAPI_MKL_VM_EXPORT sycl::event
trunc(sycl::queue& queue, sycl::span<const sycl::half> a,
      sycl::span<sycl::half> y, std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
trunc(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
      sycl::span<sycl::half> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
trunc(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
trunc(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
      sycl::span<float> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
trunc(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
trunc(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
      sycl::span<double> y, oneapi::mkl::slice sy,
      std::vector<sycl::event> const& depends = {},
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function y0
ONEAPI_MKL_VM_EXPORT sycl::event
y0(sycl::queue& queue, sycl::span<const sycl::half> a, sycl::span<sycl::half> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
y0(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
   sycl::span<sycl::half> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
y0(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
y0(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
   sycl::span<float> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
y0(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
y0(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
   sycl::span<double> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

// function y1
ONEAPI_MKL_VM_EXPORT sycl::event
y1(sycl::queue& queue, sycl::span<const sycl::half> a, sycl::span<sycl::half> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
y1(sycl::queue& queue, sycl::span<const sycl::half> a, oneapi::mkl::slice sa,
   sycl::span<sycl::half> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
y1(sycl::queue& queue, sycl::span<const float> a, sycl::span<float> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
y1(sycl::queue& queue, sycl::span<const float> a, oneapi::mkl::slice sa,
   sycl::span<float> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

ONEAPI_MKL_VM_EXPORT sycl::event
y1(sycl::queue& queue, sycl::span<const double> a, sycl::span<double> y,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);
ONEAPI_MKL_VM_EXPORT sycl::event
y1(sycl::queue& queue, sycl::span<const double> a, oneapi::mkl::slice sa,
   sycl::span<double> y, oneapi::mkl::slice sy,
   std::vector<sycl::event> const& depends = {},
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::not_defined);

} // namespace oneapi::mkl::vm

#endif // ONEAPI_MKL_VM_SPAN_HPP
