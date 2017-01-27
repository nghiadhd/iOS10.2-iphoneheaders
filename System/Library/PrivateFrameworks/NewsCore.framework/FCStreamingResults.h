/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCStreaming;
#import <NewsCore/NewsCore-Structs.h>
@class NSMutableArray, FCAsyncSerialQueue, NSHashTable;

@interface FCStreamingResults : NSObject {

	NSMutableArray* _results;
	FCAsyncSerialQueue* _serialQueue;
	NSHashTable* _observers;
	id<FCStreaming> _underlyingStream;

}

@property (nonatomic,retain) NSMutableArray * results;                        //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * serialQueue;                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) id<FCStreaming> underlyingStream;              //@synthesize underlyingStream=_underlyingStream - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSRange range; 
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)array;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSRange)range;
-(NSMutableArray *)results;
-(void)setResults:(NSMutableArray *)arg1 ;
-(BOOL)isFinished;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(FCAsyncSerialQueue *)serialQueue;
-(void)setSerialQueue:(FCAsyncSerialQueue *)arg1 ;
-(id)objectsInRange:(NSRange)arg1 ;
-(id)initWithStream:(id)arg1 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithResults:(id)arg1 followedByStream:(id)arg2 ;
-(id<FCStreaming>)underlyingStream;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllObjectsWithBatchSize:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

