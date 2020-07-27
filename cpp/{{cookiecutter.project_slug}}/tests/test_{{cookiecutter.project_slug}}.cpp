#include "{{cookiecutter.project_slug}}.hpp"
#include "test_{{cookiecutter.project_slug}}.hpp"

TemplateTests::TemplateTests()
{

}

TemplateTests::~TemplateTests()
{

}

void TemplateTests::SetUp()
{

}

void TemplateTests::TearDown()
{

}

TEST_F(TemplateTests, StringTest)
{
    ASSERT_EQ("123", "123");
}

TEST_F(TemplateTests, BoolTest)
{
    ASSERT_TRUE(true);
}