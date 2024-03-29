#include <chrono>
#include <string>

namespace qgmmessage
{
    enum class Severity
    {
        Debug = 0,
        Info,
        Warning,
        Error,
        Critical
    };

    inline std::string stringify_severity(const Severity& s, const bool uppercase = true)
    {   if (uppercase)
        {
            switch (s)
            {
            case Severity::Debug:
                return "DEBUG";
            case Severity::Info:
                return "INFO";
            case Severity::Warning:
                return "WARNING";
            case Severity::Error:
                return "ERROR";
            case Severity::Critical:
                return "CRITICAL";
            default:
                return "UNKNOWN";
            }
        }
        else 
        {
            switch (s)
            {
            case Severity::Debug:
                return "debug";
            case Severity::Info:
                return "info";
            case Severity::Warning:
                return "warning";
            case Severity::Error:
                return "error";
            case Severity::Critical:
                return "critical";
            default:
                return "unknown";
            }
        }
    }

    class QGMMessage
    {
    public:
        explicit QGMMessage(const std::string& message, const char* func_name, const Severity& severity);
        explicit QGMMessage(const char* message, const char* func_name, const Severity& severity);
        explicit QGMMessage(const std::string& message, const Severity& severity);
        explicit QGMMessage(const char* message, const Severity& severity);

        std::chrono::high_resolution_clock::time_point get_time_of_occurence() const;

        std::string get_message() const;

        std::string get_function_name() const;

        Severity get_severity() const;

    private:
        std::chrono::high_resolution_clock::time_point m_timestamp;
        std::string m_message;
        std::string m_function_name;
        Severity m_severity;
    };

}

