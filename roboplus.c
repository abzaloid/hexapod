#ifndef F_CPU
#define F_CPU 12000000UL
#endif

#include "dynamixel.h"
#include "util/delay.h"
#include "roboplus.h"
void RPReady () { 
	
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 459); 
	dxl_write_word(2, P_GOAL_POSITION_L, 575); 
	dxl_write_word(3, P_GOAL_POSITION_L, 444); 
	dxl_write_word(4, P_GOAL_POSITION_L, 590); 
	dxl_write_word(5, P_GOAL_POSITION_L, 513); 
	dxl_write_word(6, P_GOAL_POSITION_L, 512); 
	dxl_write_word(7, P_GOAL_POSITION_L, 581); 
	dxl_write_word(8, P_GOAL_POSITION_L, 414); 
	dxl_write_word(9, P_GOAL_POSITION_L, 592); 
	dxl_write_word(10, P_GOAL_POSITION_L, 422); 
	dxl_write_word(11, P_GOAL_POSITION_L, 504); 
	dxl_write_word(12, P_GOAL_POSITION_L, 457); 
	dxl_write_word(13, P_GOAL_POSITION_L, 632); 
	dxl_write_word(14, P_GOAL_POSITION_L, 369); 
	dxl_write_word(15, P_GOAL_POSITION_L, 605); 
	dxl_write_word(16, P_GOAL_POSITION_L, 411); 
	dxl_write_word(17, P_GOAL_POSITION_L, 526); 
	dxl_write_word(18, P_GOAL_POSITION_L, 441); 
	_delay_ms(504>>1);

}

void RPForwardwalk () { 
	
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 458); 
	dxl_write_word(2, P_GOAL_POSITION_L, 584); 
	dxl_write_word(3, P_GOAL_POSITION_L, 469); 
	dxl_write_word(4, P_GOAL_POSITION_L, 767); 
	dxl_write_word(5, P_GOAL_POSITION_L, 517); 
	dxl_write_word(6, P_GOAL_POSITION_L, 733); 
	dxl_write_word(7, P_GOAL_POSITION_L, 326); 
	dxl_write_word(8, P_GOAL_POSITION_L, 569); 
	dxl_write_word(9, P_GOAL_POSITION_L, 803); 
	dxl_write_word(10, P_GOAL_POSITION_L, 414); 
	dxl_write_word(11, P_GOAL_POSITION_L, 729); 
	dxl_write_word(12, P_GOAL_POSITION_L, 411); 
	dxl_write_word(13, P_GOAL_POSITION_L, 581); 
	dxl_write_word(14, P_GOAL_POSITION_L, 443); 
	dxl_write_word(15, P_GOAL_POSITION_L, 490); 
	dxl_write_word(16, P_GOAL_POSITION_L, 236); 
	dxl_write_word(17, P_GOAL_POSITION_L, 596); 
	dxl_write_word(18, P_GOAL_POSITION_L, 410); 
	_delay_ms(1032 >> 1);
	// step 2
	dxl_write_word(1, P_GOAL_POSITION_L, 429); 
	dxl_write_word(2, P_GOAL_POSITION_L, 575); 
	dxl_write_word(3, P_GOAL_POSITION_L, 521); 
	dxl_write_word(4, P_GOAL_POSITION_L, 739); 
	dxl_write_word(5, P_GOAL_POSITION_L, 431); 
	dxl_write_word(6, P_GOAL_POSITION_L, 610); 
	dxl_write_word(7, P_GOAL_POSITION_L, 489); 
	dxl_write_word(8, P_GOAL_POSITION_L, 730); 
	dxl_write_word(9, P_GOAL_POSITION_L, 801); 
	dxl_write_word(10, P_GOAL_POSITION_L, 390); 
	dxl_write_word(11, P_GOAL_POSITION_L, 741); 
	dxl_write_word(12, P_GOAL_POSITION_L, 412); 
	dxl_write_word(13, P_GOAL_POSITION_L, 585); 
	dxl_write_word(14, P_GOAL_POSITION_L, 447); 
	dxl_write_word(15, P_GOAL_POSITION_L, 617); 
	dxl_write_word(16, P_GOAL_POSITION_L, 203); 
	dxl_write_word(17, P_GOAL_POSITION_L, 551); 
	dxl_write_word(18, P_GOAL_POSITION_L, 307); 
	_delay_ms(575 >> 1);
	
	// step 3
	dxl_write_word(1, P_GOAL_POSITION_L, 440); 
	dxl_write_word(2, P_GOAL_POSITION_L, 566); 
	dxl_write_word(3, P_GOAL_POSITION_L, 257); 
	dxl_write_word(4, P_GOAL_POSITION_L, 555); 
	dxl_write_word(5, P_GOAL_POSITION_L, 291); 
	dxl_write_word(6, P_GOAL_POSITION_L, 507); 
	dxl_write_word(7, P_GOAL_POSITION_L, 455); 
	dxl_write_word(8, P_GOAL_POSITION_L, 698); 
	dxl_write_word(9, P_GOAL_POSITION_L, 602); 
	dxl_write_word(10, P_GOAL_POSITION_L, 213); 
	dxl_write_word(11, P_GOAL_POSITION_L, 613); 
	dxl_write_word(12, P_GOAL_POSITION_L, 289); 
	dxl_write_word(13, P_GOAL_POSITION_L, 581); 
	dxl_write_word(14, P_GOAL_POSITION_L, 443); 
	dxl_write_word(15, P_GOAL_POSITION_L, 788); 
	dxl_write_word(16, P_GOAL_POSITION_L, 534); 
	dxl_write_word(17, P_GOAL_POSITION_L, 614); 
	dxl_write_word(18, P_GOAL_POSITION_L, 428); 
	_delay_ms(1175 >> 1);
	
	// step 4
	dxl_write_word(1, P_GOAL_POSITION_L, 449); 
	dxl_write_word(2, P_GOAL_POSITION_L, 595); 
	dxl_write_word(3, P_GOAL_POSITION_L, 285); 
	dxl_write_word(4, P_GOAL_POSITION_L, 503); 
	dxl_write_word(5, P_GOAL_POSITION_L, 414); 
	dxl_write_word(6, P_GOAL_POSITION_L, 593); 
	dxl_write_word(7, P_GOAL_POSITION_L, 294); 
	dxl_write_word(8, P_GOAL_POSITION_L, 535); 
	dxl_write_word(9, P_GOAL_POSITION_L, 626); 
	dxl_write_word(10, P_GOAL_POSITION_L, 215); 
	dxl_write_word(11, P_GOAL_POSITION_L, 612); 
	dxl_write_word(12, P_GOAL_POSITION_L, 274); 
	dxl_write_word(13, P_GOAL_POSITION_L, 577); 
	dxl_write_word(14, P_GOAL_POSITION_L, 439); 
	dxl_write_word(15, P_GOAL_POSITION_L, 821); 
	dxl_write_word(16, P_GOAL_POSITION_L, 407); 
	dxl_write_word(17, P_GOAL_POSITION_L, 717); 
	dxl_write_word(18, P_GOAL_POSITION_L, 473); 
	_delay_ms(575 >> 1);
}

