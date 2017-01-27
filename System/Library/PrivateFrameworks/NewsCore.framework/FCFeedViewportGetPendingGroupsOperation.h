/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCFeedRefreshSession, NSArray, FCFeedGroupEmittingContext, NSDictionary;

@interface FCFeedViewportGetPendingGroupsOperation : FCOperation {

	FCFeedRefreshSession* _refreshSession;
	NSArray* _feedGroupEmitters;
	FCFeedGroupEmittingContext* _groupEmittingContext;
	NSDictionary* _toCursorsByEmitterID;
	/*^block*/id _emitGroupsCompletionHandler;
	FCFeedRefreshSession* _resultRefreshSession;

}

@property (nonatomic,retain) FCFeedRefreshSession * resultRefreshSession;                    //@synthesize resultRefreshSession=_resultRefreshSession - In the implementation block
@property (nonatomic,retain) FCFeedRefreshSession * refreshSession;                          //@synthesize refreshSession=_refreshSession - In the implementation block
@property (nonatomic,retain) NSArray * feedGroupEmitters;                                    //@synthesize feedGroupEmitters=_feedGroupEmitters - In the implementation block
@property (nonatomic,retain) FCFeedGroupEmittingContext * groupEmittingContext;              //@synthesize groupEmittingContext=_groupEmittingContext - In the implementation block
@property (nonatomic,retain) NSDictionary * toCursorsByEmitterID;                            //@synthesize toCursorsByEmitterID=_toCursorsByEmitterID - In the implementation block
@property (nonatomic,copy) id emitGroupsCompletionHandler;                                   //@synthesize emitGroupsCompletionHandler=_emitGroupsCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSArray *)feedGroupEmitters;
-(FCFeedRefreshSession *)refreshSession;
-(FCFeedGroupEmittingContext *)groupEmittingContext;
-(void)setRefreshSession:(FCFeedRefreshSession *)arg1 ;
-(void)setFeedGroupEmitters:(NSArray *)arg1 ;
-(void)setGroupEmittingContext:(FCFeedGroupEmittingContext *)arg1 ;
-(void)setToCursorsByEmitterID:(NSDictionary *)arg1 ;
-(NSDictionary *)toCursorsByEmitterID;
-(void)setEmitGroupsCompletionHandler:(id)arg1 ;
-(BOOL)_isErrorTransient:(id)arg1 ;
-(id)_exhaustGroupEmitter:(id)arg1 inRefreshSession:(id)arg2 ;
-(id)_advanceRefreshSessionToNextInterestedEmitter:(id)arg1 ;
-(void)setResultRefreshSession:(FCFeedRefreshSession *)arg1 ;
-(id)emitGroupsCompletionHandler;
-(FCFeedRefreshSession *)resultRefreshSession;
@end

