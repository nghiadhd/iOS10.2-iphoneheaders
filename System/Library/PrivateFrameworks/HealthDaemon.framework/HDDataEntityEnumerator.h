/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteQueryDescriptor.h>

@class HDProfile, NSMutableDictionary, HKObjectType, _HKFilter, NSNumber, NSArray;

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor {

	HDProfile* _profile;
	NSMutableDictionary* _encodingOptions;
	BOOL _useLeftJoin;
	HKObjectType* _objectType;
	_HKFilter* _filter;
	NSNumber* _sourceIdentifier;
	/*^block*/id _authorizationFilter;
	NSNumber* _anchor;
	NSNumber* _deletedObjectsAnchor;
	NSArray* _sortDescriptors;

}

@property (nonatomic,readonly) HKObjectType * objectType;                  //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) _HKFilter * filter;                           //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSNumber * sourceIdentifier;                  //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy) id authorizationFilter;                         //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,retain) NSNumber * anchor;                            //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSNumber * deletedObjectsAnchor;              //@synthesize deletedObjectsAnchor=_deletedObjectsAnchor - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                      //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilter:(_HKFilter *)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(NSNumber *)anchor;
-(void)setAnchor:(NSNumber *)arg1 ;
-(NSNumber *)sourceIdentifier;
-(void)setSourceIdentifier:(NSNumber *)arg1 ;
-(_HKFilter *)filter;
-(void)setAuthorizationFilter:(id)arg1 ;
-(void)setEncodingOption:(id)arg1 forKey:(id)arg2 ;
-(BOOL)enumerateWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(HKObjectType *)objectType;
-(void)addEncodingOptionsFromDictionary:(id)arg1 ;
-(id)initWithObjectType:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3 ;
-(id)initWithEntityClass:(Class)arg1 profile:(id)arg2 ;
-(id)authorizationFilter;
-(BOOL)enumerateIncludingDeletedObjects:(BOOL)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(void)setDeletedObjectsAnchor:(NSNumber *)arg1 ;
-(BOOL)_enumerateObjectsOnDatabase:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setColumnNamesAndSortOrderingsOnDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)_prepareDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)_joinClauseForProperties:(id)arg1 ;
-(id)encodingOptionForKey:(id)arg1 ;
-(NSNumber *)deletedObjectsAnchor;
@end

