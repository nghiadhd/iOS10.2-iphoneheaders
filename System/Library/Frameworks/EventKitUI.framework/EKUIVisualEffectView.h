/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIVisualEffectView.h>
#import <libobjc.A.dylib/EKUITintColorUpdateDelegate.h>

@protocol EKUITintColorUpdateDelegate;
@class TintColorUpdateView, NSObject;

@interface EKUIVisualEffectView : UIVisualEffectView <EKUITintColorUpdateDelegate> {

	TintColorUpdateView* _updateView;
	NSObject*<EKUITintColorUpdateDelegate> _tintColorDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<EKUITintColorUpdateDelegate> tintColorDelegate;              //@synthesize tintColorDelegate=_tintColorDelegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2 ;
-(NSObject*<EKUITintColorUpdateDelegate>)tintColorDelegate;
-(void)subTintColorUpdatedToColor:(id)arg1 ;
-(void)setTintColorDelegate:(NSObject*<EKUITintColorUpdateDelegate>)arg1 ;
@end

