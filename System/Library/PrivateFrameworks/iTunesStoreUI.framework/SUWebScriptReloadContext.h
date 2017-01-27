/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface SUWebScriptReloadContext : NSObject <NSCopying> {

	NSURL* _URL;
	NSString* _referringUserAgent;
	NSURL* _referrerURL;

}

@property (nonatomic,retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * referringUserAgent;              //@synthesize referringUserAgent=_referringUserAgent - In the implementation block
@property (nonatomic,retain) NSURL * referrerURL;                      //@synthesize referrerURL=_referrerURL - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)referrerURL;
-(NSString *)referringUserAgent;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(void)setReferringUserAgent:(NSString *)arg1 ;
-(id)_copyScriptDictionaryRepresentation;
@end

