/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/NoteCollectionObject.h>
#import <libobjc.A.dylib/ICLegacyAccount.h>

@class NSDictionary, NSNumber, NSString, NSSet, NoteStoreObject;

@interface NoteAccountObject : NoteCollectionObject <ICLegacyAccount> {

	NSDictionary* _constraints;
	NSNumber* _preventMovingNotesToOtherAccounts;

}

@property (nonatomic,retain) NSNumber * type; 
@property (nonatomic,retain) NSString * constraintsPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * constraints;                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSString * accountIdentifier; 
@property (nonatomic,retain) NSSet * stores; 
@property (nonatomic,retain) NoteStoreObject * defaultStore; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) int accountType; 
@property (nonatomic,retain) NSString * pathToConstraintsPlist; 
@property (assign,nonatomic) BOOL didChooseToMigrate; 
@property (nonatomic,readonly) BOOL preventMovingNotesToOtherAccounts; 
-(NSDictionary *)constraints;
-(void)setConstraints:(NSDictionary *)arg1 ;
-(id)predicateForNotes;
-(BOOL)shouldMarkNotesAsDeleted;
-(id)collectionInfo;
-(id)basicAccountIdentifier;
-(BOOL)preventMovingNotesToOtherAccounts;
-(void)setPathToConstraintsPlist:(NSString *)arg1 ;
-(NSString *)pathToConstraintsPlist;
-(BOOL)validateDefaultStore:(id*)arg1 error:(id*)arg2 ;
-(void)willSave;
-(void)didTurnIntoFault;
-(void)setAccountType:(int)arg1 ;
-(id)emailAddress;
-(BOOL)supportsAttachments;
-(int)accountType;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)objectIdentifier;
-(id)folders;
-(id)defaultFolder;
-(id)storeForExternalId:(id)arg1 ;
@end

