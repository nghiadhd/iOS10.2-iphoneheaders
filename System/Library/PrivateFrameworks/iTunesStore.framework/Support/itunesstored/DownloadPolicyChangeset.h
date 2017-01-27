/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSSet;

@interface DownloadPolicyChangeset : NSObject <NSCopying> {

	int _changesetType;
	NSDictionary* _downloadProperties;
	long long _networkType;
	NSSet* _policyIDs;

}

@property (nonatomic,copy) NSSet * policyIdentifiers;                                         //@synthesize policyIDs=_policyIDs - In the implementation block
@property (assign,nonatomic) int changesetType;                                               //@synthesize changesetType=_changesetType - In the implementation block
@property (nonatomic,copy) NSDictionary * downloadPropertiesForStoppedDownloads;              //@synthesize downloadProperties=_downloadProperties - In the implementation block
@property (assign,nonatomic) long long networkType;                                           //@synthesize networkType=_networkType - In the implementation block
-(id)initWithPolicyIdentifiers:(id)arg1 ;
-(int)changesetType;
-(void)setChangesetType:(int)arg1 ;
-(NSDictionary *)downloadPropertiesForStoppedDownloads;
-(void)setDownloadPropertiesForStoppedDownloads:(NSDictionary *)arg1 ;
-(NSSet *)policyIdentifiers;
-(void)setPolicyIdentifiers:(NSSet *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNetworkType:(long long)arg1 ;
-(long long)networkType;
@end

