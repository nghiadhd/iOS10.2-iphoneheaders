/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABPersonLinkingUIDelegate
@required
-(BOOL)shouldAllowLinkingAnotherContact;
-(long long)numberOfLinkedCardRows;
-(id)sourceNameForCardAtRow:(long long)arg1;
-(id)personNameForCardAtRow:(long long)arg1;
-(BOOL)manuallyUnlinkCardAtRow:(long long)arg1;
-(BOOL)canUnlinkCardAtRow:(long long)arg1;
-(BOOL)manuallyLinkPerson:(id)arg1;
-(BOOL)shouldAllowLinkingPersonWithRecordID:(int)arg1;
-(id)newPersonViewControllerForLinkedCardAtRow:(long long)arg1;
-(id)newPeoplePickerForLinking;

@end

