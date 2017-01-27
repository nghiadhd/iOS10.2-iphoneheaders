/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/TTMergeableUndoString.h>

@interface TTMergeableAttributedString : TTMergeableUndoString
+(id)attributesForRun:(const AttributeRun*)arg1 ;
+(long long)writingDirectionForAttribute:(int)arg1 ;
+(int)attributeForWritingDirection:(long long)arg1 ;
+(void)saveAttributesOfString:(id)arg1 toArchive:(String*)arg2 ;
+(void)saveAttributes:(id)arg1 toArchive:(AttributeRun*)arg2 ;
+(id)whitelistedAttributesForStyle;
+(id)whitelistedTypingAttributes;
+(id)whitelistedAttributesForModel;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)saveToArchive:(String*)arg1 ;
-(id)initWithArchive:(const String*)arg1 andReplicaID:(id)arg2 ;
-(void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(String*)arg2 ;
-(BOOL)attributesEqual:(id)arg1 toRange:(NSRange)arg2 modelEqual:(BOOL*)arg3 ;
-(void)setAttributes:(id)arg1 substring:(TopoSubstring*)arg2 ;
-(BOOL)attributesEqual:(id)arg1 to:(id)arg2 modelEqual:(BOOL*)arg3 ;
-(id)serialize;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

