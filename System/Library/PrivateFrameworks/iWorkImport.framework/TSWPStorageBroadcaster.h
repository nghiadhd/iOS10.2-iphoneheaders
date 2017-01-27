/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPStorageBroadcaster : NSObject {

	set<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver> >, std::__1::allocator<id<TSWPStorageObserver> > >* _observers;
	set<id<TSWPStorageParagraphObserver>, std::__1::less<id<TSWPStorageParagraphObserver> >, std::__1::allocator<id<TSWPStorageParagraphObserver> > >* _paragraphObservers;

}
-(void)addParagraphObserver:(id)arg1 ;
-(void)removeParagraphObserver:(id)arg1 ;
-(void)broadcastStorage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 ;
-(void)broadcastStorage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 attributeKindChanges:(id)arg5 ;
-(void)broadcastStorage:(id)arg1 didInsertParagraphsInIndexRange:(NSRange)arg2 ;
-(void)broadcastStorage:(id)arg1 didDeleteParagraphsInIndexRange:(NSRange)arg2 ;
-(void)broadcastStorage:(id)arg1 didChangeParagraphsInIndexRange:(NSRange)arg2 ;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)removeAllObservers;
@end

