/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUICommentTemplateViewElement : SKUIViewElement {

	BOOL _scrollNewCommentToView;
	BOOL _showKeyboard;
	NSString* _asText;
	NSString* _asFormat;
	NSString* _commentAsText;
	NSString* _myselfText;
	NSString* _postButtonText;
	NSString* _postPlaceholderText;

}

@property (nonatomic,readonly) NSString * asText;                           //@synthesize asText=_asText - In the implementation block
@property (nonatomic,readonly) NSString * asFormat;                         //@synthesize asFormat=_asFormat - In the implementation block
@property (nonatomic,readonly) NSString * commentAsText;                    //@synthesize commentAsText=_commentAsText - In the implementation block
@property (nonatomic,readonly) NSString * myselfText;                       //@synthesize myselfText=_myselfText - In the implementation block
@property (nonatomic,readonly) NSString * postButtonText;                   //@synthesize postButtonText=_postButtonText - In the implementation block
@property (nonatomic,readonly) NSString * postPlaceholderText;              //@synthesize postPlaceholderText=_postPlaceholderText - In the implementation block
@property (nonatomic,readonly) BOOL scrollNewCommentToView;                 //@synthesize scrollNewCommentToView=_scrollNewCommentToView - In the implementation block
@property (nonatomic,readonly) BOOL showKeyboard;                           //@synthesize showKeyboard=_showKeyboard - In the implementation block
-(BOOL)showKeyboard;
-(NSString *)asText;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(NSString *)asFormat;
-(NSString *)commentAsText;
-(NSString *)myselfText;
-(NSString *)postButtonText;
-(NSString *)postPlaceholderText;
-(BOOL)scrollNewCommentToView;
@end

