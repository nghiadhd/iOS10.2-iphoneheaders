/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NMRPlaybackQueueDelegate;
#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
@class _NMRPlaybackQueue, NSObject, NSData;

@interface NMRPlaybackQueue : NSObject {

	_NMRPlaybackQueue* _currentPlaybackQueue;
	MROriginRef _mediaRemoteOrigin;
	BOOL _observingMediaRemote;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<NMRPlaybackQueueDelegate> _delegate;
	SCD_Struct_NM10 _observedRange;

}

@property (assign,nonatomic,__weak) id<NMRPlaybackQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SCD_Struct_NM10 observedRange;                             //@synthesize observedRange=_observedRange - In the implementation block
@property (nonatomic,readonly) NSData * fullPlaybackQueueData; 
-(id)init;
-(void)setDelegate:(id<NMRPlaybackQueueDelegate>)arg1 ;
-(void)dealloc;
-(id<NMRPlaybackQueueDelegate>)delegate;
-(void)updateWithData:(id)arg1 ;
-(void)_refreshCurrentPlaybackQueueFromMediaRemote;
-(void*)_mediaRemotePlaybackQueueWithRange:(SCD_Struct_NM10)arg1 includeMetadata:(BOOL)arg2 ;
-(id)_metadataForItemWithIdentifier:(id)arg1 ;
-(SCD_Struct_NM10)observedRange;
-(BOOL)_needsUpdateForMediaRemoteQueue:(void*)arg1 ;
-(void)_updateWithMediaRemoteQueue:(void*)arg1 metadataQueue:(void*)arg2 ;
-(SCD_Struct_NM10)_rangeOfItemsNeedingMetadataForMediaRemoteQueue:(void*)arg1 ;
-(id)_itemWithIdentifier:(id)arg1 ;
-(BOOL)_needsMetadataForMediaRemoteItem:(MRContentItemRef)arg1 ;
-(void)beginObservingMediaRemotePlaybackQueueForOrigin:(MROriginRef)arg1 ;
-(NSData *)fullPlaybackQueueData;
-(void*)copyFullMediaRemotePlaybackQueueIncludingMetadata:(BOOL)arg1 ;
-(void*)copyMediaRemotePlaybackQueueWithRange:(SCD_Struct_NM10)arg1 includeMetadata:(BOOL)arg2 ;
-(id)deltaPlaybackQueueDataFromPreviousData:(id)arg1 invalidatedMetadataIdentifiers:(id)arg2 ;
-(void)_updateMetadataWithMediaRemoteItems:(id)arg1 ;
-(void)setObservedRange:(SCD_Struct_NM10)arg1 ;
@end

