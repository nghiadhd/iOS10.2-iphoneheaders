/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned originatorType : 1;
	unsigned originatorVersion : 1;
} SCD_Struct_MP1;

typedef struct {
	unsigned providesDefaultAttributes : 1;
	unsigned providesTagAttributes : 1;
	unsigned providesPrependTagString : 1;
} SCD_Struct_MP2;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	unsigned containerItemType : 1;
} SCD_Struct_MP5;

typedef struct _compressed_pair<MPU::LayoutInterpolator::EntriesContainer *, std::__1::allocator<MPU::LayoutInterpolator::EntriesContainer> > {
	EntriesContainer __first_;
} compressed_pair<MPU::LayoutInterpolator::EntriesContainer *, std::__1::allocator<MPU::LayoutInterpolator::EntriesContainer> >;

typedef struct vector<MPU::LayoutInterpolator::EntriesContainer, std::__1::allocator<MPU::LayoutInterpolator::EntriesContainer> > {
	EntriesContainer __begin_;
	EntriesContainer __end_;
	compressed_pair<MPU::LayoutInterpolator::EntriesContainer *, std::__1::allocator<MPU::LayoutInterpolator::EntriesContainer> > __end_cap_;
} vector<MPU::LayoutInterpolator::EntriesContainer, std::__1::allocator<MPU::LayoutInterpolator::EntriesContainer> >;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	CGRect field1;
	CGRect field2;
} SCD_Struct_MP11;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct {
	CGSize baseSize;
	CGRect bounds;
	CGPoint centerInLocalCoordinates;
	BOOL forcesIntegralX;
	BOOL forcesIntegralY;
	UIOffset maximumRelativeOffsetStep;
	double scale;
	CGSize sizeInsetStep;
	CGPoint vanishingPoint;
} SCD_Struct_MP13;

typedef struct __CFArray* CFArrayRef;

typedef struct _MRMediaRemoteCommandInfo* MRMediaRemoteCommandInfoRef;

typedef struct {
	double ascender;
	BOOL isAscenderInitialized;
	double bodyLeading;
	BOOL isBodyLeadingInitialized;
	double capHeight;
	BOOL isCapHeightInitialized;
	double descender;
	BOOL isDescenderInitialized;
	double lineHeight;
	BOOL isLineHeightInitialized;
} SCD_Struct_MP16;

