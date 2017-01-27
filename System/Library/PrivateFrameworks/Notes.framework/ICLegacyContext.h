/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICLegacyContext
@required
+(id)newLegacyContext;
-(void)reset;
-(void)performBlockAndWait:(/*^block*/id)arg1;
-(void)performBlock:(/*^block*/id)arg1;
-(id)allVisibleNotesForAccountWithObjectID:(id)arg1;
-(BOOL)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1;
-(unsigned long long)countOfVisibleNotesForAccountWithObjectID:(id)arg1;
-(id)allVisibleNoteObjectIDsForAccountWithObjectID:(id)arg1;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2;

@end

