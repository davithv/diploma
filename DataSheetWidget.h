#ifndef DATASHEETWIDGET_H
#define DATASHEETWIDGET_H

#include <QTableView>
#include "DataSheetModel.h"
class DataSheetWidget : public QTableView
{
	Q_OBJECT
public:
	DataSheetWidget(QWidget *parent = 0);
	~DataSheetWidget();
	void runSort();
	void reset();
	QStringList getNamesList();

private:
	DataSheetModel *m_pDataSheetModeel;

	
};

#endif