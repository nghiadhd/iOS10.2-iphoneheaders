/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, NSDictionary;

@interface ICAccountUtilities : NSObject {

	BOOL _primaryICloudACAccountValid;
	ACAccount* _primaryICloudACAccount;
	ACAccountStore* _accountStore;
	NSDictionary* _currentICloudAccountState;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                                      //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSDictionary * currentICloudAccountState;                                             //@synthesize currentICloudAccountState=_currentICloudAccountState - In the implementation block
@property (assign,getter=isPrimaryICloudACAccountValid,nonatomic) BOOL primaryICloudACAccountValid;              //@synthesize primaryICloudACAccountValid=_primaryICloudACAccountValid - In the implementation block
@property (readonly) ACAccount * primaryICloudACAccount;                                                         //@synthesize primaryICloudACAccount=_primaryICloudACAccount - In the implementation block
@property (nonatomic,readonly) BOOL primaryICloudAccountEnabled; 
@property (nonatomic,readonly) BOOL didChooseToMigratePrimaryICloudAccount; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)didChooseToMigratePrimaryICloudAccount;
-(id)initForObservingAccountStoreChanges:(BOOL)arg1 ;
-(void)setPrimaryICloudACAccountValid:(BOOL)arg1 ;
-(void)setCurrentICloudAccountState:(NSDictionary *)arg1 ;
-(BOOL)isPrimaryICloudACAccountValid;
-(void)updateICloudACAccountFromStore;
-(void)internalInvalidatePrimaryICloudACAccount;
-(NSDictionary *)currentICloudAccountState;
-(BOOL)primaryICloudAccountEnabled;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(void)invalidatePrimaryICloudACAccount;
-(ACAccount *)primaryICloudACAccount;
-(id)allICloudACAccounts;
@end

