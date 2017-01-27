/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PowerlogCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_semaphore;
@class NSMutableDictionary, NSDictionary, NSDate, NSString, NSObject, NSMutableArray, NSArray;

@interface PLEntry : NSObject <NSCopying> {

	BOOL _existsInDB;
	BOOL _isErrorEntry;
	BOOL _writeToDB;
	NSMutableDictionary* _dictionary;
	NSDictionary* _entryDefinition;
	NSDate* _entryDate;
	NSString* _entryKey;
	long long _entryID;
	NSObject*<OS_dispatch_semaphore> _sem;

}

@property (retain) NSMutableDictionary * dictionary;                            //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;              //@synthesize sem=_sem - In the implementation block
@property (readonly) NSMutableArray * keys; 
@property (getter=allValues,readonly) NSMutableArray * values; 
@property (readonly) BOOL hasDynamicKeys; 
@property (readonly) BOOL hasArrayKeys; 
@property (readonly) NSArray * definedKeys; 
@property (readonly) NSArray * dynamicKeys; 
@property (readonly) NSArray * arrayKeys; 
@property (assign) BOOL existsInDB;                                             //@synthesize existsInDB=_existsInDB - In the implementation block
@property (assign) BOOL isErrorEntry;                                           //@synthesize isErrorEntry=_isErrorEntry - In the implementation block
@property (assign) BOOL writeToDB;                                              //@synthesize writeToDB=_writeToDB - In the implementation block
@property (nonatomic,retain) NSDictionary * entryDefinition;                    //@synthesize entryDefinition=_entryDefinition - In the implementation block
@property (nonatomic,retain) NSDate * entryDate;                                //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,retain) NSString * entryKey;                               //@synthesize entryKey=_entryKey - In the implementation block
@property (readonly) id subEntryKey; 
@property (assign,nonatomic) long long entryID;                                 //@synthesize entryID=_entryID - In the implementation block
+(void)load;
+(id)entryWithEntryKey:(id)arg1 withData:(id)arg2 ;
+(void)registerEntry:(Class)arg1 ;
+(Class)classForEntryKey:(id)arg1 ;
+(id)summarizeAggregateEntries:(id)arg1 withPrimaryKeys:(id)arg2 ;
+(id)entryWithEntryKey:(id)arg1 withRawData:(id)arg2 ;
+(id)entryKey;
+(id)summarizeAggregateEntries:(id)arg1 ;
-(id)init;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(long long)compare:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(long long)compare:(id)arg1 options:(short)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allValues;
-(NSMutableArray *)keys;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)setEntryDate:(NSDate *)arg1 ;
-(NSDate *)entryDate;
-(id)subEntryKey;
-(BOOL)writeToDB;
-(void)setEntryID:(long long)arg1 ;
-(BOOL)existsInDB;
-(NSDictionary *)entryDefinition;
-(void)setEntryKey:(NSString *)arg1 ;
-(id)initWithEntryKey:(id)arg1 withData:(id)arg2 ;
-(short)formaterForKey:(id)arg1 ;
-(int)staticArraySizeForKey:(id)arg1 ;
-(id)definitionForKey:(id)arg1 ;
-(BOOL)hasDynamicKeys;
-(BOOL)hasArrayKeys;
-(void)setExistsInDB:(BOOL)arg1 ;
-(NSArray *)arrayKeys;
-(id)initEntryWithData:(id)arg1 ;
-(id)initWithEntryDate:(id)arg1 ;
-(void)checkOverridesEntryDateWithNowDate:(id)arg1 ;
-(void)setObjectsFromData:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)sem;
-(id)unitForKey:(id)arg1 ;
-(void)loadDynamicKeys;
-(BOOL)isKeyDynamic:(id)arg1 ;
-(BOOL)isKeyAggregateValue:(id)arg1 ;
-(id)keyValuePathForKey:(id)arg1 ;
-(BOOL)filterEntryLogging;
-(BOOL)isErrorEntry;
-(void)setEntryDefinition:(NSDictionary *)arg1 ;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)initWithEntryKey:(id)arg1 withDate:(id)arg2 ;
-(id)initWithEntryKey:(id)arg1 withRawData:(id)arg2 ;
-(id)serialized;
-(id)initWithEntryKey:(id)arg1 ;
-(void)setIsErrorEntry:(BOOL)arg1 ;
-(NSString *)entryKey;
-(long long)entryID;
-(NSArray *)dynamicKeys;
-(id)initEntryWithRawData:(id)arg1 ;
-(NSArray *)definedKeys;
-(id)serializedForJSON;
-(void)setWriteToDB:(BOOL)arg1 ;
-(void)setObjectsFromRawData:(id)arg1 ;
-(void)setDynamicObjectsFromRawData:(id)arg1 ;
@end

