/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *StackedWidget;
    QWidget *WelcomePage;
    QVBoxLayout *verticalLayout_3;
    QLabel *WelcomeLabel;
    QPushButton *btnStart;
    QWidget *MainPage;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QLineEdit *lineEdit_cityName;
    QPushButton *btnSearch;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *temperatureLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLabel *weatherIconLabel;
    QLabel *descriptionLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *humidityLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QLabel *labelWindSpeed;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(923, 600);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        StackedWidget = new QStackedWidget(Widget);
        StackedWidget->setObjectName(QString::fromUtf8("StackedWidget"));
        StackedWidget->setAutoFillBackground(true);
        StackedWidget->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";"));
        WelcomePage = new QWidget();
        WelcomePage->setObjectName(QString::fromUtf8("WelcomePage"));
        WelcomePage->setAutoFillBackground(true);
        verticalLayout_3 = new QVBoxLayout(WelcomePage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        WelcomeLabel = new QLabel(WelcomePage);
        WelcomeLabel->setObjectName(QString::fromUtf8("WelcomeLabel"));
        WelcomeLabel->setMinimumSize(QSize(880, 80));
        WelcomeLabel->setMaximumSize(QSize(880, 80));
        WelcomeLabel->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(WelcomeLabel, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        btnStart = new QPushButton(WelcomePage);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setMinimumSize(QSize(400, 80));
        btnStart->setMaximumSize(QSize(400, 80));

        verticalLayout_3->addWidget(btnStart, 0, Qt::AlignHCenter|Qt::AlignTop);

        StackedWidget->addWidget(WelcomePage);
        MainPage = new QWidget();
        MainPage->setObjectName(QString::fromUtf8("MainPage"));
        MainPage->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(MainPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label_2 = new QLabel(MainPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_cityName = new QLineEdit(MainPage);
        lineEdit_cityName->setObjectName(QString::fromUtf8("lineEdit_cityName"));
        lineEdit_cityName->setMinimumSize(QSize(400, 0));
        lineEdit_cityName->setMaximumSize(QSize(400, 16777215));
        lineEdit_cityName->setFont(font);
        lineEdit_cityName->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        horizontalLayout_2->addWidget(lineEdit_cityName);

        btnSearch = new QPushButton(MainPage);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));
        btnSearch->setMinimumSize(QSize(200, 30));
        btnSearch->setMaximumSize(QSize(200, 80));
        btnSearch->setFont(font);
        btnSearch->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        horizontalLayout_2->addWidget(btnSearch);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(MainPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(400, 0));
        label->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_3->addWidget(label);

        label_4 = new QLabel(MainPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        horizontalLayout_3->addWidget(label_4);

        temperatureLabel = new QLabel(MainPage);
        temperatureLabel->setObjectName(QString::fromUtf8("temperatureLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        temperatureLabel->setFont(font1);
        temperatureLabel->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_3->addWidget(temperatureLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_3 = new QLabel(MainPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        horizontalLayout_3->addWidget(label_3);

        weatherIconLabel = new QLabel(MainPage);
        weatherIconLabel->setObjectName(QString::fromUtf8("weatherIconLabel"));
        weatherIconLabel->setMinimumSize(QSize(100, 100));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font2.setPointSize(22);
        font2.setBold(false);
        font2.setItalic(false);
        weatherIconLabel->setFont(font2);

        horizontalLayout_3->addWidget(weatherIconLabel);

        descriptionLabel = new QLabel(MainPage);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setMinimumSize(QSize(160, 0));
        descriptionLabel->setFont(font);
        descriptionLabel->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        horizontalLayout_3->addWidget(descriptionLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(MainPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(400, 0));
        label_7->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_4->addWidget(label_7);

        label_5 = new QLabel(MainPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        horizontalLayout_4->addWidget(label_5);

        humidityLabel = new QLabel(MainPage);
        humidityLabel->setObjectName(QString::fromUtf8("humidityLabel"));
        humidityLabel->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        horizontalLayout_4->addWidget(humidityLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_6 = new QLabel(MainPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        horizontalLayout_4->addWidget(label_6);

        labelWindSpeed = new QLabel(MainPage);
        labelWindSpeed->setObjectName(QString::fromUtf8("labelWindSpeed"));
        labelWindSpeed->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        horizontalLayout_4->addWidget(labelWindSpeed);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        StackedWidget->addWidget(MainPage);

        horizontalLayout->addWidget(StackedWidget);


        retranslateUi(Widget);

        StackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("Widget", "Welcome to the  Weather query System", nullptr));
        btnStart->setText(QCoreApplication::translate("Widget", "Start Querying", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Enter:", nullptr));
        lineEdit_cityName->setPlaceholderText(QCoreApplication::translate("Widget", "City or zip code", nullptr));
        btnSearch->setText(QCoreApplication::translate("Widget", "Searching", nullptr));
        label->setText(QString());
        label_4->setText(QCoreApplication::translate("Widget", "Temperature:", nullptr));
        temperatureLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("Widget", "Weather:", nullptr));
        weatherIconLabel->setText(QString());
        descriptionLabel->setText(QString());
        label_7->setText(QString());
        label_5->setText(QCoreApplication::translate("Widget", "Humidity:", nullptr));
        humidityLabel->setText(QString());
        label_6->setText(QCoreApplication::translate("Widget", "Wind speed:", nullptr));
        labelWindSpeed->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