void RPFastF () { 

	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 458); 
	dxl_write_word(2, P_GOAL_POSITION_L, 584); 
	dxl_write_word(3, P_GOAL_POSITION_L, 469); 
	dxl_write_word(4, P_GOAL_POSITION_L, 767); 
	dxl_write_word(5, P_GOAL_POSITION_L, 517); 
	dxl_write_word(6, P_GOAL_POSITION_L, 733); 
	dxl_write_word(7, P_GOAL_POSITION_L, 326); 
	dxl_write_word(8, P_GOAL_POSITION_L, 569); 
	dxl_write_word(9, P_GOAL_POSITION_L, 803); 
	dxl_write_word(10, P_GOAL_POSITION_L, 414); 
	dxl_write_word(11, P_GOAL_POSITION_L, 729); 
	dxl_write_word(12, P_GOAL_POSITION_L, 411); 
	dxl_write_word(13, P_GOAL_POSITION_L, 581); 
	dxl_write_word(14, P_GOAL_POSITION_L, 443); 
	dxl_write_word(15, P_GOAL_POSITION_L, 490); 
	dxl_write_word(16, P_GOAL_POSITION_L, 236); 
	dxl_write_word(17, P_GOAL_POSITION_L, 596); 
	dxl_write_word(18, P_GOAL_POSITION_L, 410); 
	_delay_ms(1032);
	// step 2
	dxl_write_word(1, P_GOAL_POSITION_L, 429); 
	dxl_write_word(2, P_GOAL_POSITION_L, 575); 
	dxl_write_word(3, P_GOAL_POSITION_L, 521); 
	dxl_write_word(4, P_GOAL_POSITION_L, 739); 
	dxl_write_word(5, P_GOAL_POSITION_L, 431); 
	dxl_write_word(6, P_GOAL_POSITION_L, 610); 
	dxl_write_word(7, P_GOAL_POSITION_L, 489); 
	dxl_write_word(8, P_GOAL_POSITION_L, 730); 
	dxl_write_word(9, P_GOAL_POSITION_L, 801); 
	dxl_write_word(10, P_GOAL_POSITION_L, 390); 
	dxl_write_word(11, P_GOAL_POSITION_L, 741); 
	dxl_write_word(12, P_GOAL_POSITION_L, 412); 
	dxl_write_word(13, P_GOAL_POSITION_L, 585); 
	dxl_write_word(14, P_GOAL_POSITION_L, 447); 
	dxl_write_word(15, P_GOAL_POSITION_L, 617); 
	dxl_write_word(16, P_GOAL_POSITION_L, 203); 
	dxl_write_word(17, P_GOAL_POSITION_L, 551); 
	dxl_write_word(18, P_GOAL_POSITION_L, 307); 
	_delay_ms(575);
	// step 3
	dxl_write_word(1, P_GOAL_POSITION_L, 440); 
	dxl_write_word(2, P_GOAL_POSITION_L, 566); 
	dxl_write_word(3, P_GOAL_POSITION_L, 257); 
	dxl_write_word(4, P_GOAL_POSITION_L, 555); 
	dxl_write_word(5, P_GOAL_POSITION_L, 291); 
	dxl_write_word(6, P_GOAL_POSITION_L, 507); 
	dxl_write_word(7, P_GOAL_POSITION_L, 455); 
	dxl_write_word(8, P_GOAL_POSITION_L, 698); 
	dxl_write_word(9, P_GOAL_POSITION_L, 602); 
	dxl_write_word(10, P_GOAL_POSITION_L, 213); 
	dxl_write_word(11, P_GOAL_POSITION_L, 613); 
	dxl_write_word(12, P_GOAL_POSITION_L, 289); 
	dxl_write_word(13, P_GOAL_POSITION_L, 581); 
	dxl_write_word(14, P_GOAL_POSITION_L, 443); 
	dxl_write_word(15, P_GOAL_POSITION_L, 788); 
	dxl_write_word(16, P_GOAL_POSITION_L, 534); 
	dxl_write_word(17, P_GOAL_POSITION_L, 614); 
	dxl_write_word(18, P_GOAL_POSITION_L, 428); 
	_delay_ms(1175);
	// step 4
	dxl_write_word(1, P_GOAL_POSITION_L, 449); 
	dxl_write_word(2, P_GOAL_POSITION_L, 595); 
	dxl_write_word(3, P_GOAL_POSITION_L, 285); 
	dxl_write_word(4, P_GOAL_POSITION_L, 503); 
	dxl_write_word(5, P_GOAL_POSITION_L, 414); 
	dxl_write_word(6, P_GOAL_POSITION_L, 593); 
	dxl_write_word(7, P_GOAL_POSITION_L, 294); 
	dxl_write_word(8, P_GOAL_POSITION_L, 535); 
	dxl_write_word(9, P_GOAL_POSITION_L, 626); 
	dxl_write_word(10, P_GOAL_POSITION_L, 215); 
	dxl_write_word(11, P_GOAL_POSITION_L, 612); 
	dxl_write_word(12, P_GOAL_POSITION_L, 274); 
	dxl_write_word(13, P_GOAL_POSITION_L, 577); 
	dxl_write_word(14, P_GOAL_POSITION_L, 439); 
	dxl_write_word(15, P_GOAL_POSITION_L, 821); 
	dxl_write_word(16, P_GOAL_POSITION_L, 407); 
	dxl_write_word(17, P_GOAL_POSITION_L, 717); 
	dxl_write_word(18, P_GOAL_POSITION_L, 473); 
	_delay_ms(575);
}

