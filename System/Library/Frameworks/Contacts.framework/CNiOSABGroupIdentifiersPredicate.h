/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSGroupPredicate.h>

@class NSArray, NSString;

@interface CNiOSABGroupIdentifiersPredicate : CNPredicate <CNiOSGroupPredicate> {

	NSArray* _identifiers;

}

@property (nonatomic,copy,readonly) NSArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)descriptionOfIdentifiers:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)initWithIdentifiers:(id)arg1 ;
-(CFArrayRef)cn_copyGroupsInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(NSArray *)identifiers;
@end

