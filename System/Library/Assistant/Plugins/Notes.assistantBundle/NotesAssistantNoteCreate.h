/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/Notes.assistantBundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SANoteCreate.h>
#import <Notes/NotesAssistantCommand.h>

@class NoteContext, ICNoteContext, NSString;

@interface NotesAssistantNoteCreate : SANoteCreate <NotesAssistantCommand> {

	/*^block*/id _completionHandler;
	NoteContext* _noteContext;
	ICNoteContext* _icNoteContext;
	BOOL _assumeLocalStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resultForSuccessWithNoteID:(id)arg1 ;
-(void)setAssumeLocalStore:(BOOL)arg1 ;
-(id)resultForError:(id)arg1 ;
-(void)_createNote:(/*^block*/id)arg1 ;
-(id)_validate;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

