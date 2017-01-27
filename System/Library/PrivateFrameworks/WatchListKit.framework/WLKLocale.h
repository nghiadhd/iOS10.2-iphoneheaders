/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSLocale;

@interface WLKLocale : NSObject {

	NSString* _displayName;
	NSLocale* _locale;

}

@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSLocale * locale;                   //@synthesize locale=_locale - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSLocale *)locale;
-(NSString *)displayName;
@end

