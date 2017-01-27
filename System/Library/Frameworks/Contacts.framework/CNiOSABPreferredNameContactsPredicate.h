/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContactPredicate.h>

@class NSString;

@interface CNiOSABPreferredNameContactsPredicate : CNPredicate <CNiOSContactPredicate> {

	NSRange _range;

}

@property (readonly) NSRange range;                                 //@synthesize range=_range - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSRange)range;
-(CFArrayRef)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 error:(_CFError*)arg5 ;
-(BOOL)cn_supportsNativeSorting;
-(id)initWithRange:(NSRange)arg1 ;
@end

