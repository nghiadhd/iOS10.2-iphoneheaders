/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CKRecordID, BRCItemID, NSString, NSNumber, BRCProgress, CKRecord;


@protocol BRCTransfer
@property (nonatomic,readonly) CKRecordID * recordID; 
@property (nonatomic,readonly) CKRecordID * secondaryRecordID; 
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) NSString * stageID; 
@property (nonatomic,readonly) NSNumber * transferID; 
@property (nonatomic,readonly) NSString * etag; 
@property (nonatomic,readonly) unsigned long long totalSize; 
@property (nonatomic,readonly) BRCProgress * progress; 
@property (assign,nonatomic) BOOL progressPublished; 
@property (assign,nonatomic) unsigned long long doneSize; 
@property (nonatomic,retain) CKRecord * record; 
@property (nonatomic,retain) CKRecord * secondaryRecord; 
@required
-(BRCProgress *)progress;
-(CKRecordID *)recordID;
-(NSString *)etag;
-(unsigned long long)totalSize;
-(CKRecord *)record;
-(BRCItemID *)itemID;
-(NSString *)stageID;
-(NSNumber *)transferID;
-(void)setProgressPublished:(BOOL)arg1;
-(CKRecordID *)secondaryRecordID;
-(BOOL)progressPublished;
-(unsigned long long)doneSize;
-(void)setDoneSize:(unsigned long long)arg1;
-(CKRecord *)secondaryRecord;
-(void)setSecondaryRecord:(id)arg1;
-(void)setRecord:(id)arg1;

@end

