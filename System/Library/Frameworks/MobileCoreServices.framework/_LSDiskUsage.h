/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, NSNumber;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSMutableDictionary* _usage;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSNumber * staticUsage; 
@property (nonatomic,readonly) NSNumber * dynamicUsage; 
@property (nonatomic,readonly) NSNumber * onDemandResourcesUsage; 
+(id)ODRConnection;
+(id)dynamicUsageForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)ODRUsageForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2 ;
-(NSNumber *)staticUsage;
-(NSNumber *)dynamicUsage;
-(NSNumber *)onDemandResourcesUsage;
-(BOOL)_fetchWithXPCConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)fetchServerSideWithError:(id*)arg1 ;
-(BOOL)fetchClientSideWithError:(id*)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

