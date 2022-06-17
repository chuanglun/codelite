#include "UIBreakpoint.hpp"

UIBreakpoint::UIBreakpoint() {}

UIBreakpoint::~UIBreakpoint() {}

bool UIBreakpoint::SameAs(const UIBreakpoint& other) const
{
    // check the type first
    if(GetType() != other.GetType()) {
        return false;
    }

    switch(GetType()) {
    case UIBreakpointType::INVALID:
        return true;
    case UIBreakpointType::SOURCE:
        return m_file == other.m_file && m_line == other.m_line;
    case UIBreakpointType::FUNCTION:
        return m_function == other.m_function;
    }
    return false; // should not get here
}

JSONItem UIBreakpoint::To() const
{
    JSON root(cJSON_Object);
    auto json = root.toElement();

    json.addProperty("type", (int)m_type);
    json.addProperty("file", m_file);
    json.addProperty("line", m_line);
    json.addProperty("function", m_function);
    return json;
}

void UIBreakpoint::From(const JSONItem& json)
{
    m_type = (UIBreakpointType)json["type"].toInt(wxNOT_FOUND);
    m_file = json["file"].toString();
    m_line = json["line"].toInt(wxNOT_FOUND);
    m_function = json["function"].toString();
}
