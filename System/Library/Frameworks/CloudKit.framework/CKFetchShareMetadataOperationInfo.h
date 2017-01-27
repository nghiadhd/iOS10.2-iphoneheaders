/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class NSArray;

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo {

	BOOL _shouldFetchRootRecord;
	NSArray* _shareURLsToFetch;
	NSArray* _rootRecordDesiredKeys;

}

@property (nonatomic,retain) NSArray * shareURLsToFetch;                   //@synthesize shareURLsToFetch=_shareURLsToFetch - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                   //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (nonatomic,retain) NSArray * rootRecordDesiredKeys;              //@synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)shareURLsToFetch;
-(NSArray *)rootRecordDesiredKeys;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(void)setShareURLsToFetch:(NSArray *)arg1 ;
-(void)setRootRecordDesiredKeys:(NSArray *)arg1 ;
@end

