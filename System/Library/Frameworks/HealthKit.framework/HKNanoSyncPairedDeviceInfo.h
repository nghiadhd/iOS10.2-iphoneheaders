/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKNanoSyncPairedDeviceInfo : NSObject <NSCopying> {

	NSString* _sourceBundleIdentifier;
	NSString* _systemBuildVersion;
	BOOL _active;
	int _protocolVersion;

}

@property (copy,readonly) NSString * sourceBundleIdentifier; 
@property (copy,readonly) NSString * systemBuildVersion; 
@property (getter=isActive,readonly) BOOL active; 
@property (readonly) int protocolVersion; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isActive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)protocolVersion;
-(NSString *)systemBuildVersion;
-(NSString *)sourceBundleIdentifier;
-(id)initWithSourceBundleIdentifier:(id)arg1 systemBuildVersion:(id)arg2 active:(BOOL)arg3 protocolVersion:(int)arg4 ;
@end

