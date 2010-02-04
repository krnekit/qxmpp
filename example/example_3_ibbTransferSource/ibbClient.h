/*
 * Copyright (C) 2008-2009 QXmpp Developers
 *
 * Author:
 *	Ian Reinhart Geiser
 *
 * Source:
 *	http://code.google.com/p/qxmpp
 *
 * This file is a part of QXmpp library.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 */


#ifndef IBBCLIENT_H
#define IBBCLIENT_H

#include "QXmppClient.h"

class QBuffer;

class ibbClient : public QXmppClient
{
    Q_OBJECT

public:
    ibbClient(QObject *parent = 0);
    ~ibbClient();

public slots:
    void slotConnected();
    void slotByteStreamRequestReceived( const QString &sid, const QString &remoteJid );
    void slotByteStreamClosed( const QString &sid , const QString &reason );
    void slotByteStreamCanceled( const QString &sid , const QString &reason );
    void slotByteStreamOpened( const QString &sid );
private:
    QBuffer *m_buffer;

};

#endif // IBBCLIENT_H