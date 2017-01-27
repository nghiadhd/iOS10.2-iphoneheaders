/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, ACAccount, NSArray, ACDataclassAction;

@interface ACUIDataclassActionPicker : NSObject {

	NSMutableArray* _affectedDataclasses;
	ACAccount* _affectedAccount;
	NSArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;                                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * affectedDataclasses;                               //@synthesize affectedDataclasses=_affectedDataclasses - In the implementation block
@property (nonatomic,readonly) ACAccount * affectedAccount;                             //@synthesize affectedAccount=_affectedAccount - In the implementation block
@property (nonatomic,readonly) BOOL hasDestructiveActions; 
@property (nonatomic,readonly) ACDataclassAction * firstDestructiveAction; 
@property (nonatomic,readonly) long long priorityIndex; 
-(NSArray *)actions;
-(id)title;
-(id)message;
-(id)showInViewController:(id)arg1 ;
-(ACDataclassAction *)firstDestructiveAction;
-(id)actionOfType:(long long)arg1 ;
-(BOOL)hasDestructiveActions;
-(id)descriptionForDataclassAction:(id)arg1 ;
-(NSArray *)affectedDataclasses;
-(BOOL)hasActionOfType:(long long)arg1 ;
-(ACAccount *)affectedAccount;
-(id)_stringForMessage:(id)arg1 withAccountType:(id)arg2 dataclassDescription:(id)arg3 ;
-(id)initWithActions:(id)arg1 affectingAccount:(id)arg2 ;
-(void)addAffectedDataclass:(id)arg1 ;
-(long long)priorityIndex;
-(void)setAffectedDataclasses:(NSArray *)arg1 ;
@end

