/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPageNumberAttachment.h>

@interface KNSlideNumberAttachment : TSWPPageNumberAttachment
+(id)newObjectForUnarchiver:(id)arg1 ;
+(const TextualAttachmentArchive*)textualAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3 ;
-(const TextualAttachmentArchive*)textualAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(BOOL)shouldArchiveStringEquivalent;
@end

