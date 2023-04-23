//===----------------------------------------------------------------------===//
//
// Part of the Utopia EDA Project, under the Apache License v2.0
// SPDX-License-Identifier: Apache-2.0
// Copyright 2023 ISP RAS (http://www.ispras.ru)
//
//===----------------------------------------------------------------------===//

#include "base_checker.h"
#include "BDD_checker.h"
#include "checker.h"
#include "RND_checker.h"

namespace eda::gate::debugger {
BaseChecker &getChecker(LecType lec) {
  switch(lec) {
    case LecType::BdD: return BDDChecker::get();
    case LecType::DEFAULT: return Checker::get();
    case LecType::RND: return RNDChecker::get();
    default: return Checker::get();
  }
}
BaseChecker::~BaseChecker() {};

} // namespace eda::gate::debugger