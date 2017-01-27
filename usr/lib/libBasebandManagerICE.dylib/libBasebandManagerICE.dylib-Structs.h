/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libBasebandManagerICE.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct object {
	dispatch_object_s fObj;
} object;

typedef struct queue {
	object fObj;
} queue;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long long>, std::__1::less<unsigned long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long long>, std::__1::less<unsigned long>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long long>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned long, unsigned long long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long long> > > {
	__tree_node<std::__1::__value_type<unsigned long, unsigned long long>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long long>, std::__1::less<unsigned long>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned long, unsigned long long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long long> > >;

typedef struct map<unsigned long, unsigned long long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long long> > > {
	tree<std::__1::__value_type<unsigned long, unsigned long long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long long> > > __tree_;
} map<unsigned long, unsigned long long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long long> > >;

typedef struct _compressed_pair<Component *, std::__1::default_delete<Component> > {
	Component __first_;
} compressed_pair<Component *, std::__1::default_delete<Component> >;

typedef struct unique_ptr<Component, std::__1::default_delete<Component> > {
	compressed_pair<Component *, std::__1::default_delete<Component> > __ptr_;
} unique_ptr<Component, std::__1::default_delete<Component> >;

