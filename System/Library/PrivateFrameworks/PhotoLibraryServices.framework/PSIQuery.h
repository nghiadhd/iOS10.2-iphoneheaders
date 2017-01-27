/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PSIDatabase, NSObject, NSString, NSArray;

@interface PSIQuery : NSObject {

	PSIDatabase* _idx;
	NSObject*<OS_dispatch_queue> _syncQueue;
	/*^block*/id _earlyNotificationHandler;
	BOOL _didStart;
	BOOL _isCanceled;
	BOOL _isWildcardQuery;
	int _queryId;
	NSString* _searchText;
	NSArray* _searchTokens;

}

@property (nonatomic,readonly) int queryId;                             //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,readonly) BOOL isWildcardQuery;                    //@synthesize isWildcardQuery=_isWildcardQuery - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchText;              //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) NSArray * searchTokens;                    //@synthesize searchTokens=_searchTokens - In the implementation block
@property (getter=isCanceled,readonly) BOOL canceled; 
-(void)cancel;
-(void)dealloc;
-(NSString *)searchText;
-(id)initWithQueryId:(int)arg1 index:(id)arg2 searchText:(id)arg3 isWildcardQuery:(BOOL)arg4 ;
-(void)setSearchTokens:(NSArray *)arg1 ;
-(int)queryId;
-(BOOL)isWildcardQuery;
-(NSArray *)searchTokens;
-(void)setEarlyResultsNotificationHandler:(/*^block*/id)arg1 ;
-(void)runWithResultsHandler:(/*^block*/id)arg1 ;
-(BOOL)isCanceled;
@end

