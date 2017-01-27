/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCollectionNode.h>

@interface NTKTickCollectionNode : NTKCollectionNode {

	unsigned _ticks;
	unsigned _l1mod;
	unsigned _l2mod;
	double _smallColor;
	double _largeColor;
	double _smallFilterWidth;
	double _largeFilterWidth;
	CGSize _smallSizeInPoints;
	CGSize _largeSizeInPoints;

}

@property (assign,nonatomic) unsigned ticks;                        //@synthesize ticks=_ticks - In the implementation block
@property (assign,nonatomic) double smallColor;                     //@synthesize smallColor=_smallColor - In the implementation block
@property (assign,nonatomic) double largeColor;                     //@synthesize largeColor=_largeColor - In the implementation block
@property (assign,nonatomic) CGSize smallSizeInPoints;              //@synthesize smallSizeInPoints=_smallSizeInPoints - In the implementation block
@property (assign,nonatomic) CGSize largeSizeInPoints;              //@synthesize largeSizeInPoints=_largeSizeInPoints - In the implementation block
@property (assign,nonatomic) double smallFilterWidth;               //@synthesize smallFilterWidth=_smallFilterWidth - In the implementation block
@property (assign,nonatomic) double largeFilterWidth;               //@synthesize largeFilterWidth=_largeFilterWidth - In the implementation block
@property (assign,nonatomic) unsigned l1mod;                        //@synthesize l1mod=_l1mod - In the implementation block
@property (assign,nonatomic) unsigned l2mod;                        //@synthesize l2mod=_l2mod - In the implementation block
-(unsigned)ticks;
-(void)createSubNodes;
-(double)smallColor;
-(double)largeColor;
-(CGSize)smallSizeInPoints;
-(CGSize)largeSizeInPoints;
-(double)smallFilterWidth;
-(double)largeFilterWidth;
-(unsigned)l1mod;
-(unsigned)l2mod;
-(void)colorizeWithTickColor:(id)arg1 alternateTickColor:(id)arg2 ;
-(void)colorizeBackground:(id)arg1 ;
-(void)setTicks:(unsigned)arg1 ;
-(void)setSmallColor:(double)arg1 ;
-(void)setLargeColor:(double)arg1 ;
-(void)setSmallSizeInPoints:(CGSize)arg1 ;
-(void)setLargeSizeInPoints:(CGSize)arg1 ;
-(void)setSmallFilterWidth:(double)arg1 ;
-(void)setLargeFilterWidth:(double)arg1 ;
-(void)setL1mod:(unsigned)arg1 ;
-(void)setL2mod:(unsigned)arg1 ;
@end

