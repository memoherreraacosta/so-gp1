#include "types.h"
#include "stat.h"
#include "user.h"
#include "date.h"

int main(int argc, char ** argv){
	struct rtcdate d;
	date(&d);
	printf(1,"\n%d/%d/%d --- %d:%d:%d\n",
		d.year,d.month,d.day,
		d.hour,d.minute,d.second);
	exit();
	return 0;
}
