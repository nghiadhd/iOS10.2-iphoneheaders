/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Accounts/DataclassOwners/Notes.bundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDDataclassOwnerProtocol <NSObject>
@optional
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2;

@required
+(id)dataclasses;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2;
-(BOOL)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;

@end

