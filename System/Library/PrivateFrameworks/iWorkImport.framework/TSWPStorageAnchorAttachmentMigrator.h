/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSWPStorageAnchorAttachmentMigrator : NSObject {

	NSMutableArray* _charIndexPlacementIndexArray;

}

@property (nonatomic,retain) NSMutableArray * charIndexPlacementIndexArray;              //@synthesize charIndexPlacementIndexArray=_charIndexPlacementIndexArray - In the implementation block
-(NSMutableArray *)charIndexPlacementIndexArray;
-(void)setCharIndexPlacementIndexArray:(NSMutableArray *)arg1 ;
-(id)didCopyFromSourceWPStorage:(id)arg1 toTemporaryStorage:(id)arg2 copiedRange:(NSRange)arg3 ;
-(void)didInsertIntoDestinationWPStorage:(id)arg1 insertionLocation:(unsigned long long)arg2 dolcContext:(id)arg3 storageTransaction:(TSWPStorageTransaction*)arg4 changeSession:(id)arg5 ;
-(void)dealloc;
@end

