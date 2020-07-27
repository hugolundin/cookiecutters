#include "gtest/gtest.h"

class TemplateTests: public ::testing::Test {
    protected:
        TemplateTests();
        virtual ~TemplateTests();
        virtual void SetUp();
        virtual void TearDown();
};
