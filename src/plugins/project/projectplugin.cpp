#include "projectplugin.h"
#include "projectmanager.h"

#include <QFileInfo>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QDebug>

void ProjectPlugin::install(IApplication *app)
{
    if (!app)
        return;
    manager = new ProjectManager(app);
}

void ProjectPlugin::uninstall()
{
}

QString ProjectPlugin::name() const
{
    return tr("Project");
}

QString ProjectPlugin::info() const
{
    return tr("Project Plugin");
}

Q_EXPORT_PLUGIN(ProjectPlugin)