void RPBackward () { 
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 458); 
	dxl_write_word(2, P_GOAL_POSITION_L, 584); 
	dxl_write_word(3, P_GOAL_POSITION_L, 469); 
	dxl_write_word(4, P_GOAL_POSITION_L, 767); 
	dxl_write_word(5, P_GOAL_POSITION_L, 517); 
	dxl_write_word(6, P_GOAL_POSITION_L, 733); 
	dxl_write_word(7, P_GOAL_POSITION_L, 326); 
	dxl_write_word(8, P_GOAL_POSITION_L, 569); 
	dxl_write_word(9, P_GOAL_POSITION_L, 803); 
	dxl_write_word(10, P_GOAL_POSITION_L, 414); 
	dxl_write_word(11, P_GOAL_POSITION_L, 729); 
	dxl_write_word(12, P_GOAL_POSITION_L, 411); 
	dxl_write_word(13, P_GOAL_POSITION_L, 581); 
	dxl_write_word(14, P_GOAL_POSITION_L, 443); 
	dxl_write_word(15, P_GOAL_POSITION_L, 490); 
	dxl_write_word(16, P_GOAL_POSITION_L, 236); 
	dxl_write_word(17, P_GOAL_POSITION_L, 596); 
	dxl_write_word(18, P_GOAL_POSITION_L, 410); 
	_delay_ms(1032);
	// step 2
	dxl_write_word(1, P_GOAL_POSITION_L, 449); 
	dxl_write_word(2, P_GOAL_POSITION_L, 595); 
	dxl_write_word(3, P_GOAL_POSITION_L, 285); 
	dxl_write_word(4, P_GOAL_POSITION_L, 503); 
	dxl_write_word(5, P_GOAL_POSITION_L, 414); 
	dxl_write_word(6, P_GOAL_POSITION_L, 593); 
	dxl_write_word(7, P_GOAL_POSITION_L, 294); 
	dxl_write_word(8, P_GOAL_POSITION_L, 535); 
	dxl_write_word(9, P_GOAL_POSITION_L, 626); 
	dxl_write_word(10, P_GOAL_POSITION_L, 215); 
	dxl_write_word(11, P_GOAL_POSITION_L, 612); 
	dxl_write_word(12, P_GOAL_POSITION_L, 274); 
	dxl_write_word(13, P_GOAL_POSITION_L, 577); 
	dxl_write_word(14, P_GOAL_POSITION_L, 439); 
	dxl_write_word(15, P_GOAL_POSITION_L, 821); 
	dxl_write_word(16, P_GOAL_POSITION_L, 407); 
	dxl_write_word(17, P_GOAL_POSITION_L, 717); 
	dxl_write_word(18, P_GOAL_POSITION_L, 473); 
	_delay_ms(1175);
	// step 3
	dxl_write_word(1, P_GOAL_POSITION_L, 440); 
	dxl_write_word(2, P_GOAL_POSITION_L, 566); 
	dxl_write_word(3, P_GOAL_POSITION_L, 257); 
	dxl_write_word(4, P_GOAL_POSITION_L, 555); 
	dxl_write_word(5, P_GOAL_POSITION_L, 291); 
	dxl_write_word(6, P_GOAL_POSITION_L, 507); 
	dxl_write_word(7, P_GOAL_POSITION_L, 455); 
	dxl_write_word(8, P_GOAL_POSITION_L, 698); 
	dxl_write_word(9, P_GOAL_POSITION_L, 602); 
	dxl_write_word(10, P_GOAL_POSITION_L, 213); 
	dxl_write_word(11, P_GOAL_POSITION_L, 613); 
	dxl_write_word(12, P_GOAL_POSITION_L, 289); 
	dxl_write_word(13, P_GOAL_POSITION_L, 581); 
	dxl_write_word(14, P_GOAL_POSITION_L, 443); 
	dxl_write_word(15, P_GOAL_POSITION_L, 788); 
	dxl_write_word(16, P_GOAL_POSITION_L, 534); 
	dxl_write_word(17, P_GOAL_POSITION_L, 614); 
	dxl_write_word(18, P_GOAL_POSITION_L, 428); 
	_delay_ms(575);
	// step 4
	dxl_write_word(1, P_GOAL_POSITION_L, 429); 
	dxl_write_word(2, P_GOAL_POSITION_L, 575); 
	dxl_write_word(3, P_GOAL_POSITION_L, 521); 
	dxl_write_word(4, P_GOAL_POSITION_L, 739); 
	dxl_write_word(5, P_GOAL_POSITION_L, 431); 
	dxl_write_word(6, P_GOAL_POSITION_L, 610); 
	dxl_write_word(7, P_GOAL_POSITION_L, 489); 
	dxl_write_word(8, P_GOAL_POSITION_L, 730); 
	dxl_write_word(9, P_GOAL_POSITION_L, 801); 
	dxl_write_word(10, P_GOAL_POSITION_L, 390); 
	dxl_write_word(11, P_GOAL_POSITION_L, 741); 
	dxl_write_word(12, P_GOAL_POSITION_L, 412); 
	dxl_write_word(13, P_GOAL_POSITION_L, 585); 
	dxl_write_word(14, P_GOAL_POSITION_L, 447); 
	dxl_write_word(15, P_GOAL_POSITION_L, 617); 
	dxl_write_word(16, P_GOAL_POSITION_L, 203); 
	dxl_write_word(17, P_GOAL_POSITION_L, 551); 
	dxl_write_word(18, P_GOAL_POSITION_L, 307); 
	_delay_ms(1175);
}

