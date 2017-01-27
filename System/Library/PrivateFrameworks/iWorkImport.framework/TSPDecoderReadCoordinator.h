/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPReadCoordinatorBase.h>
#import <iWorkImport/TSPReadCoordinator.h>

@protocol TSPDecoder, TSPDecoderReadCoordinatorDelegate, OS_dispatch_queue;
@class TSPObjectContext, TSPFinalizeHandlerQueue, NSObject, TSPComponent, NSMapTable, NSString;

@interface TSPDecoderReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator> {

	id<TSPDecoder> _decoder;
	TSPObjectContext* _context;
	TSPFinalizeHandlerQueue* _finalizeHandlerQueue;
	id<TSPDecoderReadCoordinatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dataQueue;
	TSPComponent* _rootObjectComponent;
	NSMapTable* _objects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isReadingFromDocument; 
-(unsigned long long)fileFormatVersion;
-(void)readRootObjectWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)endReading;
-(void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3 ;
-(BOOL)canRetainObjectReferencedByWeakLazyReference;
-(BOOL)hasDocumentVersionUUID;
-(id)initWithDecoder:(id)arg1 context:(id)arg2 finalizeHandlerQueue:(id)arg3 delegate:(id)arg4 ;
-(BOOL)isCrossDocumentPaste;
-(BOOL)isCrossAppPaste;
-(BOOL)isExternalLazyReference:(id)arg1 ;
-(void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)reader:(id)arg1 didReadLazyReference:(id)arg2 ;
-(BOOL)isReadingFromDocument;
-(void)didUpdateLazyReferenceDelegate:(id)arg1 ;
-(id)baseObjectUUID;
-(id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2 ;
-(id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3 ;
-(void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2 ;
-(long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2 ;
-(id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2 ;
-(void)reader:(id)arg1 didUnarchiveObject:(id)arg2 ;
-(id)init;
-(id)context;
-(long long)sourceType;
-(id)objectForIdentifier:(long long)arg1 ;
-(unsigned char)packageIdentifier;
@end

