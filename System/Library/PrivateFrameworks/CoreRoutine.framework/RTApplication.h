/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RTApplication : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundleId;
	NSString* _localizedDisplayName;
	long long _capabilities;

}

@property (assign,nonatomic) long long capabilities;                         //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                          //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)capabilitiesToString:(long long)arg1 ;
+(id)allowedKeys;
-(BOOL)supportsMediaRemote;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleId;
-(NSString *)localizedDisplayName;
-(long long)capabilities;
-(void)setCapabilities:(long long)arg1 ;
-(id)initWithBundleId:(id)arg1 localizedDisplayName:(id)arg2 capabilities:(long long)arg3 ;
@end

