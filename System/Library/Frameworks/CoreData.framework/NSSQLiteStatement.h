/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSMutableArray, NSString, NSCachedFetchRequestInfo;

@interface NSSQLiteStatement : NSObject {

	NSSQLEntity* _entity;
	NSMutableArray* _bindVariables;
	NSMutableArray* _bindIntarrays;
	NSString* _sqlString;
	BOOL _isImpossibleCondition;
	BOOL _trackChangedRowCount;
	NSSQLEntity* _fakeEntityForFetch;
	NSCachedFetchRequestInfo* _cachedStatementInfo;
	sqlite3_stmtRef _cachedSQLiteStatement;
	void* _owner;

}

@property (nonatomic,retain) NSCachedFetchRequestInfo * cachedStatementInfo;              //@synthesize cachedStatementInfo=_cachedStatementInfo - In the implementation block
@property (assign,nonatomic) BOOL trackChangedRowCount;                                   //@synthesize trackChangedRowCount=_trackChangedRowCount - In the implementation block
-(id)fakeEntityForFetch;
-(unsigned)addBindVariable:(id)arg1 ;
-(id)sqlString;
-(id)initWithEntity:(id)arg1 ;
-(id)initWithEntity:(id)arg1 sqlString:(id)arg2 ;
-(void)setImpossibleCondition:(BOOL)arg1 ;
-(void)setSQLString:(id)arg1 ;
-(void)setBindIntarrays:(id)arg1 ;
-(void)setBindVariables:(id)arg1 ;
-(void)cacheFakeEntityForFetch:(id)arg1 ;
-(void)setCachedStatementInfo:(NSCachedFetchRequestInfo *)arg1 ;
-(id)bindVariables;
-(BOOL)isImpossibleCondition;
-(void)setTrackChangedRowCount:(BOOL)arg1 ;
-(id)bindIntarrays;
-(sqlite3_stmtRef)cachedSQLiteStatement;
-(void)setCachedSQLiteStatement:(sqlite3_stmtRef)arg1 forConnection:(id)arg2 ;
-(void)removeAllBindVariables;
-(unsigned)addBindIntarray:(id)arg1 ;
-(void)removeAllBindIntarrays;
-(NSCachedFetchRequestInfo *)cachedStatementInfo;
-(BOOL)trackChangedRowCount;
-(void)dealloc;
-(id)description;
-(id)entity;
-(BOOL)isReadOnly;
-(void)clearCaches:(BOOL)arg1 ;
@end

