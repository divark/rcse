/***************************************************************************
 *   Copyright (C) 2016 by Renaud Guezennec                                *
 *   http://www.rolisteam.org/contact                                      *
 *                                                                         *
 *   rolisteam is free software; you can redistribute it and/or modify     *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef ALIGNMENTDELEGATE_H
#define ALIGNMENTDELEGATE_H

#include <QStyledItemDelegate>
#include <QWidget>

class AlignmentDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    AlignmentDelegate(QWidget* parent= nullptr);
    enum AlignmentState
    {
        TopRight,
        TopMiddle,
        TopLeft,
        CenterRight,
        CenterMiddle,
        CenterLeft,
        BottomRight,
        BottomMiddle,
        BottomLeft
    };

    QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const;
    void setEditorData(QWidget* editor, const QModelIndex& index) const;
    // void setItemEditorFactory(QItemEditorFactory * factory);
    void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const;
};

#endif // ALIGNMENTDELEGATE_H
