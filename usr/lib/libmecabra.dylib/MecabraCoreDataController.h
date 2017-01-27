/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSEntityDescription, NSURL, NSString, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSArray;

@interface MecabraCoreDataController : NSObject {

	NSEntityDescription* _entityDescription;
	NSURL* _localURL;
	NSString* _localURLLastPartOfName;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSURL* _storeURL;
	NSString* _type;
	NSArray* _storedElementsForMerge;

}

@property (nonatomic,retain) NSURL * localURL;                                                       //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,retain) NSArray * storedElementsForMerge;                                       //@synthesize storedElementsForMerge=_storedElementsForMerge - In the implementation block
@property (nonatomic,readonly) NSEntityDescription * entityDescription;                              //@synthesize entityDescription=_entityDescription - In the implementation block
@property (nonatomic,readonly) NSURL * localStoreURL; 
@property (nonatomic,readonly) NSURL * localInfoPlistURL; 
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                                                       //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSString * type;                                                        //@synthesize type=_type - In the implementation block
+(void)resetDatabaseWithType:(id)arg1 URL:(id)arg2 ;
-(NSEntityDescription *)entityDescription;
-(void)dealloc;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSURL *)localURL;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)addEntry:(id)arg1 ;
-(id)searchResultsWithValueDictionary:(id)arg1 managedObjectContext:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)entityDescriptionForContext:(id)arg1 ;
-(BOOL)dictionaryEntryHasAllRequiredKeys:(id)arg1 ;
-(BOOL)isLogging;
-(id)dictionaryValueFromManagedObject:(id)arg1 ;
-(void)logEntry:(id)arg1 operationType:(id)arg2 extraInformation:(id)arg3 ;
-(void)deleteAllMatchingEntries:(id)arg1 ;
-(NSURL *)localInfoPlistURL;
-(void)prepareURLForDatabaseFile:(id)arg1 ;
-(id)removeDuplicatesForEntry:(id)arg1 uniquingKeys:(id)arg2 sortDescriptors:(id)arg3 restrictToNumberOfElements:(unsigned long long)arg4 identifierKey:(id)arg5 ;
-(id)searchResultsWithValueDictionary:(id)arg1 ;
-(id)searchResultsWithValueDictionary:(id)arg1 sortDescriptors:(id)arg2 ;
-(void)deleteAllElements;
-(void)setValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3 ;
-(void)setDatabaseProperty:(id)arg1 forKey:(id)arg2 ;
-(id)databasePropertyForKey:(id)arg1 ;
-(id)dictionaryValuesFromManagedObjects:(id)arg1 ;
-(void)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2 ;
-(id)initWithType:(id)arg1 URL:(id)arg2 ;
-(NSURL *)localStoreURL;
-(id)newPersistentStoreWithURL:(id)arg1 ubiquityContainerIdentifier:(id)arg2 managedObjectModel:(id)arg3 ;
-(void)sendRemoteNotification;
-(NSArray *)storedElementsForMerge;
-(void)setStoredElementsForMerge:(NSArray *)arg1 ;
-(BOOL)shouldSyncDatabase;
-(id)locallyPresentUbiquitousFiles;
-(BOOL)stripUbiquitousInformationFromStore:(id)arg1 ;
-(id)entriesFromStrippedStoreURL:(id)arg1 ;
-(id)coreDataUbiquityFolderURLforStore:(id)arg1 ;
-(id)entriesToMerge;
-(void)clearStoredMergeEntries;
-(NSURL *)storeURL;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)save;
-(void)setLocalURL:(NSURL *)arg1 ;
-(void)logMessage:(id)arg1 ;
-(void)deleteEntry:(id)arg1 ;
-(id)databaseName;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)setStoreURL:(NSURL *)arg1 ;
@end

