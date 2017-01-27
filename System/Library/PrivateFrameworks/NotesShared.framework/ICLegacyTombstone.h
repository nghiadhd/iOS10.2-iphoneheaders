/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSString, NSDate;

@interface ICLegacyTombstone : ICCloudSyncingObject

@property (nonatomic,retain) ICAccount * account; 
@property (assign,nonatomic) short type; 
@property (nonatomic,retain) NSString * contentHashAtImport; 
@property (nonatomic,retain) NSDate * modificationDateAtImport; 
+(id)legacyTombstonesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)tombstoneIdentifierForObjectIdentifier:(id)arg1 type:(short)arg2 ;
+(id)legacyTombstoneWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newLegacyTombstoneWithIdentifier:(id)arg1 type:(short)arg2 context:(id)arg3 ;
+(id)addLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3 ;
+(void)removeLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 ;
+(id)allLegacyTombstones;
+(void)addLegacyTombstoneForNote:(id)arg1 ;
+(void)removeLegacyTombstoneForNote:(id)arg1 ;
+(void)addLegacyTombstoneForFolder:(id)arg1 ;
+(void)removeLegacyTombstoneForFolder:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2 ;
+(id)newCloudObjectForRecord:(id)arg1 context:(id)arg2 ;
+(id)allCloudObjectsInContext:(id)arg1 ;
+(BOOL)hasTombstonePrefix:(id)arg1 ;
+(short)tombstoneTypeFromRecordName:(id)arg1 ;
-(id)ic_loggingValues;
-(void)deleteFromLocalDatabase;
-(void)mergeDataFromRecord:(id)arg1 ;
-(BOOL)hasAllMandatoryFields;
-(id)newlyCreatedRecord;
-(BOOL)isInICloudAccount;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(id)recordType;
-(id)recordZoneName;
@end

