#include "SortAreaWidget.h"
#include <QListView>
#include <QTreeView>
#include <QTextEdit>
SortAreaWidget::SortAreaWidget(QWidget *parent)
	: QSplitter(parent)
{
	setupUi();
}

SortAreaWidget::~SortAreaWidget()
{
}

void SortAreaWidget::sort()
{
	m_pDataSheetWidget->runSort();
}

void SortAreaWidget::reset()
{
	m_pDataSheetWidget->reset();
}

void SortAreaWidget::setupUi()
{
	QListView *listview = new QListView;

	m_pDataSheetWidget = new DataSheetWidget();
	m_pSortingPanelWidget = new SortingPanelWidget();
	m_pSortingPanelWidget->setNamesList(m_pDataSheetWidget->getNamesList());
	addWidget(m_pDataSheetWidget);
	addWidget(m_pSortingPanelWidget);
	
	//addWidget(gl);
	

	
	setStretchFactor(0, 4);
	setStretchFactor(1, 1);
	//setStretchFactor(2, 3);
}