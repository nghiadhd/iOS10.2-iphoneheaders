/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphNode, NSArray, NSDate, NSString;

@interface PGPotentialLocationMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphNode* _cityNode;
	long long _year;
	NSArray* _assetsInCity;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) PGGraphNode * cityNode;              //@synthesize cityNode=_cityNode - In the implementation block
@property (readonly) long long year;                      //@synthesize year=_year - In the implementation block
@property (readonly) NSString * city; 
@property (retain) NSArray * assetsInCity;                //@synthesize assetsInCity=_assetsInCity - In the implementation block
@property (retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
-(long long)year;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)city;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithCityNode:(id)arg1 year:(long long)arg2 ;
-(PGGraphNode *)cityNode;
-(void)setAssetsInCity:(NSArray *)arg1 ;
-(NSArray *)assetsInCity;
@end

