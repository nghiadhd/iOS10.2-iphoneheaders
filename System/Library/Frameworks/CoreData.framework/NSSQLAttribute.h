/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSSet;

@interface NSSQLAttribute : NSSQLColumn

@property (nonatomic,readonly) NSSet * triggerKeys; 
@property (assign,getter=isConstrained,nonatomic) BOOL constrained; 
-(BOOL)isConstrained;
-(id)attributeDescription;
-(void)_setIsBackedByTrigger:(BOOL)arg1 ;
-(void)addKeyForTriggerOnRelationship:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(unsigned char)_sqlTypeForAttributeType:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(NSSet *)triggerKeys;
-(id)initForReadOnlyFetchWithExpression:(id)arg1 ;
-(BOOL)shouldIndex;
-(void)setConstrained:(BOOL)arg1 ;
-(BOOL)isBackedByTrigger;
-(void)dealloc;
-(BOOL)isUnique;
@end