void RPFastB () { 
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 458); 
	dxl_write_word(2, P_GOAL_POSITION_L, 584); 
	dxl_write_word(3, P_GOAL_POSITION_L, 469); 
	dxl_write_word(4, P_GOAL_POSITION_L, 767); 
	dxl_write_word(5, P_GOAL_POSITION_L, 517); 
	dxl_write_word(6, P_GOAL_POSITION_L, 733); 
	dxl_write_word(7, P_GOAL_POSITION_L, 326); 
	dxl_write_word(8, P_GOAL_POSITION_L, 569); 
	dxl_write_word(9, P_GOAL_POSITION_L, 803); 
	dxl_write_word(10, P_GOAL_POSITION_L, 414); 
	dxl_write_word(11, P_GOAL_POSITION_L, 729); 
	dxl_write_word(12, P_GOAL_POSITION_L, 411); 
	dxl_write_word(13, P_GOAL_POSITION_L, 581); 
	dxl_write_word(14, P_GOAL_POSITION_L, 443); 
	dxl_write_word(15, P_GOAL_POSITION_L, 490); 
	dxl_write_word(16, P_GOAL_POSITION_L, 236); 
	dxl_write_word(17, P_GOAL_POSITION_L, 596); 
	dxl_write_word(18, P_GOAL_POSITION_L, 410); 
	_delay_ms(1032);
	// step 2
	dxl_write_word(1, P_GOAL_POSITION_L, 449); 
	dxl_write_word(2, P_GOAL_POSITION_L, 595); 
	dxl_write_word(3, P_GOAL_POSITION_L, 285); 
	dxl_write_word(4, P_GOAL_POSITION_L, 503); 
	dxl_write_word(5, P_GOAL_POSITION_L, 414); 
	dxl_write_word(6, P_GOAL_POSITION_L, 593); 
	dxl_write_word(7, P_GOAL_POSITION_L, 294); 
	dxl_write_word(8, P_GOAL_POSITION_L, 535); 
	dxl_write_word(9, P_GOAL_POSITION_L, 626); 
	dxl_write_word(10, P_GOAL_POSITION_L, 215); 
	dxl_write_word(11, P_GOAL_POSITION_L, 612); 
	dxl_write_word(12, P_GOAL_POSITION_L, 274); 
	dxl_write_word(13, P_GOAL_POSITION_L, 577); 
	dxl_write_word(14, P_GOAL_POSITION_L, 439); 
	dxl_write_word(15, P_GOAL_POSITION_L, 821); 
	dxl_write_word(16, P_GOAL_POSITION_L, 407); 
	dxl_write_word(17, P_GOAL_POSITION_L, 717); 
	dxl_write_word(18, P_GOAL_POSITION_L, 473); 
	_delay_ms(1175);
	// step 3
	dxl_write_word(1, P_GOAL_POSITION_L, 440); 
	dxl_write_word(2, P_GOAL_POSITION_L, 566); 
	dxl_write_word(3, P_GOAL_POSITION_L, 257); 
	dxl_write_word(4, P_GOAL_POSITION_L, 555); 
	dxl_write_word(5, P_GOAL_POSITION_L, 291); 
	dxl_write_word(6, P_GOAL_POSITION_L, 507); 
	dxl_write_word(7, P_GOAL_POSITION_L, 455); 
	dxl_write_word(8, P_GOAL_POSITION_L, 698); 
	dxl_write_word(9, P_GOAL_POSITION_L, 602); 
	dxl_write_word(10, P_GOAL_POSITION_L, 213); 
	dxl_write_word(11, P_GOAL_POSITION_L, 613); 
	dxl_write_word(12, P_GOAL_POSITION_L, 289); 
	dxl_write_word(13, P_GOAL_POSITION_L, 581); 
	dxl_write_word(14, P_GOAL_POSITION_L, 443); 
	dxl_write_word(15, P_GOAL_POSITION_L, 788); 
	dxl_write_word(16, P_GOAL_POSITION_L, 534); 
	dxl_write_word(17, P_GOAL_POSITION_L, 614); 
	dxl_write_word(18, P_GOAL_POSITION_L, 428); 
	_delay_ms(575);
	// step 4
	dxl_write_word(1, P_GOAL_POSITION_L, 429); 
	dxl_write_word(2, P_GOAL_POSITION_L, 575); 
	dxl_write_word(3, P_GOAL_POSITION_L, 521); 
	dxl_write_word(4, P_GOAL_POSITION_L, 739); 
	dxl_write_word(5, P_GOAL_POSITION_L, 431); 
	dxl_write_word(6, P_GOAL_POSITION_L, 610); 
	dxl_write_word(7, P_GOAL_POSITION_L, 489); 
	dxl_write_word(8, P_GOAL_POSITION_L, 730); 
	dxl_write_word(9, P_GOAL_POSITION_L, 801); 
	dxl_write_word(10, P_GOAL_POSITION_L, 390); 
	dxl_write_word(11, P_GOAL_POSITION_L, 741); 
	dxl_write_word(12, P_GOAL_POSITION_L, 412); 
	dxl_write_word(13, P_GOAL_POSITION_L, 585); 
	dxl_write_word(14, P_GOAL_POSITION_L, 447); 
	dxl_write_word(15, P_GOAL_POSITION_L, 617); 
	dxl_write_word(16, P_GOAL_POSITION_L, 203); 
	dxl_write_word(17, P_GOAL_POSITION_L, 551); 
	dxl_write_word(18, P_GOAL_POSITION_L, 307); 
	_delay_ms(1175);
}

void RPTurnRight () { 
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 372); 
	dxl_write_word(2, P_GOAL_POSITION_L, 610); 
	dxl_write_word(3, P_GOAL_POSITION_L, 267); 
	dxl_write_word(4, P_GOAL_POSITION_L, 512); 
	dxl_write_word(5, P_GOAL_POSITION_L, 268); 
	dxl_write_word(6, P_GOAL_POSITION_L, 512); 
	dxl_write_word(7, P_GOAL_POSITION_L, 512); 
	dxl_write_word(8, P_GOAL_POSITION_L, 509); 
	dxl_write_word(9, P_GOAL_POSITION_L, 536); 
	dxl_write_word(10, P_GOAL_POSITION_L, 256); 
	dxl_write_word(11, P_GOAL_POSITION_L, 510); 
	dxl_write_word(12, P_GOAL_POSITION_L, 291); 
	dxl_write_word(13, P_GOAL_POSITION_L, 650); 
	dxl_write_word(14, P_GOAL_POSITION_L, 364); 
	dxl_write_word(15, P_GOAL_POSITION_L, 739); 
	dxl_write_word(16, P_GOAL_POSITION_L, 513); 
	dxl_write_word(17, P_GOAL_POSITION_L, 735); 
	dxl_write_word(18, P_GOAL_POSITION_L, 523); 
	_delay_ms(904);
	// step 2
	dxl_write_word(1, P_GOAL_POSITION_L, 372); 
	dxl_write_word(2, P_GOAL_POSITION_L, 734); 
	dxl_write_word(3, P_GOAL_POSITION_L, 267); 
	dxl_write_word(4, P_GOAL_POSITION_L, 512); 
	dxl_write_word(5, P_GOAL_POSITION_L, 268); 
	dxl_write_word(6, P_GOAL_POSITION_L, 512); 
	dxl_write_word(7, P_GOAL_POSITION_L, 611); 
	dxl_write_word(8, P_GOAL_POSITION_L, 509); 
	dxl_write_word(9, P_GOAL_POSITION_L, 536); 
	dxl_write_word(10, P_GOAL_POSITION_L, 256); 
	dxl_write_word(11, P_GOAL_POSITION_L, 510); 
	dxl_write_word(12, P_GOAL_POSITION_L, 291); 
	dxl_write_word(13, P_GOAL_POSITION_L, 650); 
	dxl_write_word(14, P_GOAL_POSITION_L, 405); 
	dxl_write_word(15, P_GOAL_POSITION_L, 739); 
	dxl_write_word(16, P_GOAL_POSITION_L, 513); 
	dxl_write_word(17, P_GOAL_POSITION_L, 735); 
	dxl_write_word(18, P_GOAL_POSITION_L, 523); 
	_delay_ms(440);
	// step 3
	dxl_write_word(1, P_GOAL_POSITION_L, 372); 
	dxl_write_word(2, P_GOAL_POSITION_L, 734); 
	dxl_write_word(3, P_GOAL_POSITION_L, 494); 
	dxl_write_word(4, P_GOAL_POSITION_L, 750); 
	dxl_write_word(5, P_GOAL_POSITION_L, 495); 
	dxl_write_word(6, P_GOAL_POSITION_L, 733); 
	dxl_write_word(7, P_GOAL_POSITION_L, 611); 
	dxl_write_word(8, P_GOAL_POSITION_L, 509); 
	dxl_write_word(9, P_GOAL_POSITION_L, 764); 
	dxl_write_word(10, P_GOAL_POSITION_L, 495); 
	dxl_write_word(11, P_GOAL_POSITION_L, 763); 
	dxl_write_word(12, P_GOAL_POSITION_L, 483); 
	dxl_write_word(13, P_GOAL_POSITION_L, 650); 
	dxl_write_word(14, P_GOAL_POSITION_L, 405); 
	dxl_write_word(15, P_GOAL_POSITION_L, 517); 
	dxl_write_word(16, P_GOAL_POSITION_L, 253); 
	dxl_write_word(17, P_GOAL_POSITION_L, 522); 
	dxl_write_word(18, P_GOAL_POSITION_L, 259); 
	_delay_ms(936);
	// step 4
	dxl_write_word(1, P_GOAL_POSITION_L, 372); 
	dxl_write_word(2, P_GOAL_POSITION_L, 655); 
	dxl_write_word(3, P_GOAL_POSITION_L, 494); 
	dxl_write_word(4, P_GOAL_POSITION_L, 750); 
	dxl_write_word(5, P_GOAL_POSITION_L, 495); 
	dxl_write_word(6, P_GOAL_POSITION_L, 733); 
	dxl_write_word(7, P_GOAL_POSITION_L, 519); 
	dxl_write_word(8, P_GOAL_POSITION_L, 509); 
	dxl_write_word(9, P_GOAL_POSITION_L, 764); 
	dxl_write_word(10, P_GOAL_POSITION_L, 495); 
	dxl_write_word(11, P_GOAL_POSITION_L, 763); 
	dxl_write_word(12, P_GOAL_POSITION_L, 483); 
	dxl_write_word(13, P_GOAL_POSITION_L, 650); 
	dxl_write_word(14, P_GOAL_POSITION_L, 329); 
	dxl_write_word(15, P_GOAL_POSITION_L, 517); 
	dxl_write_word(16, P_GOAL_POSITION_L, 253); 
	dxl_write_word(17, P_GOAL_POSITION_L, 522); 
	dxl_write_word(18, P_GOAL_POSITION_L, 259); 
	_delay_ms(320);
}

