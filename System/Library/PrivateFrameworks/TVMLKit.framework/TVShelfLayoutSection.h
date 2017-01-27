/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSArray;

@interface TVShelfLayoutSection : NSObject {

	NSArray* _itemFrames;
	double _sectionHeaderHorizontalOffset;
	double _sectionHeaderVerticalBump;
	CGRect _itemsBoundingFrame;
	CGRect _sectionHeaderFrame;
	UIEdgeInsets _sectionInset;

}

@property (nonatomic,retain) NSArray * itemFrames;                              //@synthesize itemFrames=_itemFrames - In the implementation block
@property (assign,nonatomic) CGRect itemsBoundingFrame;                         //@synthesize itemsBoundingFrame=_itemsBoundingFrame - In the implementation block
@property (assign,nonatomic) CGRect sectionHeaderFrame;                         //@synthesize sectionHeaderFrame=_sectionHeaderFrame - In the implementation block
@property (assign,nonatomic) double sectionHeaderHorizontalOffset;              //@synthesize sectionHeaderHorizontalOffset=_sectionHeaderHorizontalOffset - In the implementation block
@property (assign,nonatomic) double sectionHeaderVerticalBump;                  //@synthesize sectionHeaderVerticalBump=_sectionHeaderVerticalBump - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                         //@synthesize sectionInset=_sectionInset - In the implementation block
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)sectionInset;
-(NSArray *)itemFrames;
-(void)setItemFrames:(NSArray *)arg1 ;
-(CGRect)itemsBoundingFrame;
-(void)setItemsBoundingFrame:(CGRect)arg1 ;
-(CGRect)sectionHeaderFrame;
-(void)setSectionHeaderFrame:(CGRect)arg1 ;
-(double)sectionHeaderHorizontalOffset;
-(void)setSectionHeaderHorizontalOffset:(double)arg1 ;
-(double)sectionHeaderVerticalBump;
-(void)setSectionHeaderVerticalBump:(double)arg1 ;
@end

