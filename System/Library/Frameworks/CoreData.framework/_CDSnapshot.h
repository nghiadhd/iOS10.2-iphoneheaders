/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSManagedObjectID, NSEntityDescription;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {

	int _cd_rc;
	int _cd_version;
	NSManagedObjectID* _cd_objectID;
	struct {
		unsigned _readOnly : 1;
		unsigned _reservedFlags : 7;
	}  _cd_flags;
	unsigned char _cd_nullFlags_;

}

@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
+(void)_entityDeallocated;
+(Class)classForEntity:(id)arg1 ;
+(unsigned)newBatchAllocation:(id*)arg1 count:(unsigned)arg2 withOwnedObjectIDs:(id*)arg3 ;
+(id)alloc;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)_snapshot_;
-(id)_descriptionValues;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopy;
-(BOOL)_isDeallocating;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(NSEntityDescription *)entity;
-(id)initWithObjectID:(id)arg1 ;
-(NSManagedObjectID *)objectID;
-(void)finalize;
@end

