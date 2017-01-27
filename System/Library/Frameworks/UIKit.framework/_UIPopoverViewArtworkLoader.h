/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString;

@interface _UIPopoverViewArtworkLoader : NSObject {

	long long _backgroundStyle;
	NSString* _backgroundSelector;

}
+(id)backgroundSelectorForBackgroundStyle:(long long)arg1 ;
-(double)arrowHeight;
-(id)initWithBackgroundStyle:(long long)arg1 ;
-(id)topArrowLeftEndCapView;
-(id)topArrowPinnedView;
-(id)topArrowView;
-(id)topArrowRightEndCapView;
-(id)bottomArrowLeftEndCapView;
-(id)bottomArrowPinnedView;
-(id)bottomArrowView;
-(id)bottomArrowRightEndCapView;
-(id)shortRightArrowView;
-(id)rightArrowPinnedTopView;
-(id)rightArrowBottomEndCapView;
-(id)rightArrowPinnedBottomView;
-(id)rightArrowTopEndCapView;
-(id)rightArrowView;
-(double)arrowBase;
-(id)templateImageForDirection:(id)arg1 shortArtwork:(BOOL)arg2 ;
-(BOOL)modern;
-(double)topArrowStart;
-(CGRect)contentRectForRect:(CGRect)arg1 inImageOfSize:(CGSize)arg2 ;
-(double)arrowTopGradientEnd;
-(double)capCornerRadius;
-(CGRect)contentsCenterForRect:(CGRect)arg1 inImageOfSize:(CGSize)arg2 ;
-(id)viewWithContentsImage:(id)arg1 rect:(CGRect)arg2 center:(CGRect)arg3 antialiasingMask:(unsigned)arg4 directionSelector:(id)arg5 ;
-(double)clampArrowBase;
-(double)sideArrowStart;
-(double)noArrowTopGradientEnd;
-(double)bottomEndCapHeight;
-(double)shortArtArrowTopGradientEnd;
-(id)shortTopArrowLeftEndCapView;
-(double)shortArtRightArrowBase;
-(double)shortArtNoArrowTopGradientEnd;
-(id)shortBottomArrowLeftEndCapView;
-(id)shortTopArrowView;
-(id)shortTopArrowPinnedView;
-(id)shortTopArrowRightEndCapView;
-(id)shortBottomArrowView;
-(id)shortBottomArrowPinnedView;
-(id)shortBottomArrowRightEndCapView;
@end

