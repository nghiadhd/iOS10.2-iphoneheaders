/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <DuetExpertCenter/_DECItem.h>

@class NSString;

@interface _DECAppItem : _DECItem {

	NSString* _bundleIdentifier;
	long long _sources;
	long long _reason;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long sources;                        //@synthesize sources=_sources - In the implementation block
@property (assign,nonatomic) long long reason;                           //@synthesize reason=_reason - In the implementation block
+(unsigned long long)category;
+(BOOL)supportsSecureCoding;
+(BOOL)isSearchFoundationCompliant;
+(id)fromSearchResult:(id)arg1 ;
+(id)appWithBundleIdentifier:(id)arg1 sources:(long long)arg2 ;
+(id)appWithBundleIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)reason;
-(long long)sources;
-(void)setReason:(long long)arg1 ;
-(id)toSearchResult;
-(id)initWithBundleIdentifier:(id)arg1 sources:(long long)arg2 ;
-(BOOL)_isEqualToDECAppItem:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
@end

