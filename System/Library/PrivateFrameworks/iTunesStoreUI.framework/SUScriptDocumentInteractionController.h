/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptFunction, WebScriptObject, NSString;

@interface SUScriptDocumentInteractionController : SUScriptObject {

	SUScriptFunction* _cancelFunction;
	SUScriptFunction* _openWithFunction;

}

@property (retain) WebScriptObject * cancelFunction; 
@property (retain) WebScriptObject * openWithFunction; 
@property (copy) NSString * UTI; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(NSString *)UTI;
-(void)dismissMenuAnimated:(id)arg1 ;
-(void)setUTI:(NSString *)arg1 ;
-(id)attributeKeys;
-(id)_nativeObject;
-(id)_nativeDocumentInteractionController;
-(void)showOpenWithMenuFromDOMElement:(id)arg1 ;
-(void)showOpenWithMenuFromNavigationItem:(id)arg1 ;
-(WebScriptObject *)cancelFunction;
-(WebScriptObject *)openWithFunction;
-(void)setCancelFunction:(WebScriptObject *)arg1 ;
-(void)setOpenWithFunction:(WebScriptObject *)arg1 ;
-(id)_cancelFunction;
-(id)_openWithFunction;
-(id)scriptAttributeKeys;
-(id)_className;
@end

