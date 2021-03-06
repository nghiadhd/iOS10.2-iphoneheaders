/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/RichLinkProvider.bundle/RichLinkProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>
#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class NSMutableArray, NSArray, NSString;

@interface RichLinkAttachmentSubstituter : NSObject <NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate> {

	NSMutableArray* _archivedAttachments;
	NSArray* _attachmentsForUnarchiving;

}

@property (nonatomic,copy,readonly) NSMutableArray * archivedAttachments;              //@synthesize archivedAttachments=_archivedAttachments - In the implementation block
@property (nonatomic,copy) NSArray * attachmentsForUnarchiving;                        //@synthesize attachmentsForUnarchiving=_attachmentsForUnarchiving - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAttachmentsForUnarchiving:(NSArray *)arg1 ;
-(NSMutableArray *)archivedAttachments;
-(NSArray *)attachmentsForUnarchiving;
-(id)init;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
@end