void RPFastR () { 
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 372); 
	dxl_write_word(2, P_GOAL_POSITION_L, 610); 
	dxl_write_word(3, P_GOAL_POSITION_L, 267); 
	dxl_write_word(4, P_GOAL_POSITION_L, 512); 
	dxl_write_word(5, P_GOAL_POSITION_L, 268); 
	dxl_write_word(6, P_GOAL_POSITION_L, 512); 
	dxl_write_word(7, P_GOAL_POSITION_L, 512); 
	dxl_write_word(8, P_GOAL_POSITION_L, 509); 
	dxl_write_word(9, P_GOAL_POSITION_L, 536); 
	dxl_write_word(10, P_GOAL_POSITION_L, 256); 
	dxl_write_word(11, P_GOAL_POSITION_L, 510); 
	dxl_write_word(12, P_GOAL_POSITION_L, 291); 
	dxl_write_word(13, P_GOAL_POSITION_L, 650); 
	dxl_write_word(14, P_GOAL_POSITION_L, 364); 
	dxl_write_word(15, P_GOAL_POSITION_L, 739); 
	dxl_write_word(16, P_GOAL_POSITION_L, 513); 
	dxl_write_word(17, P_GOAL_POSITION_L, 735); 
	dxl_write_word(18, P_GOAL_POSITION_L, 523); 
	_delay_ms(904);
	// step 2
	dxl_write_word(1, P_GOAL_POSITION_L, 372); 
	dxl_write_word(2, P_GOAL_POSITION_L, 734); 
	dxl_write_word(3, P_GOAL_POSITION_L, 267); 
	dxl_write_word(4, P_GOAL_POSITION_L, 512); 
	dxl_write_word(5, P_GOAL_POSITION_L, 268); 
	dxl_write_word(6, P_GOAL_POSITION_L, 512); 
	dxl_write_word(7, P_GOAL_POSITION_L, 611); 
	dxl_write_word(8, P_GOAL_POSITION_L, 509); 
	dxl_write_word(9, P_GOAL_POSITION_L, 536); 
	dxl_write_word(10, P_GOAL_POSITION_L, 256); 
	dxl_write_word(11, P_GOAL_POSITION_L, 510); 
	dxl_write_word(12, P_GOAL_POSITION_L, 291); 
	dxl_write_word(13, P_GOAL_POSITION_L, 650); 
	dxl_write_word(14, P_GOAL_POSITION_L, 405); 
	dxl_write_word(15, P_GOAL_POSITION_L, 739); 
	dxl_write_word(16, P_GOAL_POSITION_L, 513); 
	dxl_write_word(17, P_GOAL_POSITION_L, 735); 
	dxl_write_word(18, P_GOAL_POSITION_L, 523); 
	_delay_ms(440);
	// step 3
	dxl_write_word(1, P_GOAL_POSITION_L, 372); 
	dxl_write_word(2, P_GOAL_POSITION_L, 734); 
	dxl_write_word(3, P_GOAL_POSITION_L, 494); 
	dxl_write_word(4, P_GOAL_POSITION_L, 750); 
	dxl_write_word(5, P_GOAL_POSITION_L, 495); 
	dxl_write_word(6, P_GOAL_POSITION_L, 733); 
	dxl_write_word(7, P_GOAL_POSITION_L, 611); 
	dxl_write_word(8, P_GOAL_POSITION_L, 509); 
	dxl_write_word(9, P_GOAL_POSITION_L, 764); 
	dxl_write_word(10, P_GOAL_POSITION_L, 495); 
	dxl_write_word(11, P_GOAL_POSITION_L, 763); 
	dxl_write_word(12, P_GOAL_POSITION_L, 483); 
	dxl_write_word(13, P_GOAL_POSITION_L, 650); 
	dxl_write_word(14, P_GOAL_POSITION_L, 405); 
	dxl_write_word(15, P_GOAL_POSITION_L, 517); 
	dxl_write_word(16, P_GOAL_POSITION_L, 253); 
	dxl_write_word(17, P_GOAL_POSITION_L, 522); 
	dxl_write_word(18, P_GOAL_POSITION_L, 259); 
	_delay_ms(936);
	// step 4
	dxl_write_word(1, P_GOAL_POSITION_L, 372); 
	dxl_write_word(2, P_GOAL_POSITION_L, 655); 
	dxl_write_word(3, P_GOAL_POSITION_L, 494); 
	dxl_write_word(4, P_GOAL_POSITION_L, 750); 
	dxl_write_word(5, P_GOAL_POSITION_L, 495); 
	dxl_write_word(6, P_GOAL_POSITION_L, 733); 
	dxl_write_word(7, P_GOAL_POSITION_L, 519); 
	dxl_write_word(8, P_GOAL_POSITION_L, 509); 
	dxl_write_word(9, P_GOAL_POSITION_L, 764); 
	dxl_write_word(10, P_GOAL_POSITION_L, 495); 
	dxl_write_word(11, P_GOAL_POSITION_L, 763); 
	dxl_write_word(12, P_GOAL_POSITION_L, 483); 
	dxl_write_word(13, P_GOAL_POSITION_L, 650); 
	dxl_write_word(14, P_GOAL_POSITION_L, 329); 
	dxl_write_word(15, P_GOAL_POSITION_L, 517); 
	dxl_write_word(16, P_GOAL_POSITION_L, 253); 
	dxl_write_word(17, P_GOAL_POSITION_L, 522); 
	dxl_write_word(18, P_GOAL_POSITION_L, 259); 
	_delay_ms(320);
}

