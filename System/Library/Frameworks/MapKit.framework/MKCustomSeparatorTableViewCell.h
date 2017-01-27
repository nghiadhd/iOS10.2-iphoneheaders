/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKTableViewCell.h>

@interface MKCustomSeparatorTableViewCell : MKTableViewCell {

	double _leftSeparatorInset;
	double _rightSeparatorInset;

}

@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden; 
@property (assign,nonatomic) double leftSeparatorInset;                                  //@synthesize leftSeparatorInset=_leftSeparatorInset - In the implementation block
@property (assign,nonatomic) double rightSeparatorInset;                                 //@synthesize rightSeparatorInset=_rightSeparatorInset - In the implementation block
@property (assign,nonatomic) double leadingSeparatorInset; 
@property (assign,nonatomic) double trailingSeparatorInset; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_updateSeparatorInset;
-(CGRect)_separatorFrame;
-(void)setLeadingSeparatorInset:(double)arg1 ;
-(void)setTrailingSeparatorInset:(double)arg1 ;
-(void)setLeftSeparatorInset:(double)arg1 ;
-(void)setRightSeparatorInset:(double)arg1 ;
-(BOOL)isSeparatorHidden;
-(double)leadingSeparatorInset;
-(double)trailingSeparatorInset;
-(double)leftSeparatorInset;
-(double)rightSeparatorInset;
-(void)setSeparatorHidden:(BOOL)arg1 ;
@end

