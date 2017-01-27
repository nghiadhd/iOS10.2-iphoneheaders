/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodySubparser.h>

@protocol MFMessageBodyElement_Private;
@class NSMutableArray;

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser {

	NSMutableArray* _lastTextElements;
	id<MFMessageBodyElement_Private> _lastNonWhitespaceTextElement;
	/*^block*/id _foundTextBlock;
	/*^block*/id _foundWhitespaceBlock;
	BOOL _foundText;
	BOOL _foundForwardSeparator;

}
-(void)dealloc;
-(void)copyBlocks;
-(void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2 ;
-(void)messageBodyParserDidFinishParsing:(id)arg1 ;
-(void)_consumeTextElement:(id)arg1 isAttribution:(BOOL)arg2 ;
-(void)_consumeAnyLastTextElementAsAttribution:(BOOL)arg1 ;
-(void)setFoundTextBlock:(/*^block*/id)arg1 ;
-(void)setFoundWhitespaceBlock:(/*^block*/id)arg1 ;
@end