void RPTurnLeft () { 
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 414); 
	dxl_write_word(2, P_GOAL_POSITION_L, 652); 
	dxl_write_word(3, P_GOAL_POSITION_L, 512); 
	dxl_write_word(4, P_GOAL_POSITION_L, 757); 
	dxl_write_word(5, P_GOAL_POSITION_L, 512); 
	dxl_write_word(6, P_GOAL_POSITION_L, 756); 
	dxl_write_word(7, P_GOAL_POSITION_L, 515); 
	dxl_write_word(8, P_GOAL_POSITION_L, 512); 
	dxl_write_word(9, P_GOAL_POSITION_L, 760); 
	dxl_write_word(10, P_GOAL_POSITION_L, 480); 
	dxl_write_word(11, P_GOAL_POSITION_L, 733); 
	dxl_write_word(12, P_GOAL_POSITION_L, 514); 
	dxl_write_word(13, P_GOAL_POSITION_L, 660); 
	dxl_write_word(14, P_GOAL_POSITION_L, 374); 
	dxl_write_word(15, P_GOAL_POSITION_L, 511); 
	dxl_write_word(16, P_GOAL_POSITION_L, 285); 
	dxl_write_word(17, P_GOAL_POSITION_L, 501); 
	dxl_write_word(18, P_GOAL_POSITION_L, 289); 
	_delay_ms(880);
	// step 2
	dxl_write_word(1, P_GOAL_POSITION_L, 290); 
	dxl_write_word(2, P_GOAL_POSITION_L, 652); 
	dxl_write_word(3, P_GOAL_POSITION_L, 512); 
	dxl_write_word(4, P_GOAL_POSITION_L, 757); 
	dxl_write_word(5, P_GOAL_POSITION_L, 512); 
	dxl_write_word(6, P_GOAL_POSITION_L, 756); 
	dxl_write_word(7, P_GOAL_POSITION_L, 515); 
	dxl_write_word(8, P_GOAL_POSITION_L, 413); 
	dxl_write_word(9, P_GOAL_POSITION_L, 760); 
	dxl_write_word(10, P_GOAL_POSITION_L, 480); 
	dxl_write_word(11, P_GOAL_POSITION_L, 733); 
	dxl_write_word(12, P_GOAL_POSITION_L, 514); 
	dxl_write_word(13, P_GOAL_POSITION_L, 619); 
	dxl_write_word(14, P_GOAL_POSITION_L, 374); 
	dxl_write_word(15, P_GOAL_POSITION_L, 511); 
	dxl_write_word(16, P_GOAL_POSITION_L, 285); 
	dxl_write_word(17, P_GOAL_POSITION_L, 501); 
	dxl_write_word(18, P_GOAL_POSITION_L, 289); 
	_delay_ms(440);
	// step 3
	dxl_write_word(1, P_GOAL_POSITION_L, 290); 
	dxl_write_word(2, P_GOAL_POSITION_L, 652); 
	dxl_write_word(3, P_GOAL_POSITION_L, 274); 
	dxl_write_word(4, P_GOAL_POSITION_L, 530); 
	dxl_write_word(5, P_GOAL_POSITION_L, 291); 
	dxl_write_word(6, P_GOAL_POSITION_L, 529); 
	dxl_write_word(7, P_GOAL_POSITION_L, 515); 
	dxl_write_word(8, P_GOAL_POSITION_L, 413); 
	dxl_write_word(9, P_GOAL_POSITION_L, 521); 
	dxl_write_word(10, P_GOAL_POSITION_L, 252); 
	dxl_write_word(11, P_GOAL_POSITION_L, 541); 
	dxl_write_word(12, P_GOAL_POSITION_L, 261); 
	dxl_write_word(13, P_GOAL_POSITION_L, 619); 
	dxl_write_word(14, P_GOAL_POSITION_L, 374); 
	dxl_write_word(15, P_GOAL_POSITION_L, 771); 
	dxl_write_word(16, P_GOAL_POSITION_L, 507); 
	dxl_write_word(17, P_GOAL_POSITION_L, 765); 
	dxl_write_word(18, P_GOAL_POSITION_L, 502); 
	_delay_ms(936);
	// step 4
	dxl_write_word(1, P_GOAL_POSITION_L, 369); 
	dxl_write_word(2, P_GOAL_POSITION_L, 652); 
	dxl_write_word(3, P_GOAL_POSITION_L, 274); 
	dxl_write_word(4, P_GOAL_POSITION_L, 530); 
	dxl_write_word(5, P_GOAL_POSITION_L, 291); 
	dxl_write_word(6, P_GOAL_POSITION_L, 529); 
	dxl_write_word(7, P_GOAL_POSITION_L, 515); 
	dxl_write_word(8, P_GOAL_POSITION_L, 505); 
	dxl_write_word(9, P_GOAL_POSITION_L, 521); 
	dxl_write_word(10, P_GOAL_POSITION_L, 252); 
	dxl_write_word(11, P_GOAL_POSITION_L, 541); 
	dxl_write_word(12, P_GOAL_POSITION_L, 261); 
	dxl_write_word(13, P_GOAL_POSITION_L, 695); 
	dxl_write_word(14, P_GOAL_POSITION_L, 374); 
	dxl_write_word(15, P_GOAL_POSITION_L, 771); 
	dxl_write_word(16, P_GOAL_POSITION_L, 507); 
	dxl_write_word(17, P_GOAL_POSITION_L, 765); 
	dxl_write_word(18, P_GOAL_POSITION_L, 502); 
	_delay_ms(320);
}

