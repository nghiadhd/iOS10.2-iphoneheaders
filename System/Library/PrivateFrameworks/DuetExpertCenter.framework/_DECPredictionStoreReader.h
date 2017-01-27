/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _DECSqliteDatabase;

@interface _DECPredictionStoreReader : NSObject {

	NSString* _path;
	_DECSqliteDatabase* _db;

}
-(id)init;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(id)dateOfLastPredictionForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 ;
-(id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithSqliteDatabase:(id)arg1 ;
-(id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 ;
-(void)_loadDbAsync:(BOOL)arg1 ;
-(BOOL)_tryLoadDb;
-(id)initWithInMemoryStore;
-(unsigned long long)schemaVersion;
@end

