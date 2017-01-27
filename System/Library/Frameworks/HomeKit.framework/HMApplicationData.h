/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFPrettyDescription.h>
#import <libobjc.A.dylib/HFStateDumpSerializable.h>

@class NSMutableDictionary, NSSet, NSString, NSArray;

@interface HMApplicationData : NSObject <HFPrettyDescription, HFStateDumpSerializable> {

	NSMutableDictionary* _applicationData;
	NSSet* _allowedObjectClasses;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * applicationData;              //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,retain) NSSet * allowedObjectClasses;                       //@synthesize allowedObjectClasses=_allowedObjectClasses - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allKeys; 
@property (nonatomic,copy,readonly) NSArray * allValues; 
-(id)hf_serializedStateDumpRepresentation;
-(id)hf_prettyDescriptionOfType:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(id)dictionary;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allKeys;
-(NSArray *)allValues;
-(id)dictionaryRepresentation;
-(void)setApplicationData:(NSMutableDictionary *)arg1 ;
-(id)initWithContentsOfDictionary:(id)arg1 allowedObjectClasses:(id)arg2 ;
-(id)initWithContentsOfDictionary:(id)arg1 ;
-(BOOL)isAllowedClassForObject:(id)arg1 ;
-(NSSet *)allowedObjectClasses;
-(void)setAllowedObjectClasses:(NSSet *)arg1 ;
-(NSMutableDictionary *)applicationData;
@end

