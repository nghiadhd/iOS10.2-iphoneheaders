/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPArchivableContent.h>

@class NSMutableDictionary, TSPObject, NSHashTable, NSString, NSDictionary;

@interface TSPArchiverBase : NSObject <TSPArchivableContent> {

	auto_ptr<google::protobuf::Message>* _message;
	unordered_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > >* _fieldRules;
	FieldPath* _currentFieldPath;
	NSMutableDictionary* _alternates;
	TSPObject* _object;
	unsigned long long _messageVersion;
	NSHashTable* _strongReferences;
	NSHashTable* _weakReferences;
	NSHashTable* _commandToModelReferences;
	NSHashTable* _lazyReferences;
	NSHashTable* _dataReferences;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isContentUnknown; 
@property (nonatomic,readonly) BOOL isDiff; 
@property (nonatomic,readonly) unsigned long long messageVersion; 
@property (nonatomic,readonly) const FieldPath* fieldPath; 
@property (nonatomic,readonly) TSPObject * object;                                      //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long messageVersion;                         //@synthesize messageVersion=_messageVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumSupportedVersion; 
@property (nonatomic,readonly) const FieldPath* currentFieldPath; 
@property (nonatomic,readonly) NSDictionary * alternates; 
@property (nonatomic,readonly) NSHashTable * strongReferences;                          //@synthesize strongReferences=_strongReferences - In the implementation block
@property (nonatomic,readonly) NSHashTable * weakReferences;                            //@synthesize weakReferences=_weakReferences - In the implementation block
@property (nonatomic,readonly) NSHashTable * commandToModelReferences;                  //@synthesize commandToModelReferences=_commandToModelReferences - In the implementation block
@property (nonatomic,readonly) NSHashTable * lazyReferences;                            //@synthesize lazyReferences=_lazyReferences - In the implementation block
@property (nonatomic,readonly) NSHashTable * dataReferences;                            //@synthesize dataReferences=_dataReferences - In the implementation block
@property (nonatomic,readonly) unsigned messageType; 
@property (nonatomic,readonly) long long targetType; 
@property (nonatomic,readonly) BOOL isForCopy; 
-(void)setStrongReference:(id)arg1 message:(Reference*)arg2 ;
-(void)setWeakReference:(id)arg1 message:(Reference*)arg2 ;
-(BOOL)isForCopy;
-(void)setStrongLazyReference:(id)arg1 message:(Reference*)arg2 ;
-(void)setDataReference:(id)arg1 message:(DataReference*)arg2 ;
-(void)setMustUnderstandRuleForFieldPath:(int*)arg1 ;
-(void)setRule:(int)arg1 forFieldPath:(int*)arg2 ;
-(void)setIgnoreAndPreserveRuleForFieldPath:(int*)arg1 ;
-(void)setIgnoreAndDropRuleForFieldPath:(int*)arg1 ;
-(BOOL)isDiff;
-(id)addAlternateArchiverForVersion:(unsigned long long)arg1 fieldPath:(const FieldPath*)arg2 isDiffArchiver:(BOOL)arg3 ;
-(id)alternateDiffForVersion:(unsigned long long)arg1 fieldPath:(int*)arg2 ;
-(id)alternateDiffForVersion:(unsigned long long)arg1 fieldPath:(int*)arg2 baseFieldPath:(const FieldPath*)arg3 ;
-(void)addWeakReferenceToObjectUUID:(id)arg1 ;
-(void)setWeakReferenceToObjectUUID:(id)arg1 message:(UUID*)arg2 ;
-(void)setWeakReferenceToObjectUUIDPath:(id)arg1 message:(UUIDPath*)arg2 ;
-(Message*)messageWithNewFunction:(/*function pointer*/void*)arg1 ;
-(void)setStrongReferenceArray:(id)arg1 message:(RepeatedPtrField<TSP::Reference>*)arg2 ;
-(void)setWeakReferenceArray:(id)arg1 message:(RepeatedPtrField<TSP::Reference>*)arg2 ;
-(void)setStrongLazyReferenceArray:(id)arg1 message:(RepeatedPtrField<TSP::Reference>*)arg2 ;
-(void)setWeakLazyReference:(id)arg1 message:(Reference*)arg2 ;
-(void)setDataReferenceArray:(id)arg1 message:(RepeatedPtrField<TSP::DataReference>*)arg2 ;
-(void)setMustUnderstandRuleForField:(int)arg1 ;
-(void)setIgnoreAndPreserveRuleForField:(int)arg1 ;
-(void)setIgnoreAndDropRuleForField:(int)arg1 ;
-(const FieldPath*)currentFieldPath;
-(void)pushScopeForField:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateRulesUsingBlock:(/*^block*/id)arg1 ;
-(NSDictionary *)alternates;
-(id)alternateDiffForVersion:(unsigned long long)arg1 ;
-(id)alternateDiffForVersion:(unsigned long long)arg1 field:(int)arg2 ;
-(void)setWeakReferenceToObjectUUIDData:(const UUIDData<TSP::UUIDData>*)arg1 message:(UUID*)arg2 ;
-(void)setWeakReferenceToObjectUUIDArray:(id)arg1 message:(RepeatedPtrField<TSP::UUID>*)arg2 ;
-(void)setWeakReferenceToObjectUUIDPathArray:(id)arg1 message:(RepeatedPtrField<TSP::UUIDPath>*)arg2 ;
-(void)setMessageVersion:(unsigned long long)arg1 ;
-(NSHashTable *)strongReferences;
-(NSHashTable *)weakReferences;
-(NSHashTable *)commandToModelReferences;
-(NSHashTable *)lazyReferences;
-(NSHashTable *)dataReferences;
-(const FieldPath*)fieldPath;
-(BOOL)isContentUnknown;
-(void)setSparseReferenceArray:(id)arg1 isWeak:(BOOL)arg2 message:(SparseReferenceArray*)arg3 ;
-(void)setSparseReferenceArray:(id)arg1 message:(SparseReferenceArray*)arg2 ;
-(void)setSparseWeakReferenceArray:(id)arg1 message:(SparseReferenceArray*)arg2 ;
-(void)setSparseWeakObjectUUIDReferenceArray:(id)arg1 message:(SparseUUIDArray*)arg2 ;
-(void)setSparseWeakObjectUUIDPathReferenceArray:(id)arg1 message:(SparseUUIDPathArray*)arg2 ;
-(long long)targetType;
-(id)init;
-(void)dealloc;
-(TSPObject *)object;
-(Message*)message;
-(void)releaseMessage;
-(void)cleanup;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)minimumSupportedVersion;
-(unsigned)messageType;
-(unsigned long long)messageVersion;
@end

