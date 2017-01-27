/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIViewController.h>

@protocol AXUIService;
@class VOTUICursorView;

@interface VOTUICursorViewController : UIViewController {

	id<AXUIService> _axuiService;
	VOTUICursorView* _cursorView;
	CGPathRef _cursorPath;
	CGRect _cursorFrame;

}

@property (nonatomic,retain) VOTUICursorView * cursorView;              //@synthesize cursorView=_cursorView - In the implementation block
@property (assign,nonatomic) CGRect cursorFrame;                        //@synthesize cursorFrame=_cursorFrame - In the implementation block
@property (nonatomic,retain) CGPathRef cursorPath;                      //@synthesize cursorPath=_cursorPath - In the implementation block
@property (assign,nonatomic) id<AXUIService> axuiService;               //@synthesize axuiService=_axuiService - In the implementation block
@property (assign,nonatomic) BOOL cursorHidden; 
-(void)setCursorHidden:(BOOL)arg1 ;
-(void)_updateCursorPath;
-(void)setCursorView:(VOTUICursorView *)arg1 ;
-(CGRect)cursorFrame;
-(void)setCursorFrame:(CGRect)arg1 ;
-(VOTUICursorView *)cursorView;
-(void)setCursorPath:(CGPathRef)arg1 ;
-(void)setCursorFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(CGPathRef)cursorPath;
-(void)setAxuiService:(id<AXUIService>)arg1 ;
-(void)_updateCursorFrameAnimated:(BOOL)arg1 ;
-(id<AXUIService>)axuiService;
-(BOOL)cursorHidden;
-(id)initWithAXUIService:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
@end
