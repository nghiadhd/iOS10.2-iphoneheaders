/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIDomainObjectPicker.h>

@class NSArray;

@interface SAABPersonPicker : SAUIDomainObjectPicker

@property (nonatomic,copy) NSArray * persons; 
@property (assign,nonatomic) BOOL showImmediately; 
+(id)personPicker;
+(id)personPickerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)persons;
-(void)setPersons:(NSArray *)arg1 ;
-(BOOL)showImmediately;
-(void)setShowImmediately:(BOOL)arg1 ;
@end

