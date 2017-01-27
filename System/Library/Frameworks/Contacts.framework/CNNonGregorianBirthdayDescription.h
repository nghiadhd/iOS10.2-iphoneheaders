/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNNonGregorianBirthdayDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2 ;
-(BOOL)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2 ;
-(/*^block*/id)fromPlistTransform;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(int)abPropertyID:(int*)arg1 ;
-(id)CNValueForContact:(id)arg1 ;
-(Class)valueClass;
@end

