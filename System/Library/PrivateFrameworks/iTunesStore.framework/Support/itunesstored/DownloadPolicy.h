/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <StoreServices/SSMemoryEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSDownloadPolicy, NSData;

@interface DownloadPolicy : SSMemoryEntity <NSCopying> {

	SSDownloadPolicy* _cachedPolicy;

}

@property (nonatomic,copy) NSData * policyData; 
@property (nonatomic,readonly) SSDownloadPolicy * downloadPolicy; 
+(Class)databaseEntityClass;
+(id)defaultProperties;
-(id)_newBackgroundTaskAgentJobWithRule:(id)arg1 ;
-(NSData *)policyData;
-(id)copyBackgroundTaskAgentJobs;
-(void)setPolicyData:(NSData *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSDownloadPolicy *)downloadPolicy;
@end

