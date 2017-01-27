/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCFeedRefreshSession, FCFeedGroup, NSString, FCCloudContext, NSArray, FCFeedGroupEmittingContext;

@interface FCFeedViewportInsertPendingGroupOperation : FCOperation {

	FCFeedRefreshSession* _resultRefreshSession;
	FCFeedGroup* _resultInsertedGroup;
	NSString* _resultDeletedElementID;
	FCCloudContext* _context;
	FCFeedRefreshSession* _refreshSession;
	NSArray* _feedGroupEmitters;
	FCFeedGroupEmittingContext* _groupEmittingContext;
	NSArray* _internalElements;
	/*^block*/id _insertGroupCompletionHandler;

}

@property (nonatomic,retain) FCCloudContext * context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedRefreshSession * refreshSession;                          //@synthesize refreshSession=_refreshSession - In the implementation block
@property (nonatomic,retain) NSArray * feedGroupEmitters;                                    //@synthesize feedGroupEmitters=_feedGroupEmitters - In the implementation block
@property (nonatomic,retain) FCFeedGroupEmittingContext * groupEmittingContext;              //@synthesize groupEmittingContext=_groupEmittingContext - In the implementation block
@property (nonatomic,retain) NSArray * internalElements;                                     //@synthesize internalElements=_internalElements - In the implementation block
@property (nonatomic,copy) id insertGroupCompletionHandler;                                  //@synthesize insertGroupCompletionHandler=_insertGroupCompletionHandler - In the implementation block
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSArray *)feedGroupEmitters;
-(NSArray *)internalElements;
-(FCFeedRefreshSession *)refreshSession;
-(FCFeedGroupEmittingContext *)groupEmittingContext;
-(id)_nextGroupToInsert:(id*)arg1 ;
-(void)_finishWithInsertedGroup:(id)arg1 backedByPendingGroup:(id)arg2 forEmitter:(id)arg3 ;
-(id)insertGroupCompletionHandler;
-(void)setRefreshSession:(FCFeedRefreshSession *)arg1 ;
-(void)setFeedGroupEmitters:(NSArray *)arg1 ;
-(void)setGroupEmittingContext:(FCFeedGroupEmittingContext *)arg1 ;
-(void)setInternalElements:(NSArray *)arg1 ;
-(void)setInsertGroupCompletionHandler:(id)arg1 ;
@end
