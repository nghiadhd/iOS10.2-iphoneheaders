/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIInterfaceActionGroupView.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate.h>

@protocol CKActionSheetMenuViewDelegate;
@class CKActionSheetMenuTitleView, NSString;

@interface CKActionSheetMenuView : UIInterfaceActionGroupView <UIInterfaceActionHandlerInvocationDelegate> {

	CKActionSheetMenuTitleView* _titleView;
	id<CKActionSheetMenuViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKActionSheetMenuViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<CKActionSheetMenuViewDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<CKActionSheetMenuViewDelegate>)delegate;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissSelf;
-(id)initWithTitle:(id)arg1 interfaceActions:(id)arg2 ;
-(void)updateTitleContraints;
@end

