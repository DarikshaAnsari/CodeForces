#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;
    std::string displayFormat;

public:
    string replacePlaceholder(std::string str, const std::string& placeholder, const std::string& replacement) {
        size_t startPos = str.find(placeholder);
        if (startPos != std::string::npos) {
            str.replace(startPos, placeholder.length(), replacement);
        }
        return str;
    }
    Date(int day, int month, int year) {
        if (!isValidDate(day, month, year)) {
            throw std::invalid_argument("Invalid date");
        }
        this->day = day;
        this->month = month;
        this->year = year;
        this->displayFormat = "dd/mm/yyyy"; 
    }

    void setDisplayFormat(const std::string& format) {
        if (!isValidFormat(format)) {
            throw std::invalid_argument("Invalid date format provided.");
        }
        this->displayFormat = format;
    }

    friend std::ostream& operator<<(std::ostream& os, const Date& date) {
        std::string formattedDate = date.displayFormat;
        formattedDate = replacePlaceholder(formattedDate, "dd", std::to_string(date.day));
        formattedDate = replacePlaceholder(formattedDate, "mm", std::to_string(date.month));
        formattedDate = replacePlaceholder(formattedDate, "yyyy", std::to_string(date.year));
        os << formattedDate;
        return os;
    }


private:
    bool isValidDate(int day, int month, int year) {
        return true;
    }

    bool isValidFormat(const std::string& format) {
        return (format.find("dd") != std::string::npos &&
                format.find("mm") != std::string::npos &&
                format.find("yyyy") != std::string::npos);
    }
};

int main()
{
     
    return 0;
}