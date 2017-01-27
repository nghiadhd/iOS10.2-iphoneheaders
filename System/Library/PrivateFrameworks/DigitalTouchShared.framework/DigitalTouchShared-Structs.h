/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned sendDate : 1;
	unsigned startDelay : 1;
	unsigned baseColor : 1;
	unsigned messageType : 1;
	unsigned supportsPlaybackTimeOffsets : 1;
} SCD_Struct_ET1;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned beatsPerMinute : 1;
	unsigned duration : 1;
	unsigned heartbreakTime : 1;
	unsigned normalizedCenterX : 1;
	unsigned normalizedCenterY : 1;
	unsigned rotation : 1;
} SCD_Struct_ET5;

typedef struct _compressed_pair<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > *, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > > > {
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > __first_;
} compressed_pair<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > *, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > > >;

typedef struct vector<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > > > {
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > __begin_;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > __end_;
	compressed_pair<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > *, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > > > __end_cap_;
} vector<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > > >;

typedef struct _compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > {
	 __first_;
} compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >;

typedef struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > {
	 __begin_;
	 __end_;
	compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > __end_cap_;
} vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >;

typedef struct _compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > {
	unsigned long long __first_;
} compressed_pair<unsigned long *, std::__1::allocator<unsigned long> >;

typedef struct vector<unsigned long, std::__1::allocator<unsigned long> > {
	unsigned long long __begin_;
	unsigned long long __end_;
	compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > __end_cap_;
} vector<unsigned long, std::__1::allocator<unsigned long> >;

typedef struct {
	unsigned short field1;
	unsigned short field2;
} SCD_Struct_ET12;

typedef struct {
	unsigned short field1;
} SCD_Struct_ET13;

typedef struct {
	SCD_Struct_ET1 field1;
	2 field2;
	SCD_Struct_ET1 field3;
	3 field4;
} SCD_Struct_ET14;

typedef struct CGImage* CGImageRef;

typedef struct CGColor* CGColorRef;

typedef struct {
	unsigned duration : 1;
	unsigned normalizedCenterX : 1;
	unsigned normalizedCenterY : 1;
} SCD_Struct_ET17;

typedef struct {
	unsigned doodleCount : 1;
} SCD_Struct_ET18;

typedef struct _compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > {
	CGPoint __first_;
} compressed_pair<CGPoint *, std::__1::allocator<CGPoint> >;

typedef struct vector<CGPoint, std::__1::allocator<CGPoint> > {
	CGPoint __begin_;
	CGPoint __end_;
	compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > __end_cap_;
} vector<CGPoint, std::__1::allocator<CGPoint> >;

typedef struct _compressed_pair<double *, std::__1::allocator<double> > {
	double __first_;
} compressed_pair<double *, std::__1::allocator<double> >;

typedef struct vector<double, std::__1::allocator<double> > {
	double __begin_;
	double __end_;
	compressed_pair<double *, std::__1::allocator<double> > __end_cap_;
} vector<double, std::__1::allocator<double> >;

