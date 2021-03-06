/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPObjectDelegate;
@class NSUUID, TSPUnknownContent, TSPComponent, TSUUUIDPath, NSString, TSPObjectContext;

@interface TSPObject : NSObject {

	Aq _identifier;
	Aq _modifyObjectToken;
	NSUUID* _UUID;
	long long _unarchiverIdentifier;
	TSPUnknownContent* _unknownContent;
	TSPComponent* _component;
	id<TSPObjectDelegate> _delegate;

}

@property (nonatomic,readonly) TSUUUIDPath * objectUUIDPath; 
@property (nonatomic,readonly) BOOL tsp_isInDocument; 
@property (assign,nonatomic) long long tsp_identifier; 
@property (nonatomic,readonly) long long tsp_unarchiverIdentifier;                       //@synthesize unarchiverIdentifier=_unarchiverIdentifier - In the implementation block
@property (nonatomic,readonly) TSPUnknownContent * tsp_unknownContent;                   //@synthesize unknownContent=_unknownContent - In the implementation block
@property (assign,nonatomic) long long tsp_modifyObjectToken; 
@property (assign,nonatomic,__weak) TSPComponent * tsp_component;                        //@synthesize component=_component - In the implementation block
@property (assign,nonatomic,__weak) id<TSPObjectDelegate> tsp_delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL needsArchiving; 
@property (nonatomic,readonly) BOOL isCommandObject; 
@property (nonatomic,copy) NSUUID * objectUUID; 
@property (nonatomic,readonly) TSPObject * componentRootObject; 
@property (nonatomic,readonly) BOOL allowsImplicitComponentOwnership; 
@property (nonatomic,readonly) BOOL shouldDelayArchiving; 
@property (nonatomic,readonly) unsigned delayedArchivingPriority; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) BOOL isComponentRoot; 
@property (nonatomic,readonly) BOOL storeOutsideObjectArchive; 
@property (nonatomic,readonly) unsigned long long allowedObjectTargetTypes; 
@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) NSString * tsp_description; 
@property (nonatomic,readonly) BOOL tsp_isPersisted; 
+(BOOL)needsObjectUUID;
+(id)newObjectForUnarchiver:(id)arg1 ;
+(BOOL)tsp_isTransientObjectIdentifier:(long long)arg1 ;
+(id)tsp_deserializeFromData:(id)arg1 options:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void)deallocSOS;
-(id)initBaseObjectWithContext:(id)arg1 ;
-(NSString *)packageLocator;
-(void)willModifyForUpgrade;
-(id)initFromUnarchiver:(id)arg1 ;
-(id)initBaseObjectFromUnarchiver:(id)arg1 ;
-(void)setObjectUUID:(id)arg1 updatingObjectUUIDMap:(BOOL)arg2 ;
-(void)willModify;
-(id)tsp_descriptionWithDepth:(unsigned long long)arg1 ;
-(BOOL)needsArchiving;
-(id)initDocumentObjectWithContext:(id)arg1 ;
-(void)performBlockIgnoringModifications:(/*^block*/id)arg1 ;
-(BOOL)isComponentRoot;
-(BOOL)storeOutsideObjectArchive;
-(unsigned long long)allowedObjectTargetTypes;
-(void)willModifyToComponentRootObject:(id)arg1 ;
-(TSPObject *)componentRootObject;
-(BOOL)allowsImplicitComponentOwnership;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg1 ;
-(BOOL)isCommandObject;
-(BOOL)tsp_isPersisted;
-(void)saveToArchiver:(id)arg1 ;
-(void)didFinishUnarchiving;
-(void)resetObjectUUIDWithoutUpdatingObjectUUIDMap;
-(NSString *)tsp_description;
-(long long)tsp_identifier;
-(void)setTsp_identifier:(long long)arg1 ;
-(long long)tsp_modifyObjectToken;
-(void)setTsp_modifyObjectToken:(long long)arg1 ;
-(long long)tsp_unarchiverIdentifier;
-(TSPUnknownContent *)tsp_unknownContent;
-(TSPComponent *)tsp_component;
-(void)setTsp_component:(TSPComponent *)arg1 ;
-(id<TSPObjectDelegate>)tsp_delegate;
-(void)setTsp_delegate:(id<TSPObjectDelegate>)arg1 ;
-(void)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 objectMap:(id*)arg3 error:(id*)arg4 ;
-(id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)tsp_serializeToDataWithOptions:(id)arg1 dataReferences:(id*)arg2 error:(id*)arg3 ;
-(id)tsp_serializeToDataWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)tsp_deepCopyWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)tsp_deepCopyWithOptions:(id)arg1 ;
-(void)wasAddedToDocumentDuringUnarchiveWithContext:(id)arg1 ;
-(id)tsp_objectInfoWithDepth:(unsigned long long)arg1 ;
-(id)tsp_referencedData;
-(id)tsp_referencedObjects;
-(id)tsp_referencedObjectUUIDs;
-(void)wasAddedToDocumentWithContext:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)tsp_isInDocument;
-(TSUUUIDPath *)objectUUIDPath;
-(void)wasAddedToDocumentWithContext:(id)arg1 ;
-(void)wasAddedToDocumentDuringImportWithContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentWithContext:(id)arg1 ;
-(void)didInitFromSOS;
-(id)objectLocale;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(BOOL)documentIsRTL;
-(id)owningDocument;
-(id)init;
-(void)dealloc;
-(TSPObjectContext *)context;
-(id)initWithContext:(id)arg1 ;
-(id)initCommon;
-(NSUUID *)objectUUID;
-(void)setObjectUUID:(NSUUID *)arg1 ;
-(id)documentRoot;
@end

