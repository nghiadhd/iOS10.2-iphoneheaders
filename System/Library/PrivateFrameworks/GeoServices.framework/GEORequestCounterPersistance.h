/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSDateFormatter, NSObject;

@interface GEORequestCounterPersistance : NSObject {

	sqlite3Ref _db;
	sqlite3_stmtRef _insertStmt;
	NSDateFormatter* _sqlDateFormatter;
	NSObject*<OS_dispatch_queue> _queue;
	double _maxAge;
	BOOL _enabled;

}

@property (assign,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)enabled;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2 ;
-(void)incrementForApp:(id)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)incrementAtTime:(id)arg1 app:(id)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)countsStartingFrom:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)purgeOlderThan:(id)arg1 ;
-(void)createTableWithDrop:(BOOL)arg1 ;
-(void)purgeAllCounts;
@end

