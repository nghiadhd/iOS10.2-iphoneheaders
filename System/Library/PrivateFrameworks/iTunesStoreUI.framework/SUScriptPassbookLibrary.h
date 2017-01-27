/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class PKPassLibrary, NSArray;

@interface SUScriptPassbookLibrary : SUScriptObject {

	PKPassLibrary* _passLibrary;

}

@property (readonly) NSArray * passes; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(NSArray *)passes;
-(id)initWithPassLibrary:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
@end

