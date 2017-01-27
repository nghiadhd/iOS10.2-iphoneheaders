/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCUIControlCenterPageContentProviding <CCUIControlCenterObserver>
@property (assign,nonatomic,__weak) id<CCUIControlCenterPageContentViewControllerDelegate> delegate; 
@property (nonatomic,readonly) UIEdgeInsets contentInsets; 
@property (nonatomic,readonly) BOOL wantsVisible; 
@optional
-(UIEdgeInsets)contentInsets;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)controlCenterDidScrollToThisPage:(BOOL)arg1;
-(BOOL)wantsVisible;

@required
-(void)setDelegate:(id)arg1;
-(id<CCUIControlCenterPageContentViewControllerDelegate>)delegate;

@end

