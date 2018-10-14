kmain()
{
	char* vidmem=(char*)0xb8000;
	vidmem[0] = 'N';
	vidmem[1] = 0x02;
	vidmem[2] = 'a';
	vidmem[3] = 0x02;
	vidmem[4] = 'v';
	vidmem[5] = 0x02;		
	vidmem[6] = 'e';
	vidmem[7] = 0x02;
	vidmem[8] = 'e';
	vidmem[9] = 0x02;
	vidmem[10] = 'n';
	vidmem[11] = 0x02;
	vidmem[12] = 'a';
	vidmem[13] = 0x02;

}
