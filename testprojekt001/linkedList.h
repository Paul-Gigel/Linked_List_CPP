#pragma once
struct linkedList	
{
	int ival;
	linkedList *next;
};
struct initptr		
{
	linkedList* begin, * helper, * instance;
};

initptr& init()
{
	static initptr ret_init;
	ret_init.begin = nullptr;
	ret_init.helper = nullptr;
	ret_init.instance = nullptr;
	return ret_init;
};
void append(linkedList ref_linkedList)
{
	initptr ref_ptr = init();
	ref_ptr.instance = &ref_linkedList;
	if (ref_ptr.begin == nullptr)
	{
		ref_ptr.begin = ref_ptr.instance;
	}
};



