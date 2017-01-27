/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UpNextWidget/UpNextWidget-Structs.h>
#import <UIKit/UIView.h>

@class NSURL;

@interface UpNextWidget.StackedAlarmCell : UIView {

	 clockAppSectionURL;
	 bellImageView;
	 timeLabel;
	 titleLabel;
	 rowSeparator;
	 containingVisualEffectView;
	 showRowSeparator;
	 persistentConstraints;

}

@property (copy,nonatomic) NSURL * clockAppSectionURL; 
@property (assign,nonatomic) BOOL showRowSeparator; 
+(BOOL)requiresConstraintBasedLayout;
+(id)constraintsForBindingFrame:(id)arg1 toFrameOfView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateConstraints;
-(NSURL *)clockAppSectionURL;
-(void)setClockAppSectionURL:(NSURL *)arg1 ;
-(BOOL)showRowSeparator;
-(void)setShowRowSeparator:(BOOL)arg1 ;
-(void)updateWithAlarm:(id)arg1 ;
@end
