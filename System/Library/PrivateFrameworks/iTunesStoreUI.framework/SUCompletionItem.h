/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SUCompletionItem : NSObject {

	NSString* _alternateTitle;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * alternateTitle;              //@synthesize alternateTitle=_alternateTitle - In the implementation block
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                            //@synthesize url=_url - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)title;
-(NSURL *)URL;
-(id)initWithPropertyList:(id)arg1 ;
-(NSString *)alternateTitle;
@end

