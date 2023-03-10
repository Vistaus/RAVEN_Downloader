/* youtube-dl-qt is Free Software: You can use, study share
 * and improve it at your will. Specifically you can redistribute
 * and/or modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This source have been modified significantly to adapt with the project.
 *
 * The original author of this code : Robin de Rooij (https://github.com/rrooij)
 * The original repository of this code : https://github.com/rrooij/youtube-dl-qt 
 */

#include "mediaformat.h"

MediaFormat::MediaFormat(QObject *parent) : QObject{parent}
{
}

QString MediaFormat::getTitle() const
{
    return this->m_title;
}

void MediaFormat::setTitle(QString value)
{
    this->m_title = value;
    emit titleChanged(value);
}

QStringList MediaFormat::getVideoFormatIds() const
{
    return this->m_formatIds;
}

void MediaFormat::setVideoFormatItem(QString value)
{
    this->m_formatIds << value;
}

QStringList MediaFormat::getVideoExtensions() const
{
    return this->m_extensions;
}

void MediaFormat::setVideoExtensionItem(QString value)
{
    this->m_extensions << value;
}

QStringList MediaFormat::getResolutions() const
{
    return this->m_resolutions;
}

void MediaFormat::setResolutionItem(QString value)
{
    this->m_resolutions << value;
}

QStringList MediaFormat::getQualities() const
{
    return this->m_qualities;
}

void MediaFormat::setQualityItem(QString value)
{
    this->m_qualities << value;
}

QStringList MediaFormat::getNotes() const
{
    return this->m_notes;
}

void MediaFormat::setNoteItem(QString value)
{
    this->m_notes << value;
}

QStringList MediaFormat::getFormats() const
{
    return this->m_formats;
}

void MediaFormat::setFormatItem(QString value)
{
    this->m_formats << value;
}

QStringList MediaFormat::getAcodec() const
{
    return this->m_acodec;
}

void MediaFormat::setAcodecItem(QString value)
{
    this->m_acodec << value;
}

QStringList MediaFormat::getVcodec() const
{
    return this->m_vcodec;
}

void MediaFormat::setVcodecItem(QString value)
{
    this->m_vcodec << value;
}

QString MediaFormat::getUrl() const
{
    return this->m_videoUrl;
}

void MediaFormat::setUrl(QString value)
{
    this->m_videoUrl = value;
}

QString MediaFormat::getThumbnail() const
{
    return m_thumbnail;
}

void MediaFormat::setThumbnail(QString value)
{
    this->m_thumbnail = value;
    emit thumbnailChanged(value);
}

QList<double> MediaFormat::getFilesizes() const
{
    return this->m_filesizes;
}

void MediaFormat::setFilesizeItem(double value)
{
    this->m_filesizes << value;
}

void MediaFormat::clearClutter()
{
    this->m_title.clear();
    this->m_thumbnail.clear();
    this->m_duration.clear();
    this->m_formatIds.clear();
    this->m_formats.clear();
    this->m_extensions.clear();
    this->m_resolutions.clear();
    this->m_qualities.clear();
    this->m_notes.clear();
    this->m_acodec.clear();
    this->m_vcodec.clear();
    this->m_videoUrl.clear();
    this->m_filesizes.clear();
}

QString MediaFormat::getDuration() const
{
    return this->m_duration;
}

void MediaFormat::setDuration(QString value)
{
    this->m_duration = value;
    emit durationChanged(value);
}

QStringList MediaFormat::getAudioExt() const
{
    return m_audioExt;
}

void MediaFormat::setAudioExtItem(QString value)
{
    this->m_audioExt << value;
}

QStringList MediaFormat::getAudioFormatIds() const
{
    return m_audioFormatIds;
}

void MediaFormat::setAudioFormatItem(QString value)
{
    this->m_audioFormatIds << value;
}
