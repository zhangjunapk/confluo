#include "gtest/gtest.h"

#include "aggregate_test.h"
#include "column_test.h"
#include "compiled_predicate_test.h"
#include "compiled_expression_test.h"
#include "dialog_table_test.h"
#include "expression_compiler_test.h"
#include "expressions_test.h"
#include "filter_test.h"
#include "minterm_test.h"
#include "monolog_test.h"
#include "numeric_test.h"
#include "tiered_index_test.h"
#include "value_test.h"

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
