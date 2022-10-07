#include"QuanLySach.h"

int main()
{
	QuanLySach qls;
	TaiLieu* tl;
	while (true)
	{
		int c = qls.initMenu();
		switch (c)
		{
		case '1':
			tl =qls.insert();
			qls.addTL(tl->getID(), tl);
			break;
		case '2':
			qls.deletebyID();
			break;
		case '3':
			qls.displayDS();
			break;
		case '4':
			qls.searchbyCat();
			break;
		case'5':
			qls.esc();
			break;
		default:
			break;
		}
	}
	delete tl;

	return 0;
}