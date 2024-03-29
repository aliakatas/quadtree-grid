#include "qgmmessage.h"

namespace qgmmessage
{
    QGMMessage::QGMMessage(const std::string& message, const char* func_name, const Severity& severity)
    {
        m_timestamp = std::chrono::high_resolution_clock::now();
        m_message = message;
        m_function_name = std::string(func_name);
        m_severity = severity;
    }
    
    QGMMessage::QGMMessage(const char* message, const char* func_name, const Severity& severity) : 
        QGMMessage::QGMMessage(std::string(message), func_name, severity) {}
    
    QGMMessage::QGMMessage(const std::string& message, const Severity& severity) : 
        QGMMessage::QGMMessage(std::string(message), "", severity) {}
    
    QGMMessage::QGMMessage(const char* message, const Severity& severity) : QGMMessage::QGMMessage(message, "", severity) {}

    std::chrono::high_resolution_clock::time_point QGMMessage::get_time_of_occurence() const
    {
        return m_timestamp;
    }

    std::string QGMMessage::get_message() const
    {
        return m_message;
    }

    std::string QGMMessage::get_function_name() const
    {
        return m_function_name;
    }

    Severity QGMMessage::get_severity() const
    {
        return m_severity;
    }

}
