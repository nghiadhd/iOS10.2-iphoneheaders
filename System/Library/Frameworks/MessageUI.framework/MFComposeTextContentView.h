/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UITextContentView.h>

@interface MFComposeTextContentView : UITextContentView {

	long long _preventScrollSelectionToVisible;
	BOOL _keepScrollPosition;
	CGPoint _scrollPosition;

}
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)keyCommands;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(void)ensureSelection;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)enclosingScrollView;
-(void)beginPreventingScrollSelectionToVisible;
-(void)endPreventingScrollSelectionToVisible;
-(void)increaseQuoteLevel;
-(void)decreaseQuoteLevel;
-(void)showQuoteLevelOptions;
@end