void RPFastL () { 
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 414); 
	dxl_write_word(2, P_GOAL_POSITION_L, 652); 
	dxl_write_word(3, P_GOAL_POSITION_L, 512); 
	dxl_write_word(4, P_GOAL_POSITION_L, 757); 
	dxl_write_word(5, P_GOAL_POSITION_L, 512); 
	dxl_write_word(6, P_GOAL_POSITION_L, 756); 
	dxl_write_word(7, P_GOAL_POSITION_L, 515); 
	dxl_write_word(8, P_GOAL_POSITION_L, 512); 
	dxl_write_word(9, P_GOAL_POSITION_L, 760); 
	dxl_write_word(10, P_GOAL_POSITION_L, 480); 
	dxl_write_word(11, P_GOAL_POSITION_L, 733); 
	dxl_write_word(12, P_GOAL_POSITION_L, 514); 
	dxl_write_word(13, P_GOAL_POSITION_L, 660); 
	dxl_write_word(14, P_GOAL_POSITION_L, 374); 
	dxl_write_word(15, P_GOAL_POSITION_L, 511); 
	dxl_write_word(16, P_GOAL_POSITION_L, 285); 
	dxl_write_word(17, P_GOAL_POSITION_L, 501); 
	dxl_write_word(18, P_GOAL_POSITION_L, 289); 
	_delay_ms(880);
	// step 2
	dxl_write_word(1, P_GOAL_POSITION_L, 290); 
	dxl_write_word(2, P_GOAL_POSITION_L, 652); 
	dxl_write_word(3, P_GOAL_POSITION_L, 512); 
	dxl_write_word(4, P_GOAL_POSITION_L, 757); 
	dxl_write_word(5, P_GOAL_POSITION_L, 512); 
	dxl_write_word(6, P_GOAL_POSITION_L, 756); 
	dxl_write_word(7, P_GOAL_POSITION_L, 515); 
	dxl_write_word(8, P_GOAL_POSITION_L, 413); 
	dxl_write_word(9, P_GOAL_POSITION_L, 760); 
	dxl_write_word(10, P_GOAL_POSITION_L, 480); 
	dxl_write_word(11, P_GOAL_POSITION_L, 733); 
	dxl_write_word(12, P_GOAL_POSITION_L, 514); 
	dxl_write_word(13, P_GOAL_POSITION_L, 619); 
	dxl_write_word(14, P_GOAL_POSITION_L, 374); 
	dxl_write_word(15, P_GOAL_POSITION_L, 511); 
	dxl_write_word(16, P_GOAL_POSITION_L, 285); 
	dxl_write_word(17, P_GOAL_POSITION_L, 501); 
	dxl_write_word(18, P_GOAL_POSITION_L, 289); 
	_delay_ms(440);
	// step 3
	dxl_write_word(1, P_GOAL_POSITION_L, 290); 
	dxl_write_word(2, P_GOAL_POSITION_L, 652); 
	dxl_write_word(3, P_GOAL_POSITION_L, 274); 
	dxl_write_word(4, P_GOAL_POSITION_L, 530); 
	dxl_write_word(5, P_GOAL_POSITION_L, 291); 
	dxl_write_word(6, P_GOAL_POSITION_L, 529); 
	dxl_write_word(7, P_GOAL_POSITION_L, 515); 
	dxl_write_word(8, P_GOAL_POSITION_L, 413); 
	dxl_write_word(9, P_GOAL_POSITION_L, 521); 
	dxl_write_word(10, P_GOAL_POSITION_L, 252); 
	dxl_write_word(11, P_GOAL_POSITION_L, 541); 
	dxl_write_word(12, P_GOAL_POSITION_L, 261); 
	dxl_write_word(13, P_GOAL_POSITION_L, 619); 
	dxl_write_word(14, P_GOAL_POSITION_L, 374); 
	dxl_write_word(15, P_GOAL_POSITION_L, 771); 
	dxl_write_word(16, P_GOAL_POSITION_L, 507); 
	dxl_write_word(17, P_GOAL_POSITION_L, 765); 
	dxl_write_word(18, P_GOAL_POSITION_L, 502); 
	_delay_ms(936);
	// step 4
	dxl_write_word(1, P_GOAL_POSITION_L, 369); 
	dxl_write_word(2, P_GOAL_POSITION_L, 652); 
	dxl_write_word(3, P_GOAL_POSITION_L, 274); 
	dxl_write_word(4, P_GOAL_POSITION_L, 530); 
	dxl_write_word(5, P_GOAL_POSITION_L, 291); 
	dxl_write_word(6, P_GOAL_POSITION_L, 529); 
	dxl_write_word(7, P_GOAL_POSITION_L, 515); 
	dxl_write_word(8, P_GOAL_POSITION_L, 505); 
	dxl_write_word(9, P_GOAL_POSITION_L, 521); 
	dxl_write_word(10, P_GOAL_POSITION_L, 252); 
	dxl_write_word(11, P_GOAL_POSITION_L, 541); 
	dxl_write_word(12, P_GOAL_POSITION_L, 261); 
	dxl_write_word(13, P_GOAL_POSITION_L, 695); 
	dxl_write_word(14, P_GOAL_POSITION_L, 374); 
	dxl_write_word(15, P_GOAL_POSITION_L, 771); 
	dxl_write_word(16, P_GOAL_POSITION_L, 507); 
	dxl_write_word(17, P_GOAL_POSITION_L, 765); 
	dxl_write_word(18, P_GOAL_POSITION_L, 502); 
	_delay_ms(320);
}

void RPSit () { 
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 381); 
	dxl_write_word(2, P_GOAL_POSITION_L, 648); 
	dxl_write_word(3, P_GOAL_POSITION_L, 227); 
	dxl_write_word(4, P_GOAL_POSITION_L, 826); 
	dxl_write_word(5, P_GOAL_POSITION_L, 283); 
	dxl_write_word(6, P_GOAL_POSITION_L, 742); 
	dxl_write_word(7, P_GOAL_POSITION_L, 523); 
	dxl_write_word(8, P_GOAL_POSITION_L, 498); 
	dxl_write_word(9, P_GOAL_POSITION_L, 818); 
	dxl_write_word(10, P_GOAL_POSITION_L, 211); 
	dxl_write_word(11, P_GOAL_POSITION_L, 786); 
	dxl_write_word(12, P_GOAL_POSITION_L, 269); 
	dxl_write_word(13, P_GOAL_POSITION_L, 656); 
	dxl_write_word(14, P_GOAL_POSITION_L, 349); 
	dxl_write_word(15, P_GOAL_POSITION_L, 779); 
	dxl_write_word(16, P_GOAL_POSITION_L, 250); 
	dxl_write_word(17, P_GOAL_POSITION_L, 725); 
	dxl_write_word(18, P_GOAL_POSITION_L, 293); 
	_delay_ms(80);
}

