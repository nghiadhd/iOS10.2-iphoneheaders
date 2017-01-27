/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHObject.h>
#import <libobjc.A.dylib/PXPerson.h>

@class NSString;

@interface PHPerson : PHObject <PXPerson> {

	BOOL _inPersonNamingModel;
	BOOL _verified;
	NSString* _name;
	NSString* _displayName;
	long long _type;
	long long _manualOrder;
	NSString* _personUri;
	long long _faceCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) long long type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long manualOrder;                                              //@synthesize manualOrder=_manualOrder - In the implementation block
@property (nonatomic,readonly) NSString * personUri;                                               //@synthesize personUri=_personUri - In the implementation block
@property (getter=isInPersonNamingModel,nonatomic,readonly) BOOL inPersonNamingModel;              //@synthesize inPersonNamingModel=_inPersonNamingModel - In the implementation block
@property (nonatomic,readonly) long long faceCount;                                                //@synthesize faceCount=_faceCount - In the implementation block
@property (nonatomic,readonly) BOOL verified;                                                      //@synthesize verified=_verified - In the implementation block
+(id)px_titleStringForPeople:(id)arg1 ;
+(id)_px_titleStringForPeople:(id)arg1 singlePersonFallback:(id)arg2 groupFallback:(id)arg3 ;
+(id)px_slideshowTitleStringForPeople:(id)arg1 ;
+(id)px_memoryTitleStringFromPeople:(id)arg1 ;
+(id)fullNameFromContact:(id)arg1 ;
+(id)displayNameFromContact:(id)arg1 ;
+(id)managedEntityName;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)identifierCode;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(BOOL)managedObjectSupportsPersonFilters;
+(id)fetchPersonWithFace:(id)arg1 options:(id)arg2 ;
+(id)fetchAssociatedPersonForFaceGroup:(id)arg1 withOptions:(id)arg2 ;
+(id)fetchHomePersonUUIDsGroupedByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonCountGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2 ;
+(long long)_faceSuggestionForPerson:(id)arg1 confirmedFaceCollections:(id)arg2 rejectedFaceCollections:(id)arg3 options:(id)arg4 fromClient:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)_faceSuggestionMarkedAsConfirmed:(BOOL)arg1 fromFaceCollection:(id)arg2 options:(id)arg3 ;
+(id)_packageSuggestionList:(id)arg1 options:(id)arg2 ;
+(id)_convertFaceSuggestionToFaceCollection:(id)arg1 options:(id)arg2 ;
+(id)faceSuggestionForPerson:(id)arg1 confirmedFaceCollections:(id)arg2 rejectedFaceCollections:(id)arg3 options:(id)arg4 ;
+(id)fetchType;
+(id)fetchPersonsInAsset:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsWithOptions:(id)arg1 ;
+(long long)faceSuggestionForPerson:(id)arg1 confirmedFaceCollections:(id)arg2 rejectedFaceCollections:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
+(id)fetchPersonsWithType:(long long)arg1 options:(id)arg2 ;
+(id)fetchPersonsForAssetCollection:(id)arg1 options:(id)arg2 ;
-(unsigned long long)numberOfAssets;
-(void)requestFaceTileImageWithTargetSize:(CGSize)arg1 cropFactor:(unsigned long long)arg2 round:(BOOL)arg3 cacheResult:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)px_displayName;
-(NSString *)description;
-(NSString *)name;
-(long long)type;
-(NSString *)displayName;
-(long long)manualOrder;
-(NSString *)personUri;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(BOOL)isInPersonNamingModel;
-(BOOL)verified;
-(long long)faceCount;
@end
