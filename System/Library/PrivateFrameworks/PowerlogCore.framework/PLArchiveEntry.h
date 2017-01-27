/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLEntry.h>

@class NSString, NSDate;

@interface PLArchiveEntry : PLEntry {

	BOOL _systemTimeOffsetModified;
	NSString* _crPath;

}

@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * compressedPath; 
@property (nonatomic,readonly) NSString * crPath;                         //@synthesize crPath=_crPath - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (readonly) NSString * uuid; 
@property (assign,nonatomic) double systemTimeOffset; 
@property (readonly) BOOL systemTimeOffsetModified;                       //@synthesize systemTimeOffsetModified=_systemTimeOffsetModified - In the implementation block
@property (readonly) BOOL fullMode; 
@property (assign,nonatomic) long long stage; 
@property (assign,nonatomic) unsigned long long numAttempts; 
@property (nonatomic,retain) NSDate * syncedOffDate; 
@property (nonatomic,retain) NSDate * removedDate; 
@property (assign,nonatomic) long long mainDBSizeAtStart; 
@property (nonatomic,readonly) BOOL syncedOff; 
@property (nonatomic,readonly) BOOL removed; 
+(void)load;
+(id)storageQueue;
+(id)entryKey;
-(NSString *)name;
-(NSString *)path;
-(void)log;
-(long long)stage;
-(void)setStage:(long long)arg1 ;
-(NSString *)uuid;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)systemTimeOffset;
-(NSString *)compressedPath;
-(unsigned long long)numAttempts;
-(NSDate *)syncedOffDate;
-(NSDate *)removedDate;
-(long long)mainDBSizeAtStart;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 andUUID:(id)arg3 ;
-(void)setSystemTimeOffset:(double)arg1 ;
-(void)setNumAttempts:(unsigned long long)arg1 ;
-(void)setSyncedOffDate:(NSDate *)arg1 ;
-(BOOL)syncedOff;
-(void)setRemovedDate:(NSDate *)arg1 ;
-(void)setMainDBSizeAtStart:(long long)arg1 ;
-(NSString *)crPath;
-(BOOL)systemTimeOffsetModified;
-(BOOL)fullMode;
-(id)initEntryWithRawData:(id)arg1 ;
-(id)initWithMetadata:(id)arg1 ;
-(BOOL)removed;
@end