void RPFear () { 
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 502); 
	dxl_write_word(2, P_GOAL_POSITION_L, 510); 
	dxl_write_word(3, P_GOAL_POSITION_L, 227); 
	dxl_write_word(4, P_GOAL_POSITION_L, 826); 
	dxl_write_word(5, P_GOAL_POSITION_L, 282); 
	dxl_write_word(6, P_GOAL_POSITION_L, 742); 
	dxl_write_word(7, P_GOAL_POSITION_L, 523); 
	dxl_write_word(8, P_GOAL_POSITION_L, 498); 
	dxl_write_word(9, P_GOAL_POSITION_L, 817); 
	dxl_write_word(10, P_GOAL_POSITION_L, 211); 
	dxl_write_word(11, P_GOAL_POSITION_L, 786); 
	dxl_write_word(12, P_GOAL_POSITION_L, 268); 
	dxl_write_word(13, P_GOAL_POSITION_L, 513); 
	dxl_write_word(14, P_GOAL_POSITION_L, 522); 
	dxl_write_word(15, P_GOAL_POSITION_L, 778); 
	dxl_write_word(16, P_GOAL_POSITION_L, 250); 
	dxl_write_word(17, P_GOAL_POSITION_L, 725); 
	dxl_write_word(18, P_GOAL_POSITION_L, 292); 
	_delay_ms(664);
	// step 2
	dxl_write_word(1, P_GOAL_POSITION_L, 502); 
	dxl_write_word(2, P_GOAL_POSITION_L, 510); 
	dxl_write_word(3, P_GOAL_POSITION_L, 238); 
	dxl_write_word(4, P_GOAL_POSITION_L, 816); 
	dxl_write_word(5, P_GOAL_POSITION_L, 305); 
	dxl_write_word(6, P_GOAL_POSITION_L, 722); 
	dxl_write_word(7, P_GOAL_POSITION_L, 523); 
	dxl_write_word(8, P_GOAL_POSITION_L, 498); 
	dxl_write_word(9, P_GOAL_POSITION_L, 814); 
	dxl_write_word(10, P_GOAL_POSITION_L, 207); 
	dxl_write_word(11, P_GOAL_POSITION_L, 769); 
	dxl_write_word(12, P_GOAL_POSITION_L, 286); 
	dxl_write_word(13, P_GOAL_POSITION_L, 513); 
	dxl_write_word(14, P_GOAL_POSITION_L, 522); 
	dxl_write_word(15, P_GOAL_POSITION_L, 763); 
	dxl_write_word(16, P_GOAL_POSITION_L, 242); 
	dxl_write_word(17, P_GOAL_POSITION_L, 703); 
	dxl_write_word(18, P_GOAL_POSITION_L, 308); 
	_delay_ms(48);
}

void RPAttackReady () { 
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 458); 
	dxl_write_word(2, P_GOAL_POSITION_L, 579); 
	dxl_write_word(3, P_GOAL_POSITION_L, 288); 
	dxl_write_word(4, P_GOAL_POSITION_L, 788); 
	dxl_write_word(5, P_GOAL_POSITION_L, 480); 
	dxl_write_word(6, P_GOAL_POSITION_L, 566); 
	dxl_write_word(7, P_GOAL_POSITION_L, 772); 
	dxl_write_word(8, P_GOAL_POSITION_L, 240); 
	dxl_write_word(9, P_GOAL_POSITION_L, 554); 
	dxl_write_word(10, P_GOAL_POSITION_L, 481); 
	dxl_write_word(11, P_GOAL_POSITION_L, 603); 
	dxl_write_word(12, P_GOAL_POSITION_L, 449); 
	dxl_write_word(13, P_GOAL_POSITION_L, 581); 
	dxl_write_word(14, P_GOAL_POSITION_L, 423); 
	dxl_write_word(15, P_GOAL_POSITION_L, 815); 
	dxl_write_word(16, P_GOAL_POSITION_L, 245); 
	dxl_write_word(17, P_GOAL_POSITION_L, 589); 
	dxl_write_word(18, P_GOAL_POSITION_L, 475); 
	_delay_ms(1072);
}

void RPAttackFront () { 
	// step 1
	dxl_write_word(1, P_GOAL_POSITION_L, 476); 
	dxl_write_word(2, P_GOAL_POSITION_L, 547); 
	dxl_write_word(3, P_GOAL_POSITION_L, 241); 
	dxl_write_word(4, P_GOAL_POSITION_L, 560); 
	dxl_write_word(5, P_GOAL_POSITION_L, 481); 
	dxl_write_word(6, P_GOAL_POSITION_L, 259); 
	dxl_write_word(7, P_GOAL_POSITION_L, 772); 
	dxl_write_word(8, P_GOAL_POSITION_L, 240); 
	dxl_write_word(9, P_GOAL_POSITION_L, 552); 
	dxl_write_word(10, P_GOAL_POSITION_L, 481); 
	dxl_write_word(11, P_GOAL_POSITION_L, 603); 
	dxl_write_word(12, P_GOAL_POSITION_L, 447); 
	dxl_write_word(13, P_GOAL_POSITION_L, 581); 
	dxl_write_word(14, P_GOAL_POSITION_L, 423); 
	dxl_write_word(15, P_GOAL_POSITION_L, 815); 
	dxl_write_word(16, P_GOAL_POSITION_L, 245); 
	dxl_write_word(17, P_GOAL_POSITION_L, 589); 
	dxl_write_word(18, P_GOAL_POSITION_L, 475); 
	_delay_ms(400);
	// step 2
	dxl_write_word(1, P_GOAL_POSITION_L, 487); 
	dxl_write_word(2, P_GOAL_POSITION_L, 560); 
	dxl_write_word(3, P_GOAL_POSITION_L, 462); 
	dxl_write_word(4, P_GOAL_POSITION_L, 817); 
	dxl_write_word(5, P_GOAL_POSITION_L, 732); 
	dxl_write_word(6, P_GOAL_POSITION_L, 552); 
	dxl_write_word(7, P_GOAL_POSITION_L, 772); 
	dxl_write_word(8, P_GOAL_POSITION_L, 240); 
	dxl_write_word(9, P_GOAL_POSITION_L, 552); 
	dxl_write_word(10, P_GOAL_POSITION_L, 481); 
	dxl_write_word(11, P_GOAL_POSITION_L, 603); 
	dxl_write_word(12, P_GOAL_POSITION_L, 447); 
	dxl_write_word(13, P_GOAL_POSITION_L, 581); 
	dxl_write_word(14, P_GOAL_POSITION_L, 423); 
	dxl_write_word(15, P_GOAL_POSITION_L, 815); 
	dxl_write_word(16, P_GOAL_POSITION_L, 245); 
	dxl_write_word(17, P_GOAL_POSITION_L, 589); 
	dxl_write_word(18, P_GOAL_POSITION_L, 475); 
	_delay_ms(384);
}
