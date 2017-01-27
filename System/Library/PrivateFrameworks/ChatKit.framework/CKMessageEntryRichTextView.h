/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessageEntryTextView.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableDictionary, CKComposition, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate, UIGestureRecognizerDelegate> {

	char _balloonColor;
	BOOL _allowCalloutActions;
	NSMutableDictionary* _mediaObjects;
	NSMutableDictionary* _pluginDisplayContainers;
	NSMutableDictionary* _composeImages;
	CKComposition* _pasteboardComposition;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (nonatomic,retain) NSMutableDictionary * mediaObjects;                                     //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pluginDisplayContainers;                          //@synthesize pluginDisplayContainers=_pluginDisplayContainers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * composeImages;                                    //@synthesize composeImages=_composeImages - In the implementation block
@property (nonatomic,retain) CKComposition * pasteboardComposition;                                  //@synthesize pasteboardComposition=_pasteboardComposition - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL allowCalloutActions;                                               //@synthesize allowCalloutActions=_allowCalloutActions - In the implementation block
@property (assign,nonatomic,__weak) id<CKMessageEntryRichTextViewDelegate> delegate; 
@property (assign,nonatomic) char balloonColor;                                                      //@synthesize balloonColor=_balloonColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_showCustomInputView;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setMediaObjects:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mediaObjects;
-(void)setBalloonColor:(char)arg1 ;
-(id)compositionText;
-(void)previewDidChange:(id)arg1 ;
-(BOOL)allowCalloutActions;
-(void)setPasteboardComposition:(CKComposition *)arg1 ;
-(CKComposition *)pasteboardComposition;
-(id)attributedTextForCompositionText:(id)arg1 ;
-(void)setPluginDisplayContainers:(NSMutableDictionary *)arg1 ;
-(void)setComposeImages:(NSMutableDictionary *)arg1 ;
-(void)handleTapOrLongPress:(id)arg1 ;
-(void)setAllowCalloutActions:(BOOL)arg1 ;
-(NSMutableDictionary *)composeImages;
-(NSMutableDictionary *)pluginDisplayContainers;
-(void)updateComposeImages;
-(id)composeImageForTransferGUID:(id)arg1 ;
-(char)balloonColor;
-(void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(void)setCompositionText:(id)arg1 ;
@end

