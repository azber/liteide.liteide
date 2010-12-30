#ifndef PROJECTPLUGIN_H
#define PROJECTPLUGIN_H

#include "project_global.h"
#include "../../api/iplugin.h"
#include "../../api/iapp.h"
#include "../../api/iproject.h"
#include "projectfile.h"

#include <QObject>
#include <QtPlugin>
#include <QAction>
/*
class ProjectFile : public IProject
{
public:
    virtual QString name() const { return _name; }
    virtual QString fullPath() const { return _fullPath; }
    virtual QStringList files() const { return _files; }
public:
    QString _name;
    QString _fullPath;
    QStringList _files;
};
*/

class PROJECTSHARED_EXPORT ProjectPlugin : public QObject, public IPlugin
{
    Q_OBJECT
    Q_INTERFACES(IPlugin)
public:
    IProject *createProject(const QString &path, const QString &name);
    ProjectPlugin();
    virtual void install(IApplication *app);
    virtual void uninstall();
    virtual QString name() const;
    virtual QString info() const;
protected:
    IApplication *liteApp;

};

#endif // PROJECTPLUGIN_H