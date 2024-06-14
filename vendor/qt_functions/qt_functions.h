#ifndef QT_FUNCTIONS_H
#define QT_FUNCTIONS_H

#include <iostream>
#include <QWidget>

class qt_functions
{
public:
    qt_functions();

    std::string open_file_dialog_get_text(QWidget* parent);
    std::string open_file_dialog_get_filename(QWidget* parent);
};

#endif // QT_FUNCTIONS_H
