/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
@class NSString, NSInvocation, NSArray;

@interface _PBProperty : NSObject {

	NSString* _name;
	Class _objectType;
	Class _subObjectType;
	char _type;
	char _subType;
	NSInvocation* _setter;
	NSInvocation* _getter;
	NSInvocation* _has;
	NSInvocation* _count;
	NSInvocation* _convertToString;
	NSInvocation* _convertFromString;
	/*function pointer*/void* _toDictionaryReprFn;
	/*function pointer*/void* _fromDictionaryReprFn;
	NSString* _structName;
	NSArray* _structFields;
	unsigned long long _structSize;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char subType;                             //@synthesize subType=_subType - In the implementation block
@property (nonatomic,retain) Class objectType;                         //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) Class subObjectType;                      //@synthesize subObjectType=_subObjectType - In the implementation block
@property (nonatomic,readonly) BOOL isObject; 
@property (nonatomic,readonly) BOOL isStruct; 
@property (nonatomic,readonly) BOOL canConvertFromString; 
+(id)pbPropertyFor:(objc_propertyRef)arg1 type:(Class)arg2 ;
+(id)getValidPropertiesForType:(Class)arg1 withCache:(id)arg2 ;
-(id)_parseStructDefinition:(id)arg1 ;
-(id)initWith:(objc_propertyRef)arg1 type:(Class)arg2 ;
-(BOOL)instanceHasValue:(id)arg1 ;
-(BOOL)canConvertFromString;
-(BOOL)isStruct;
-(unsigned long long)getCountOfRepeatedValuesFromInstance:(id)arg1 ;
-(id)getObjValueFromInstance:(id)arg1 ;
-(void)setObjValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getStructValueFromInstance:(id)arg1 ;
-(BOOL)setStructValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getNumberValueFromInstance:(id)arg1 ;
-(void)setNumberValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getPtrArrayValueFromInstance:(id)arg1 ;
-(Class)subObjectType;
-(void)setSubObjectType:(Class)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(char)arg1 ;
-(char)type;
-(BOOL)isObject;
-(void)setSubType:(char)arg1 ;
-(char)subType;
-(void)setObjectType:(Class)arg1 ;
-(Class)objectType;
@end

