/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DADaemonIMAPNotes.bundle/DADaemonIMAPNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAIMAPNotes/DAIMAPNotesAccount.h>
#import <DADaemonIMAPNotes/DADataclassLockWatcher.h>

@class IMAPAccount, MFAttachmentLibraryManager, NSMutableDictionary, NSMutableArray, NSString;

@interface DAIMAPNotesDaemonAccount : DAIMAPNotesAccount <DADataclassLockWatcher> {

	BOOL _isShuttingDown;
	BOOL _isSpinning;
	int _outstandingInvocationCount;
	IMAPAccount* _imapMailAccount;
	MFAttachmentLibraryManager* _attachmentManager;
	NSMutableDictionary* _daFoldersByFolderId;
	NSMutableArray* _notesNeedingBodyDownload;
	/*^block*/id _fullyShutDownCallback;

}

@property (nonatomic,retain) IMAPAccount * imapMailAccount;                                 //@synthesize imapMailAccount=_imapMailAccount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * daFoldersByFolderId;                     //@synthesize daFoldersByFolderId=_daFoldersByFolderId - In the implementation block
@property (nonatomic,retain) NSMutableArray * notesNeedingBodyDownload;                     //@synthesize notesNeedingBodyDownload=_notesNeedingBodyDownload - In the implementation block
@property (assign,nonatomic) BOOL isSpinning;                                               //@synthesize isSpinning=_isSpinning - In the implementation block
@property (assign,nonatomic) int outstandingInvocationCount;                                //@synthesize outstandingInvocationCount=_outstandingInvocationCount - In the implementation block
@property (nonatomic,copy) id fullyShutDownCallback;                                        //@synthesize fullyShutDownCallback=_fullyShutDownCallback - In the implementation block
@property (assign,nonatomic) BOOL isShuttingDown;                                           //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,readonly) MFAttachmentLibraryManager * attachmentManager;              //@synthesize attachmentManager=_attachmentManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setMailHacks;
-(void)dealloc;
-(id)waiterID;
-(void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(BOOL)arg7 isResyncAfterConnectionFailed:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 consumer:(id)arg10 ;
-(void)setIsShuttingDown:(BOOL)arg1 ;
-(BOOL)isShuttingDown;
-(MFAttachmentLibraryManager *)attachmentManager;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(id)defaultNotesFolder;
-(id)notesFolders;
-(void)_setSpinning:(BOOL)arg1 ;
-(void)deviceWillSleep;
-(void)deviceDidWake;
-(id)localNotesAccountInContext:(id)arg1 ;
-(void)addNoteNeedingBodyDownload:(id)arg1 ;
-(void)setImapMailAccount:(IMAPAccount *)arg1 ;
-(void)setNotesNeedingBodyDownload:(NSMutableArray *)arg1 ;
-(IMAPAccount *)imapMailAccount;
-(void)setDaFoldersByFolderId:(NSMutableDictionary *)arg1 ;
-(id)_copyDAFolderFromMailboxUid:(id)arg1 isDefault:(BOOL)arg2 ;
-(NSMutableDictionary *)daFoldersByFolderId;
-(id)_copyNotesStoreFromDAFolder:(id)arg1 withNoteContext:(id)arg2 ;
-(void)_noteInvocationFinished;
-(void)_reallySyncNotesFolderListWithConsumer:(id)arg1 ;
-(int)outstandingInvocationCount;
-(void)setOutstandingInvocationCount:(int)arg1 ;
-(void)_syncNotesFolderListInLockWithConsumer:(id)arg1 ;
-(NSMutableArray *)notesNeedingBodyDownload;
-(id)fullyShutDownCallback;
-(void)setFullyShutDownCallback:(id)arg1 ;
-(void)syncNotesFolderListWithConsumer:(id)arg1 ;
-(id)notesFoldersByFolderId;
-(void)shutDownAndCallCallback:(/*^block*/id)arg1 ;
-(void)setIsSpinning:(BOOL)arg1 ;
-(BOOL)isSpinning;
@end

