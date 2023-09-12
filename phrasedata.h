#ifndef PHRASEDATA_H
#define PHRASEDATA_H

#include <QVector>
#include <QString>
#include <QFile>
#include <QTextStream>

class phraseData
{
public:
    phraseData();
    QVector<QString> mainLanguageDatabase;
    QVector<QString> secondLanguageDatabase;

    void checkSaveFile();
    void addPhrase(QString newPhrase, int languageNum);
    void openDataFile(QString filePath);
    void writeNewLineToDataFile(QString filePath, QString textData);

    QString getPhrase(int line);
    int getPhrasesCount();

};

#endif // PHRASEDATA_H






























