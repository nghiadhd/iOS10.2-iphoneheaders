/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOSpatialLookupParameters : NSObject {

	SCD_Struct_GE26 _coordinate;
	double _radius;
	NSArray* _categories;

}

@property (nonatomic,readonly) SCD_Struct_GE26 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                    //@synthesize categories=_categories - In the implementation block
-(void)dealloc;
-(NSArray *)categories;
-(double)radius;
-(id)initWithCoordinate:(SCD_Struct_GE26)arg1 radius:(double)arg2 categories:(id)arg3 ;
-(SCD_Struct_GE26)coordinate;
@end

