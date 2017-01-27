/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APWBundleIdProviding.h>

@class NSString;

@interface APWSimpleBundleIdProvider : NSObject <APWBundleIdProviding> {

	NSString* _bundleIdentifier;
	long long _sources;
	long long _reason;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long sources;                        //@synthesize sources=_sources - In the implementation block
@property (nonatomic,readonly) long long reason;                         //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)simpleBundleIdProvidersWithStrings:(id)arg1 ;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(long long)reason;
-(long long)sources;
-(id)initWithBundleIdentifier:(id)arg1 sources:(long long)arg2 reason:(long long)arg3 ;
@end

