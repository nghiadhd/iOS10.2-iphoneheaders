/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/QLPrintingProtocol.h>

@class UITextView, NSAttributedString, UISimpleTextPrintFormatter, UIPrintPageRenderer, NSString;

@interface QLTextItemViewController : QLItemViewController <UITextViewDelegate, QLPrintingProtocol> {

	UITextView* _textView;
	NSAttributedString* _content;
	UISimpleTextPrintFormatter* _printFormatter;
	UIPrintPageRenderer* _pageRenderer;

}

@property (readonly) UISimpleTextPrintFormatter * printFormatter;              //@synthesize printFormatter=_printFormatter - In the implementation block
@property (readonly) UIPrintPageRenderer * pageRenderer;                       //@synthesize pageRenderer=_pageRenderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)stringFromPreviewItem:(id)arg1 withAttributes:(id*)arg2 error:(id*)arg3 completionBlock:(/*^block*/id)arg4 ;
-(long long)preferredWhitePointAdaptivityStyle;
-(void)loadView;
-(id)scrollView;
-(id)printer;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(UISimpleTextPrintFormatter *)printFormatter;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canPinchToDismiss;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(id)registeredKeyCommands;
-(UIPrintPageRenderer *)pageRenderer;
-(void)numberOfPagesWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldRecognizeGestureRecognizer:(id)arg1 ;
-(BOOL)canSwipeToDismiss;
@end

