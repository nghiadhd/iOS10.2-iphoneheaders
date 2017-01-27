/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionCurator.h>

@class CNContactStore, NSString;

@interface _CNUIUserActionCurator : NSObject <CNUIUserActionCurator> {

	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)curateUserAction:(id)arg1 ;
-(id)_curationValueForSuggestedValue:(id)arg1 userAction:(id)arg2 localizedAppName:(id)arg3 ;
@end

