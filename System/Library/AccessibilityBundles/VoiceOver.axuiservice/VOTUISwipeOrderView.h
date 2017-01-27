/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSArray;

@interface VOTUISwipeOrderView : UIView {

	UILabel* _numberLabel;
	NSArray* _swipeFrames;

}

@property (nonatomic,retain) NSArray * swipeFrames;              //@synthesize swipeFrames=_swipeFrames - In the implementation block
-(void)setSwipeFrames:(NSArray *)arg1 ;
-(NSArray *)swipeFrames;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

