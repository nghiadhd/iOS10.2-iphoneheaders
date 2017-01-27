/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol UIDebuggingZoomDelegate;
@interface UIDebuggingZoomLoupeView : UIView {

	id<UIDebuggingZoomDelegate> _delegate;
	CGPoint _currentlyInspectedPoint;

}

@property (assign,nonatomic) CGPoint currentlyInspectedPoint;                          //@synthesize currentlyInspectedPoint=_currentlyInspectedPoint - In the implementation block
@property (assign,nonatomic,__weak) id<UIDebuggingZoomDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<UIDebuggingZoomDelegate>)arg1 ;
-(id<UIDebuggingZoomDelegate>)delegate;
-(CGPoint)currentlyInspectedPoint;
-(void)setCurrentlyInspectedPoint:(CGPoint)arg1 ;
@end
