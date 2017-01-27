/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFUbiquityImportOperation.h>
#import <libobjc.A.dylib/NSManagedObjectContextFaultingDelegate.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator, PFUbiquityTransactionLog, PFUbiquitySwitchboardEntry, NSMutableSet, PFUbiquityKnowledgeVector, NSMutableDictionary, PFUbiquityImportContext, NSError, NSString;

@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSManagedObjectContextFaultingDelegate> {

	NSManagedObjectContext* _moc;
	NSPersistentStoreCoordinator* _psc;
	PFUbiquityTransactionLog* _transactionLog;
	PFUbiquitySwitchboardEntry* _entry;
	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _updatedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	PFUbiquityKnowledgeVector* _logScore;
	NSMutableDictionary* _resolvedConflicts;
	BOOL _lockedExistingCoord;
	PFUbiquityKnowledgeVector* _initialStoreKnowledgeVector;
	PFUbiquityKnowledgeVector* _updatedStoreKnowledgeVector;
	PFUbiquityImportContext* _importContext;
	BOOL _success;
	BOOL _transactionDidRollback;
	BOOL _wroteKV;
	int _inMemorySequenceNumber;
	NSError* _operationError;
	NSMutableDictionary* _relationshipsToObjectIDsToCheck;

}

@property (readonly) NSManagedObjectContext * moc;                                                 //@synthesize moc=_moc - In the implementation block
@property (readonly) NSPersistentStoreCoordinator * psc;                                           //@synthesize psc=_psc - In the implementation block
@property (nonatomic,readonly) PFUbiquityTransactionLog * transactionLog;                          //@synthesize transactionLog=_transactionLog - In the implementation block
@property (nonatomic,readonly) NSMutableSet * insertedObjectIDs;                                   //@synthesize insertedObjectIDs=_insertedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * updatedObjectIDs;                                    //@synthesize updatedObjectIDs=_updatedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * deletedObjectIDs;                                    //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * resolvedConflicts;                            //@synthesize resolvedConflicts=_resolvedConflicts - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * logScore;                                 //@synthesize logScore=_logScore - In the implementation block
@property (assign) NSObject*<_PFUbiquityRecordImportOperationDelegate> delegate; 
@property (assign) BOOL lockedExistingCoord;                                                       //@synthesize lockedExistingCoord=_lockedExistingCoord - In the implementation block
@property (readonly) PFUbiquityKnowledgeVector * initialStoreKnowledgeVector;                      //@synthesize initialStoreKnowledgeVector=_initialStoreKnowledgeVector - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * updatedStoreKnowledgeVector;              //@synthesize updatedStoreKnowledgeVector=_updatedStoreKnowledgeVector - In the implementation block
@property (nonatomic,retain) PFUbiquityImportContext * importContext;                              //@synthesize importContext=_importContext - In the implementation block
@property (nonatomic,readonly) BOOL transactionDidRollBack;                                        //@synthesize transactionDidRollback=_transactionDidRollback - In the implementation block
@property (nonatomic,readonly) BOOL success;                                                       //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * operationError;                                           //@synthesize operationError=_operationError - In the implementation block
@property (nonatomic,readonly) BOOL wroteKV;                                                       //@synthesize wroteKV=_wroteKV - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLogScore:(PFUbiquityKnowledgeVector *)arg1 ;
-(id)initWithTransactionLog:(id)arg1 persistentStore:(id)arg2 andLocalPeerID:(id)arg3 ;
-(id)retainedDelegate;
-(NSPersistentStoreCoordinator *)psc;
-(PFUbiquityTransactionLog *)transactionLog;
-(BOOL)processObjects:(id)arg1 withState:(int)arg2 andImportContext:(id)arg3 outError:(id*)arg4 ;
-(PFUbiquityImportContext *)importContext;
-(PFUbiquityKnowledgeVector *)initialStoreKnowledgeVector;
-(BOOL)applyChangesFromStoreSaveSnapshot:(id)arg1 withImportContext:(id)arg2 withError:(id*)arg3 ;
-(PFUbiquityKnowledgeVector *)updatedStoreKnowledgeVector;
-(void)respondToStoreTransactionStateChangeNotification:(id)arg1 ;
-(NSMutableSet *)insertedObjectIDs;
-(void)notifyDelegateOfError:(id)arg1 ;
-(void)setImportContext:(PFUbiquityImportContext *)arg1 ;
-(BOOL)fillManagedObject:(id)arg1 withGlobalID:(id)arg2 fromUbiquityDictionary:(id)arg3 missingObjects:(id)arg4 importContext:(id)arg5 withError:(id*)arg6 ;
-(PFUbiquityKnowledgeVector *)logScore;
-(NSMutableDictionary *)resolvedConflicts;
-(BOOL)lockedExistingCoord;
-(void)setLockedExistingCoord:(BOOL)arg1 ;
-(void)setUpdatedStoreKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(BOOL)transactionDidRollBack;
-(BOOL)wroteKV;
-(id)init;
-(void)cancel;
-(void)setDelegate:(NSObject*<_PFUbiquityRecordImportOperationDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSObject*<_PFUbiquityRecordImportOperationDelegate>)delegate;
-(id)copy;
-(void)main;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(NSManagedObjectContext *)moc;
-(BOOL)success;
-(NSError *)operationError;
-(NSMutableSet *)updatedObjectIDs;
-(NSMutableSet *)deletedObjectIDs;
@end

