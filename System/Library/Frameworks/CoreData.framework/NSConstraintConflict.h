/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSManagedObject, NSDictionary;

@interface NSConstraintConflict : NSObject {

	NSArray* _constraint;
	NSManagedObject* _databaseObject;
	NSDictionary* _databaseSnapshot;
	NSDictionary* _conflictedValues;
	NSArray* _conflictingObjects;
	NSArray* _conflictingSnapshots;

}

@property (retain,readonly) NSArray * constraint;                          //@synthesize constraint=_constraint - In the implementation block
@property (retain,readonly) NSDictionary * constraintValues;               //@synthesize conflictedValues=_conflictedValues - In the implementation block
@property (retain,readonly) NSManagedObject * databaseObject;              //@synthesize databaseObject=_databaseObject - In the implementation block
@property (retain,readonly) NSDictionary * databaseSnapshot;               //@synthesize databaseSnapshot=_databaseSnapshot - In the implementation block
@property (retain,readonly) NSArray * conflictingObjects;                  //@synthesize conflictingObjects=_conflictingObjects - In the implementation block
@property (retain,readonly) NSArray * conflictingSnapshots;                //@synthesize conflictingSnapshots=_conflictingSnapshots - In the implementation block
-(NSManagedObject *)databaseObject;
-(NSArray *)conflictingObjects;
-(id)initWithConstraint:(id)arg1 databaseObject:(id)arg2 databaseSnapshot:(id)arg3 conflictingObjects:(id)arg4 conflictingSnapshots:(id)arg5 ;
-(BOOL)_isDBConflict;
-(NSDictionary *)constraintValues;
-(NSArray *)conflictingSnapshots;
-(NSDictionary *)databaseSnapshot;
-(void)dealloc;
-(id)description;
-(BOOL)supportsSecureCoding;
-(NSArray *)constraint;
@end

