/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKit/UIView.h>

@class PGChevronView;

@interface PGStashedView : UIView {

	PGChevronView* _chevronViewLeftColorBurn;
	PGChevronView* _chevronViewLeftPlusD;
	PGChevronView* _chevronViewRightColorBurn;
	PGChevronView* _chevronViewRightPlusD;
	BOOL _stashed;

}

@property (assign,getter=isStashed,nonatomic) BOOL stashed;              //@synthesize stashed=_stashed - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setStashed:(BOOL)arg1 ;
-(BOOL)isStashed;
@end

