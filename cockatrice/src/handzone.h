#ifndef HANDZONE_H
#define HANDZONE_H

#include "cardzone.h"

class HandZone : public CardZone {
	Q_OBJECT
private:
	qreal width, zoneHeight;
	QPixmap bgPixmap;
private slots:
	void updateBgPixmap();
public slots:
	void updateOrientation();
public:
	HandZone(Player *_p, bool _contentsKnown, int _zoneHeight, QGraphicsItem *parent = 0);
	void handleDropEvent(int cardId, CardZone *startZone, const QPoint &dropPoint, bool faceDown);
	QRectF boundingRect() const;
	void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
	void reorganizeCards();
	void setWidth(qreal _width);
protected:
	void addCardImpl(CardItem *card, int x, int y);
};

#endif

